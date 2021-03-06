/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>
#import <libobjc.A.dylib/HDSynchronousTaskGroupDelegate.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray, HDSynchronousTaskGroup, NSString;

@interface HDCloudSyncFetchChangeRecordsForZonesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {

	NSArray* _zones;
	NSDictionary* _initialServerChangeTokensByIdentifier;
	NSMutableDictionary* _finalServerChangeTokensByIdentifier;
	NSMutableArray* _fetchedRecords;
	NSMutableArray* _deletedRecordIDs;
	HDSynchronousTaskGroup* _taskGroup;
	os_unfair_lock_s _lock;
	/*^block*/id _recordFilter;
	/*^block*/id _expiredServerChangeTokenHandler;

}

@property (copy,readonly) NSDictionary * changeTokensByZone; 
@property (copy,readonly) NSArray * changeRecords; 
@property (copy) id recordFilter;                                         //@synthesize recordFilter=_recordFilter - In the implementation block
@property (copy) id expiredServerChangeTokenHandler;                      //@synthesize expiredServerChangeTokenHandler=_expiredServerChangeTokenHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(BOOL)arg2 errors:(id)arg3 ;
-(void)_fetchChangeRecordsForContainer:(id)arg1 ;
-(id)_configurationsByRecordZoneIDForContainer:(id)arg1 ;
-(void)_fetchChangeRecordsForContainer:(id)arg1 configurations:(id)arg2 ;
-(void)_fetchDidFinishForZone:(id)arg1 changeToken:(id)arg2 container:(id)arg3 error:(id)arg4 ;
-(void)_fetchedChangedRecord:(id)arg1 ;
-(void)_recordWithIDWasDeleted:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 zones:(id)arg3 changeTokensByZone:(id)arg4 ;
-(NSArray *)changeRecords;
-(NSDictionary *)changeTokensByZone;
-(id)recordFilter;
-(void)setRecordFilter:(id)arg1 ;
-(id)expiredServerChangeTokenHandler;
-(void)setExpiredServerChangeTokenHandler:(id)arg1 ;
@end

