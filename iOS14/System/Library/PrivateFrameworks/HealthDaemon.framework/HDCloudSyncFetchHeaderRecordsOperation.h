/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>
#import <libobjc.A.dylib/HDSynchronousTaskGroupDelegate.h>

@class NSMutableDictionary, NSMutableSet, HDSynchronousTaskGroup, NSArray, NSString;

@interface HDCloudSyncFetchHeaderRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _fetchedRecordIDsByContainerID;
	NSMutableSet* _invalidRecordIDs;
	HDSynchronousTaskGroup* _taskGroup;
	BOOL _fetchSubscriptions;

}

@property (assign,nonatomic) BOOL fetchSubscriptions;                        //@synthesize fetchSubscriptions=_fetchSubscriptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * invalidRecordIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(BOOL)arg2 errors:(id)arg3 ;
-(void)setFetchSubscriptions:(BOOL)arg1 ;
-(NSArray *)invalidRecordIDs;
-(void)_startHeaderRecordFetchForContainer:(id)arg1 scope:(long long)arg2 ;
-(void)_startHeaderRecordFetchForZones:(id)arg1 container:(id)arg2 scope:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_receivedLimitExceededError:(id)arg1 fetchingRecordsWithIDs:(id)arg2 container:(id)arg3 scope:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_processFetchedRecords:(id)arg1 container:(id)arg2 scope:(long long)arg3 ;
-(void)_fetchRecordsWithIDs:(id)arg1 container:(id)arg2 scope:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_processFetchedRecord:(id)arg1 recordClass:(Class)arg2 zone:(id)arg3 error:(id*)arg4 ;
-(BOOL)_processFetchedRecord:(id)arg1 container:(id)arg2 scope:(long long)arg3 error:(id*)arg4 ;
-(BOOL)fetchSubscriptions;
@end

