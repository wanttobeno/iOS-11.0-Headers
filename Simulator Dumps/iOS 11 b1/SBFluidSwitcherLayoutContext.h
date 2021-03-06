//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSDate, NSString, SBAppLayout, SBFluidSwitcherGesture, SBMainDisplayLayoutState, SBWorkspaceApplicationSceneTransitionContext;

@interface SBFluidSwitcherLayoutContext : NSObject <BSDescriptionProviding>
{
    _Bool _controlCenterPresented;
    _Bool _controlCenterPreviouslyPresented;
    long long _layoutPhase;
    SBMainDisplayLayoutState *_previousLayoutState;
    SBFluidSwitcherGesture *_activeGesture;
    SBWorkspaceApplicationSceneTransitionContext *_activeTransitionContext;
    SBMainDisplayLayoutState *_currentLayoutState;
    NSDate *_lastTransitionCompletionDate;
}

@property(retain, nonatomic) NSDate *lastTransitionCompletionDate; // @synthesize lastTransitionCompletionDate=_lastTransitionCompletionDate;
@property(retain, nonatomic) SBMainDisplayLayoutState *currentLayoutState; // @synthesize currentLayoutState=_currentLayoutState;
@property(readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *activeTransitionContext; // @synthesize activeTransitionContext=_activeTransitionContext;
@property(readonly, nonatomic, getter=wasControlCenterPreviouslyPresented) _Bool controlCenterPreviouslyPresented; // @synthesize controlCenterPreviouslyPresented=_controlCenterPreviouslyPresented;
@property(readonly, nonatomic, getter=isControlCenterPresented) _Bool controlCenterPresented; // @synthesize controlCenterPresented=_controlCenterPresented;
@property(retain, nonatomic) SBFluidSwitcherGesture *activeGesture; // @synthesize activeGesture=_activeGesture;
@property(retain, nonatomic) SBMainDisplayLayoutState *previousLayoutState; // @synthesize previousLayoutState=_previousLayoutState;
@property(readonly, nonatomic) long long layoutPhase; // @synthesize layoutPhase=_layoutPhase;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 currentAppLayouts:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)updateLayoutStateWithContext:(id)arg1 prepareIfNeeded:(CDUnknownBlockType)arg2 transition:(CDUnknownBlockType)arg3;
- (void)updateLayoutStateWithContext:(id)arg1;
@property(readonly, nonatomic) SBAppLayout *transitioningToAppLayout;
@property(readonly, nonatomic) SBAppLayout *transitioningFromAppLayout;
@property(readonly, nonatomic) SBAppLayout *appLayout;
@property(readonly, nonatomic) SBMainDisplayLayoutState *transitioningToLayoutState;
@property(readonly, nonatomic) SBMainDisplayLayoutState *transitioningFromLayoutState;
@property(readonly, nonatomic) SBMainDisplayLayoutState *layoutState;
- (id)initWithLayoutState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

