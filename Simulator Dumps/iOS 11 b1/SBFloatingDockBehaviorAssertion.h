//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSDate, NSString;

@interface SBFloatingDockBehaviorAssertion : NSObject <BSDescriptionProviding>
{
    _Bool _gesturePossible;
    unsigned long long _level;
    double _progress;
    NSString *_reason;
    NSDate *_timestamp;
}

@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool gesturePossible; // @synthesize gesturePossible=_gesturePossible;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isPinned) _Bool pinned;
- (void)modifyProgress:(double)arg1 interactive:(_Bool)arg2;
- (void)invalidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithVisibleProgress:(double)arg1 gesturePossible:(_Bool)arg2 atLevel:(unsigned long long)arg3 reason:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)initWithPinned:(_Bool)arg1 gesturePossible:(_Bool)arg2 atLevel:(unsigned long long)arg3 reason:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
