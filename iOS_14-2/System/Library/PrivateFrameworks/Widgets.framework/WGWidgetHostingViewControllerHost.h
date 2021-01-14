/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/


@protocol WGWidgetHostingViewControllerHost <NSObject>
@optional
-(long long)userSpecifiedDisplayModeForWidget:(id)arg1;
-(void)widget:(id)arg1 didChangeLargestAvailableDisplayMode:(long long)arg2;
-(void)widget:(id)arg1 didEncounterProblematicSnapshotAtURL:(id)arg2;
-(BOOL)shouldPurgeNonASTCSnapshotsForWidget:(id)arg1;
-(long long)largestAvailableDisplayModeForWidget:(id)arg1;
-(BOOL)shouldRemoveSnapshotWhenNotVisibleForWidget:(id)arg1;
-(void)widget:(id)arg1 didRemoveSnapshotAtURL:(id)arg2;
-(void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
-(BOOL)shouldPurgeNonCAMLSnapshotsForWidget:(id)arg1;
-(BOOL)shouldPurgeArchivedSnapshotsForWidget:(id)arg1;

@end

