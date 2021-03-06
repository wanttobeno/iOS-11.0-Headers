//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBFluidSwitcherPersonality.h"
#import "_UISettingsKeyObserver.h"

@class NSString, SBAppSwitcherSettings, SBFluidSwitcherViewController;

@interface SBDeckSwitcherPersonality : NSObject <_UISettingsKeyObserver, SBFluidSwitcherPersonality>
{
    SBAppSwitcherSettings *_settings;
    long long _grabbedDraggingIndex;
    double _inputContentOffsetAdjustmentForIndexChange;
    double _outputContentOffsetAdjustmentForIndexChange;
    struct CGPoint _start;
    struct CGPoint _originalLocationInView;
    _Bool _inMultitasking;
    long long _gestureHoldTimer;
    struct CGPoint _scrollViewTouchOffset;
    double _originalContentOffsetX;
    SBFluidSwitcherViewController *_switcherViewController;
}

@property(nonatomic) __weak SBFluidSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
- (void).cxx_destruct;
- (void)_applyPrototypeSettingsToConstants;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)resetAdjustedScrollingState;
- (long long)_topIndexForLocationInSwitcherView:(struct CGPoint)arg1;
- (struct CGPoint)_adjustedOffsetForIndex:(long long)arg1 offset:(struct CGPoint)arg2 start:(struct CGPoint)arg3 originalLocationInView:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (double)_scaleTransformedXOrigin:(double)arg1 scrollProgress:(double)arg2;
- (double)_restingScrollProgressForProgress:(double)arg1 velocity:(struct CGPoint)arg2;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 ignoreInsertionsAndRemovals:(_Bool)arg2;
- (double)_scrollProgressForIndex:(unsigned long long)arg1;
- (double)_titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)_titleOpacityForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=_hideInactiveCardsForAppZoom) _Bool hideInactiveCardsForAppZoom;
- (_Bool)_inactiveCardsHidden;
- (double)_opacityForIndex:(unsigned long long)arg1 stackedProgress:(double)arg2 scrollProgress:(double)arg3 ignoringInactiveCardsHidden:(_Bool)arg4 ignoringVisibleItemContainers:(_Bool)arg5;
- (double)_blurForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)_preferredVisibleMarginForTopPage;
- (double)_desiredXOriginForQuantizedTopPage;
- (struct CGAffineTransform)_transformForIndex:(unsigned long long)arg1 stackedProgress:(double)arg2 scrollProgress:(double)arg3;
- (double)_scaleForTransformForIndex:(unsigned long long)arg1 stackedProgress:(double)arg2 scrollProgress:(double)arg3;
- (double)_scaleInSwitcherViewForIndex:(unsigned long long)arg1 stackedProgress:(double)arg2 scrollProgress:(double)arg3;
- (struct CGAffineTransform)_transformForIndex:(unsigned long long)arg1;
- (double)_counteractScrollingForOffset:(double)arg1 scrollProgress:(double)arg2;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 stackedProgress:(double)arg3 frameOrigin:(double)arg4 ignoreInsertionsAndRemovals:(_Bool)arg5;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 stackedProgress:(double)arg3 scrollProgress:(double)arg4 ignoringScrollOffset:(_Bool)arg5 ignoreInsertionsAndRemovals:(_Bool)arg6;
- (double)_leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 stackedProgress:(double)arg3 scrollProgress:(double)arg4 ignoreInsertionsAndRemovals:(_Bool)arg5;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 depth:(double)arg3 ignoreInsertionsAndRemovals:(_Bool)arg4;
- (double)_depthForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ignoreInsertionsAndRemovals:(_Bool)arg4;
- (struct CGRect)_scaleTransformedFrameForIndex:(unsigned long long)arg1;
- (struct CGRect)_scaleTransformedFrameForIndex:(unsigned long long)arg1 withUntransformedFrame:(struct CGRect)arg2 scrollProgress:(double)arg3;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1;
- (_Bool)_isPerformingSlideOffTransitionFromSwitcherToHomeScreen;
- (id)_visibleItemContainersRelativeToContainerView;
- (double)_switcherCenterYOffsetWhenPresented;
- (id)_topVisibleAppLayout;
- (double)_scrollProgressForContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)_contentOffsetForScrollProgress:(double)arg1;
@property(readonly, nonatomic, getter=_scrollRange) double scrollRange;
@property(readonly, nonatomic, getter=_numberOfItems) unsigned long long numberOfItems;
- (double)_stackedProgress;
- (double)_scrollProgress;
@property(readonly, nonatomic, getter=_switcherViewBounds) struct CGRect switcherViewBounds;
- (struct CGRect)_iconImageFrameForHomeScreenIconZoom;
- (long long)_effectiveUnlockedEnvironmentMode;
- (_Bool)shouldHurdleDockForIconZooms;
- (_Bool)canActivateControlCenter;
- (_Bool)shouldScrollWhenActivatingAppLayoutAtIndex:(unsigned long long)arg1;
- (id)appLayoutUnderWhichToAddDimmingView;
- (id)appLayoutForHomeScreenIconZoom;
- (id)topMostAppLayout;
- (double)dimmingAlpha;
- (double)baseHysteresisForStartingKillGesture;
- (double)wallpaperScale;
- (double)homeScreenScale;
- (double)homeScreenBlurProgress;
- (double)homeScreenAlpha;
- (double)switcherOpacity;
- (double)_cardCornerRadiusInAppSwitcher;
- (double)_cardCornerRadiusInApplicationDuringTransition:(_Bool)arg1;
- (double)cardCornerRadiusForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (struct CGSize)interpageSpacingForPaging;
- (_Bool)scrollViewPagingEnabled;
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1 ignoreInsertionsAndRemovals:(_Bool)arg2;
- (struct UIEdgeInsets)contentInset;
- (struct CGSize)contentSize;
- (double)decelerationRate;
- (unsigned long long)_newIndexOfItemAtIndex:(unsigned long long)arg1 afterRemovingItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)_activeIndexForInsertionOrRemoval;
- (id)itemsToKeepInHierarchyDuringAnimationForInsertion:(_Bool)arg1 direction:(unsigned long long)arg2 visibleItemRange:(struct _NSRange)arg3;
- (void)getIndicesToPreserveScrollPositionForInsertionOrRemovalAtIndex:(unsigned long long)arg1 isInserting:(_Bool)arg2 visibleItemRange:(struct _NSRange)arg3 startingScrollIndex:(unsigned long long *)arg4 finalScrollIndex:(unsigned long long *)arg5 animated:(_Bool)arg6;
- (unsigned long long)movementDirectionForInsertionOrRemovalAtIndex:(unsigned long long)arg1 isInserting:(_Bool)arg2;
- (_Bool)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1 visibleItemRange:(struct _NSRange)arg2;
- (void)didRemoveAppLayout:(id)arg1 fromIndex:(unsigned long long)arg2;
- (void)didInsertAppLayout:(id)arg1 atIndex:(unsigned long long)arg2;
- (double)dockProgress;
- (double)switcherCardScale;
- (double)snapshotScale;
- (_Bool)isIndexVisible:(unsigned long long)arg1 ignoreInsertionsAndRemovals:(_Bool)arg2;
- (double)_scaleForContainerView;
- (struct CGRect)_frameForContainerView;
- (double)scaleForIndex:(unsigned long long)arg1 mode:(long long)arg2;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 stackedProgress:(double)arg2 ignoreInsertionsAndRemovals:(_Bool)arg3;
- (struct CGRect)frameForIndex:(unsigned long long)arg1 mode:(long long)arg2;
- (void)willPerformLayout;
- (long long)updateModeForActiveGesture;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

