/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol WGWidgetDiscoveryControllerDelegate <NSObject>
@optional
-(BOOL)areWidgetsPinnedForWidgetDiscoveryController:(id)arg1;
-(BOOL)didPurgeNonCAMLSnapshotsForWidgetDiscoveryController:(id)arg1;
-(BOOL)didPurgeNonASTCSnapshotsForWidgetDiscoveryController:(id)arg1;
-(id)statusBarAssertionForWidgetDiscoveryController:(id)arg1 legibilityStyle:(long long)arg2;
-(void)widgetDiscoveryController:(id)arg1 didEndUsingStatusBarAssertion:(id)arg2;
-(id)widgetDiscoveryController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;
-(void)widgetDiscoveryController:(id)arg1 requestUnlockWithCompletion:(/*^block*/id)arg2;
-(void)widgetDiscoveryController:(id)arg1 updateStatusBarAssertion:(id)arg2 withLegibilityStyle:(long long)arg3;
-(void)widgetDiscoveryController:(id)arg1 widgetWithBundleIdentifier:(id)arg2 didEncounterProblematicSnapshotAtURL:(id)arg3;
-(BOOL)widgetDiscoveryController:(id)arg1 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(id)arg2;
-(BOOL)shouldShowWidgetsPinButtonForWidgetDiscoveryController:(id)arg1;
-(BOOL)shouldShowWidgetsPinningTeachingViewForWidgetDiscoveryController:(id)arg1;
-(void)widgetDiscoveryControllerDidDismissWidgetsPinningTeachingView:(id)arg1;
-(void)widgetDiscoveryController:(id)arg1 didChangeWidgetsPinning:(BOOL)arg2;
-(BOOL)widgetDiscoveryControllerShouldIncludeInternalWidgets:(id)arg1;
-(BOOL)widgetDiscoveryControllerShouldRespectFavorites:(id)arg1;

@end

