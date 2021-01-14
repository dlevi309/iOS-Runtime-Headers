/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@protocol ASPeriodicUpdateRecordProvider <NSObject>
@required
-(id)recordIDsToDelete;
-(id)recordsToSave;
-(void)periodicUpdateManager:(id)arg1 didSaveRecords:(id)arg2;
-(void)periodicUpdateManager:(id)arg1 didFailToSaveRecords:(id)arg2;

@end

