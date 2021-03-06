//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "NCNotificationListContentObserver.h"
#import "NCNotificationListViewControllerDestinationDelegate.h"
#import "NCNotificationListViewControllerUserInteractionDelegate.h"
#import "SBDashBoardAppearanceProviding.h"
#import "SBDashBoardDateViewScrolling.h"
#import "SBDashBoardNotificationAdjunctListViewControllerDelegate.h"
#import "SBDashBoardNotificationDestination.h"
#import "SBDashBoardStatusBarBackgroundIntersecting.h"
#import "SBMotionGestureObserver.h"
#import "SBSystemGestureRecognizerDelegate.h"

@class BSTimer, CARAutomaticDNDStatus, MTMaterialView, NCNotificationCombinedListViewController, NCNotificationRequest, NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, SBDashBoardComponent, SBDashBoardNotificationAdjunctListViewController, SBFTouchPassThroughView, SBScreenEdgePanGestureRecognizer, UIColor, _UILegibilitySettings;

@interface SBDashBoardCombinedListViewController : SBDashBoardViewControllerBase <NCNotificationListViewControllerUserInteractionDelegate, NCNotificationListViewControllerDestinationDelegate, SBDashBoardNotificationAdjunctListViewControllerDelegate, SBMotionGestureObserver, NCNotificationListContentObserver, SBDashBoardStatusBarBackgroundIntersecting, SBSystemGestureRecognizerDelegate, SBDashBoardNotificationDestination, SBDashBoardDateViewScrolling, SBDashBoardAppearanceProviding>
{
    NCNotificationCombinedListViewController *_listViewController;
    MTMaterialView *_captureOnlyMaterialView;
    SBFTouchPassThroughView *_clippingView;
    double _headerOffset;
    double _footerOffset;
    _Bool _listPresentingContent;
    _Bool _listDismissingContent;
    _Bool _listBeingLaidOut;
    NSHashTable *_notificationEffectViews;
    BSTimer *_significantUserInteractionTimer;
    _Bool _listSuppressLongLookDismissal;
    SBDashBoardComponent *_dateViewComponent;
    SBDashBoardComponent *_statusBarBackgroundComponent;
    _Bool _carModeDNDStatusActive;
    id <SBDashBoardCombinedListViewControllerDelegate> _delegate;
    id <SBDashBoardNotificationDispatcher> _dispatcher;
    SBDashBoardNotificationAdjunctListViewController *_adjunctListViewController;
    NSMutableDictionary *_staticContentProviders;
    NSMutableDictionary *_hiddenPreviewContentProviders;
    NSMutableDictionary *_recentsSectionHiddenPreviewContentProviders;
    NSMutableSet *_phoneCoalescingContentProviders;
    NSMutableSet *_recentsSectionPhoneCoalescingContentProviders;
    NCNotificationRequest *_activeRaiseToListenNotificationRequest;
    CARAutomaticDNDStatus *_carModeDNDStatus;
    NSMutableOrderedSet *_filteredNotificationRequests;
    SBScreenEdgePanGestureRecognizer *_screenEdgePanGestureRecognizer;
}

@property(retain, nonatomic) SBScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer; // @synthesize screenEdgePanGestureRecognizer=_screenEdgePanGestureRecognizer;
@property(retain, nonatomic) NSMutableOrderedSet *filteredNotificationRequests; // @synthesize filteredNotificationRequests=_filteredNotificationRequests;
@property(nonatomic, getter=isCarModeDNDStatusActive) _Bool carModeDNDStatusActive; // @synthesize carModeDNDStatusActive=_carModeDNDStatusActive;
@property(retain, nonatomic) CARAutomaticDNDStatus *carModeDNDStatus; // @synthesize carModeDNDStatus=_carModeDNDStatus;
@property(retain, nonatomic) NCNotificationRequest *activeRaiseToListenNotificationRequest; // @synthesize activeRaiseToListenNotificationRequest=_activeRaiseToListenNotificationRequest;
@property(retain, nonatomic) NSMutableSet *recentsSectionPhoneCoalescingContentProviders; // @synthesize recentsSectionPhoneCoalescingContentProviders=_recentsSectionPhoneCoalescingContentProviders;
@property(retain, nonatomic) NSMutableSet *phoneCoalescingContentProviders; // @synthesize phoneCoalescingContentProviders=_phoneCoalescingContentProviders;
@property(retain, nonatomic) NSMutableDictionary *recentsSectionHiddenPreviewContentProviders; // @synthesize recentsSectionHiddenPreviewContentProviders=_recentsSectionHiddenPreviewContentProviders;
@property(retain, nonatomic) NSMutableDictionary *hiddenPreviewContentProviders; // @synthesize hiddenPreviewContentProviders=_hiddenPreviewContentProviders;
@property(retain, nonatomic) NSMutableDictionary *staticContentProviders; // @synthesize staticContentProviders=_staticContentProviders;
@property(retain, nonatomic) SBDashBoardNotificationAdjunctListViewController *adjunctListViewController; // @synthesize adjunctListViewController=_adjunctListViewController;
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak id <SBDashBoardCombinedListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasContent; // @synthesize hasContent=_listPresentingContent;
- (void).cxx_destruct;
- (id)notificationListScrollView;
- (void)clearAll;
- (void)_handlePanGesture:(id)arg1;
- (void)_repostFilteredNotificationRequests;
- (void)_removeFilteredNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_filterNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (unsigned long long)_matchingIndexInFilteredListForNotificationRequest:(id)arg1;
- (_Bool)_isNotificationRequestInFilteredList:(id)arg1;
- (_Bool)_shouldFilterNotificationRequest:(id)arg1;
- (void)_updateNotificationListWhenCarModeDNDIsActive;
- (_Bool)_getCarModeDNDActiveState;
- (void)_handleCarModeDNDStateChange:(_Bool)arg1;
- (void)_setupCarModeDNDStatus;
- (_Bool)_allowsDateViewScroll;
- (void)_hideRequestsFromIncomingSectionListIfNecessaryForSectionSettings:(id)arg1;
- (void)_hideOrShowRequestsForParentNotificationSectionSettings:(id)arg1;
- (void)_hideOrShowRequestsForNotificationSectionSettings:(id)arg1;
- (_Bool)_notificationSectionSettingsHidesSection:(id)arg1;
- (void)_hideOrShowNotificationSectionForAuthenticationChange;
- (void)_invalidateTimerIfSnoozeAlarmNotificationStaticContentProvider:(id)arg1;
- (void)_updateHiddenPreviewContentProviderOnModifyingNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 inContentProviders:(id)arg3;
- (void)_updatePhoneCoalescingContentProviderOnRemovingNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 inRecentsSection:(_Bool)arg3;
- (void)_updateHiddenPreviewContentProviderOnRemovingNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 inRecentsSection:(_Bool)arg3;
- (void)_swapNotificationRequest:(id)arg1 withNewRequest:(id)arg2 inRecentsSection:(_Bool)arg3;
- (id)_snoozeAlarmNotificationStaticContentProviderForNotificationRequest:(id)arg1 viewController:(id)arg2;
- (void)_coalescePhoneCoalescingNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_coalesceHiddenPreviewNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 inContentProviders:(id)arg3 removeBlock:(CDUnknownBlockType)arg4;
- (void)_coalesceRecentsSectionHiddenPreviewNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_coalesceIncomingSectionHiddenPreviewNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)_phoneCoalescingContentProviderWithSameContactAsNotificationRequest:(id)arg1 inContentProviders:(id)arg2;
- (id)_threadIdentifierForNotificationRequest:(id)arg1;
- (id)_identifierForNotificationRequest:(id)arg1;
- (double)_minListHeightForPadding;
- (_Bool)_shouldPadBottomSpacing;
- (double)_minInsetsToPushDateOffScreen;
- (struct CGSize)_adjunctListViewSizeIncludingSpacing;
- (struct CGSize)_adjunctListViewSize;
- (struct UIEdgeInsets)_listViewDefaultContentInsets;
- (struct CGRect)_suggestedListViewFrame;
- (void)_performClearActionForNotificationsCoalescedWithNotificationRequest:(id)arg1 inCoalescingContentProvider:(id)arg2;
- (void)_performClearActionForNotificationsCoalescedWithNotificationRequest:(id)arg1;
- (void)_requestClearingNotificationsCoalescedWithNotificationRequest:(id)arg1 inHiddenPreviewContentProviders:(id)arg2;
- (_Bool)_isNotificationRequest:(id)arg1 coalescedInHiddenPreviewContentProviders:(id)arg2;
- (_Bool)_isNotificationRequestForRecentsSection:(id)arg1;
- (void)_movePhoneCoalescingContentProvidersToRecentsSectionForNotificationRequestsPassingTest:(CDUnknownBlockType)arg1;
- (void)_movePhoneCoalescingContentProvidersToRecentsSection;
- (void)_moveHiddenPreviewContentProvidersToRecentsSectionForNotificationRequestsPassingTest:(CDUnknownBlockType)arg1;
- (void)_moveHiddenPreviewContentProvidersToRecentsSection;
- (void)_updateNotificationListOnDeviceReauthentication;
- (void)updateAppearanceForStatusBarBackgroundHidden:(_Bool)arg1;
@property(readonly, nonatomic) double distanceFromBarToContent;
- (void)updateAppearanceForHidden:(_Bool)arg1 offset:(struct CGPoint)arg2;
@property(readonly, nonatomic) double topContentInset;
@property(readonly, nonatomic) double clippingOffset;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
- (void)_recoalesceHiddenPreviewNotificationRequests:(id)arg1 intoHiddenPreviewContentProviders:(id)arg2 removeBlock:(CDUnknownBlockType)arg3;
- (void)_coalesceRecentsSectionHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_coalesceIncomingSectionHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_coalesceHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_coalesceHiddenPreviewNotifications;
- (void)_expandRecentsSectionHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_expandIncomingSectionHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_expandHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_expandHiddenPreviewNotifications;
- (id)_hiddenPreviewContentProvidersToRevealContentFromProviders:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)_updateHiddenPreviewContentProvidersForAuthenticationStateChange:(id)arg1;
- (_Bool)_isContentSuppressedForNotificationRequest:(id)arg1;
- (_Bool)_isDeviceAuthenticated;
- (unsigned long long)_contentPreviewSettingForNotificationRequest:(id)arg1;
- (id)_notificationSectionSettingsForSectionIdentifier:(id)arg1;
- (void)_updateCaptureOnlyMaterialView;
- (_Bool)_allowNotificationsRevealPolicy;
- (void)_updateListViewContentInset;
- (void)_layoutListView;
- (void)_updatePresentation;
- (void)_performSelfCorrectingListViewAction:(CDUnknownBlockType)arg1;
- (void)_setListHasContent:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationTransition;
- (long long)presentationPriority;
- (long long)presentationType;
- (void)didReceiveRaiseGesture;
- (void)contentChanged:(_Bool)arg1;
- (void)notificationListViewController:(id)arg1 didRemoveNotificationRequestInLongLook:(id)arg2;
- (void)notificationListViewController:(id)arg1 setRaiseGestureDetectionEnabled:(_Bool)arg2 forNotificationRequest:(id)arg3;
- (void)notificationListViewController:(id)arg1 willDismissRemainingContentWithTransitionCoordinator:(id)arg2;
- (void)notificationListViewControllerIsUpdatingContent:(id)arg1;
- (void)notificationListViewController:(id)arg1 willPresentInitialContentWithTransitionCoordinator:(id)arg2;
- (_Bool)notificationListViewController:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;
- (void)notificationListViewController:(id)arg1 didEndDisplayingCellForNotificationRequest:(id)arg2;
- (id)notificationListViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2 viewController:(id)arg3;
- (id)notificationUsageTrackingStateForNotificationListViewController:(id)arg1;
- (void)notificationListViewController:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)notificationListViewController:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)notificationListViewController:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)notificationListViewController:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(_Bool)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)notificationListViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)notificationListViewController:(id)arg1 shouldFinishLongLookTransitionForNotification:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)notificationListViewController:(id)arg1 convertRect:(struct CGRect)arg2 toLocalWindowSpaceFromView:(id)arg3;
- (_Bool)notificationListViewControllerShouldAllowRecentNotificationsReveal:(id)arg1;
- (double)defaultRestingOffsetExcludingAdjunct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)notificationListViewControllerDidEndScrolling:(id)arg1;
- (void)notificationListViewControllerDidScroll:(id)arg1;
- (void)notificationListViewControllerDidSignificantUserInteraction:(id)arg1;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (void)adjunctListViewController:(id)arg1 didUpdateWithSize:(struct CGSize)arg2;
- (double)interItemSpacingToMimicForAdjunctListViewController:(id)arg1;
- (struct UIEdgeInsets)insetMarginsToMimicForAdjunctListViewController:(id)arg1;
- (struct CGSize)sizeToMimicForAdjunctListViewController:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)rebuildEverythingForReason:(id)arg1;
- (void)updateForPresentation:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long participantState;
@property(readonly) Class superclass;

@end

