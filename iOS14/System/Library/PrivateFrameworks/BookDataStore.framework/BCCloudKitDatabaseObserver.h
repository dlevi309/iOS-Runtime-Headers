/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

