/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>
#import <libobjc.A.dylib/HDSynchronousTaskGroupDelegate.h>

@class NSSet, HDSynchronousTaskGroup, NSString;

@interface HDCloudSyncRemoveSharingParticipantsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {

	NSSet* _participantsToRemove;
	HDSynchronousTaskGroup* _taskGroup;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(BOOL)arg2 errors:(id)arg3 ;
-(id)_updatedSharesByRemovingParticipants:(id)arg1 container:(id)arg2 ;
-(void)_saveUpdatedShares:(id)arg1 container:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 participantsToRemove:(id)arg3 ;
@end

