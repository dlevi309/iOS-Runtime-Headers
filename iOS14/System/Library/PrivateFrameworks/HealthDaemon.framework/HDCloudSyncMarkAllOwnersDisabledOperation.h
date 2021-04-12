/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>
#import <libobjc.A.dylib/HDSynchronousTaskGroupDelegate.h>

@class HDSynchronousTaskGroup, NSString;

@interface HDCloudSyncMarkAllOwnersDisabledOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {

	HDSynchronousTaskGroup* _taskGroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(BOOL)arg2 errors:(id)arg3 ;
-(id)_updatedRecordsForContainer:(id)arg1 disabledOwnerIdentifiers:(id)arg2 ;
-(id)_updatedMasterRecordForZone:(id)arg1 container:(id)arg2 disabledOwnerIdentifiers:(id)arg3 ;
-(id)_updatedRegistryRecordForZone:(id)arg1 container:(id)arg2 disabledOwnerIdentifiers:(id)arg3 ;
@end

