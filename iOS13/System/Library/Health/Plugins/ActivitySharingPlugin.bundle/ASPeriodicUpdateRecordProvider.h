/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@protocol ASPeriodicUpdateRecordProvider <NSObject>
@required
-(id)recordsToSave;
-(id)recordIDsToDelete;
-(void)periodicUpdateManager:(id)arg1 didSaveRecords:(id)arg2;
-(void)periodicUpdateManager:(id)arg1 didFailToSaveRecords:(id)arg2;

@end

