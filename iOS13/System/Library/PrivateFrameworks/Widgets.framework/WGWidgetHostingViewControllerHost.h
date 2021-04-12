/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/


@protocol WGWidgetHostingViewControllerHost <NSObject>
@optional
-(long long)userSpecifiedDisplayModeForWidget:(id)arg1;
-(void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
-(long long)largestAvailableDisplayModeForWidget:(id)arg1;
-(void)widget:(id)arg1 didChangeLargestAvailableDisplayMode:(long long)arg2;
-(void)widget:(id)arg1 didEncounterProblematicSnapshotAtURL:(id)arg2;
-(void)widget:(id)arg1 didRemoveSnapshotAtURL:(id)arg2;
-(BOOL)shouldPurgeArchivedSnapshotsForWidget:(id)arg1;
-(BOOL)shouldPurgeNonCAMLSnapshotsForWidget:(id)arg1;
-(BOOL)shouldPurgeNonASTCSnapshotsForWidget:(id)arg1;
-(BOOL)shouldRemoveSnapshotWhenNotVisibleForWidget:(id)arg1;

@end

