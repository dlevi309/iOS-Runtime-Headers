/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


@protocol BCCloudKitDatabaseObserver <NSObject>
@required
-(void)databaseController:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
-(void)databaseController:(id)arg1 reachabilityChanged:(BOOL)arg2;
-(void)databaseController:(id)arg1 attachmentChanged:(BOOL)arg2;
-(void)databaseController:(id)arg1 recordsChanged:(id)arg2;
-(void)databaseController:(id)arg1 fetchedAllRecordsInZone:(id)arg2;

@end

