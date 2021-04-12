/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>
#import <libobjc.A.dylib/HDSynchronousTaskGroupDelegate.h>

@class HDSynchronousTaskGroup, NSArray, NSString;

@interface HDCloudSyncDeleteZonesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {

	os_unfair_lock_s _lock;
	HDSynchronousTaskGroup* _taskGroup;
	NSArray* _zonesToDelete;

}

@property (copy) NSArray * zonesToDelete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(BOOL)arg2 errors:(id)arg3 ;
-(NSArray *)zonesToDelete;
-(void)_deleteZones:(id)arg1 container:(id)arg2 ;
-(void)setZonesToDelete:(NSArray *)arg1 ;
@end

