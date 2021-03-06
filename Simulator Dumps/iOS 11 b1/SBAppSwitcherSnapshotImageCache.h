//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, SBAppSwitcherSettings, SBApplicationController, SBIconController, SBOrientationLockManager;

@interface SBAppSwitcherSnapshotImageCache : NSObject
{
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    NSObject<OS_dispatch_queue> *_controlQueue;
    NSMutableDictionary *_cachedSnapshots;
    NSMutableDictionary *_snapshotLoadCompletionBlocks;
    NSMutableSet *_displayItemsCurrentlyBeingLoaded;
    NSArray *_appLayoutsInPriorityOrder;
    SBAppSwitcherSettings *_settings;
    struct _NSRange _lastVisibleRange;
    NSArray *_lastHighPriorityAppLayouts;
    NSArray *_lastAllAppLayouts;
    _Bool _lastPriorityBiasedForward;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBOrientationLockManager *_orientationLockManager;
    _Bool _cachingEnabled;
    id <SBAppSwitcherSnapshotImageCacheDelegate> _delegate;
}

@property(nonatomic) _Bool cachingEnabled; // @synthesize cachingEnabled=_cachingEnabled;
@property(nonatomic) __weak id <SBAppSwitcherSnapshotImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_uiImageForCGImage:(struct CGImage *)arg1 forSnapshotRequest:(id)arg2;
- (void)_asynchronouslyLoadSnapshotFromRequest:(id)arg1;
- (_Bool)_keepGoingForRequest:(id)arg1;
- (struct CGImage *)_createDecodedImageIfPossible:(struct CGImage *)arg1;
- (void)_addCacheEntryForImage:(id)arg1 fromRequest:(id)arg2;
- (void)_snapshotImage:(id)arg1 finishedLoadingForRequest:(id)arg2;
- (id)_cachableAppLayouts;
- (void)_enqueueNextSnapshotLoadIfNecessary;
- (void)_purgeLowPrioritySnapshots;
- (void)_purgeAllSnapshots;
- (void)_addCompletionBlock:(CDUnknownBlockType)arg1 forDisplayItem:(id)arg2;
- (long long)_orientationForAppLayout:(id)arg1;
- (id)_highPriorityAppLayouts;
- (_Bool)_biasForwardLoading;
- (struct _NSRange)_visibleAppLayoutRange;
- (unsigned long long)_appLayoutsToCacheCount;
- (id)_allAppLayouts;
- (id)_snapshotRequestForDisplayItem:(id)arg1 inAppLayout:(id)arg2;
- (void)_createRequestAndCacheSnapshotFor:(id)arg1 inAppLayout:(id)arg2;
- (void)_callCompletionsForDisplayItem:(id)arg1 withCacheEntry:(id)arg2;
- (void)_updateAppLayoutPriorityList;
- (id)_representedApplicationSceneEntityForDisplayItem:(id)arg1;
- (id)_cachableAppLayoutsForTesting;
- (id)_appLayoutsInPriorityOrder;
- (id)description;
- (void)asyncSnapshotForDisplayItem:(id)arg1 inAppLayout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCache;
- (void)_resetLastCachedValues;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)_initWithDelegate:(id)arg1 iconController:(id)arg2 applicationController:(id)arg3 orientationLockManager:(id)arg4 settings:(id)arg5;

@end

