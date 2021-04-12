/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol WGWidgetDiscoveryControllerDelegate <NSObject>
@optional
-(BOOL)areWidgetsPinnedForWidgetDiscoveryController:(id)arg1;
-(BOOL)didPurgeNonCAMLSnapshotsForWidgetDiscoveryController:(id)arg1;
-(BOOL)widgetDiscoveryController:(id)arg1 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(id)arg2;
-(void)widgetDiscoveryController:(id)arg1 widgetWithBundleIdentifier:(id)arg2 didEncounterProblematicSnapshotAtURL:(id)arg3;
-(BOOL)shouldShowWidgetsPinningTeachingViewForWidgetDiscoveryController:(id)arg1;
-(void)widgetDiscoveryController:(id)arg1 didChangeWidgetsPinning:(BOOL)arg2;
-(void)widgetDiscoveryController:(id)arg1 requestUnlockWithCompletion:(/*^block*/id)arg2;
-(void)widgetDiscoveryController:(id)arg1 updateStatusBarAssertion:(id)arg2 withLegibilityStyle:(long long)arg3;
-(BOOL)widgetDiscoveryControllerShouldRespectFavorites:(id)arg1;
-(id)statusBarAssertionForWidgetDiscoveryController:(id)arg1 legibilityStyle:(long long)arg2;
-(BOOL)widgetDiscoveryControllerShouldIncludeInternalWidgets:(id)arg1;
-(BOOL)didPurgeNonASTCSnapshotsForWidgetDiscoveryController:(id)arg1;
-(BOOL)shouldShowWidgetsPinButtonForWidgetDiscoveryController:(id)arg1;
-(void)widgetDiscoveryControllerDidDismissWidgetsPinningTeachingView:(id)arg1;
-(void)widgetDiscoveryController:(id)arg1 didEndUsingStatusBarAssertion:(id)arg2;
-(id)widgetDiscoveryController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;

@end

