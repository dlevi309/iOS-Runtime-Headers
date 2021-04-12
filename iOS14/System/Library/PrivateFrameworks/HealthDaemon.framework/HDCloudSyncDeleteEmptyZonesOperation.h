/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>
#import <libobjc.A.dylib/HDSynchronousTaskGroupDelegate.h>

@class HDSynchronousTaskGroup, NSString;

@interface HDCloudSyncDeleteEmptyZonesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {

	os_unfair_lock_s _lock;
	HDSynchronousTaskGroup* _taskGroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldLogAtOperationStart;
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(BOOL)arg2 errors:(id)arg3 ;
-(void)_confirmAndDeleteEmptyZonesInContainer:(id)arg1 database:(id)arg2 ;
-(void)_validateZonesAreEmptyWithDeletionCandidates:(id)arg1 configurations:(id)arg2 container:(id)arg3 database:(id)arg4 ;
-(void)_deleteEmptyZones:(id)arg1 container:(id)arg2 database:(id)arg3 ;
@end

