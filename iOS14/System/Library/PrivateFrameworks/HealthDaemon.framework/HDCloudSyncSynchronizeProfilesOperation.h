/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>
#import <libobjc.A.dylib/HDSynchronousTaskGroupDelegate.h>

@class HDSynchronousTaskGroup, NSMutableDictionary, NSString;

@interface HDCloudSyncSynchronizeProfilesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {

	HDSynchronousTaskGroup* _registryFetchTaskGroup;
	HDSynchronousTaskGroup* _zoneDeletionTaskGroup;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _zonesWithIdentityLossByContainer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(BOOL)arg2 errors:(id)arg3 ;
-(void)_fetchRegistryRecordsForContainer:(id)arg1 database:(id)arg2 ;
-(id)_registryRecordsToFetchForContainer:(id)arg1 database:(id)arg2 ;
-(void)_fetchRegistryRecords:(id)arg1 container:(id)arg2 database:(id)arg3 ;
-(void)_receivedLimitExceededError:(id)arg1 fetchingRegistryRecords:(id)arg2 container:(id)arg3 database:(id)arg4 ;
-(void)_recordIdentityLossForPartialError:(id)arg1 container:(id)arg2 ;
-(void)_synchronizeProfilesForFetchedRegistryRecords:(id)arg1 container:(id)arg2 database:(id)arg3 ;
-(void)_synchronizeProfileForRegistryRecord:(id)arg1 share:(id)arg2 container:(id)arg3 database:(id)arg4 ;
-(BOOL)_shouldSynchronizeProfileType:(long long)arg1 ;
-(BOOL)_shouldStoreOwnerParticipantForProfileType:(long long)arg1 ;
-(BOOL)_storeOwnerParticipantForProfile:(id)arg1 share:(id)arg2 zoneID:(id)arg3 ;
-(void)_registryFetchDidFinish;
-(void)_zoneDeletionDidFinish;
@end

