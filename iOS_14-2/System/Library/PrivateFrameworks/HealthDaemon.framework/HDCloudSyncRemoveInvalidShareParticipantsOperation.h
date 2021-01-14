/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>
#import <libobjc.A.dylib/HDSynchronousTaskGroupDelegate.h>

@class HDSynchronousTaskGroup, NSArray, NSString;

@interface HDCloudSyncRemoveInvalidShareParticipantsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {

	HDSynchronousTaskGroup* _taskGroup;
	long long _requiredPermission;
	NSArray* _participantsToCheck;

}

@property (assign,nonatomic) long long requiredPermission;              //@synthesize requiredPermission=_requiredPermission - In the implementation block
@property (nonatomic,copy) NSArray * participantsToCheck;               //@synthesize participantsToCheck=_participantsToCheck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(BOOL)arg2 errors:(id)arg3 ;
-(id)_updateShareRecordsInContainer:(id)arg1 ;
-(BOOL)_isValidParticipant:(id)arg1 withPermissions:(long long)arg2 ;
-(void)setRequiredPermission:(long long)arg1 ;
-(void)setParticipantsToCheck:(NSArray *)arg1 ;
-(long long)requiredPermission;
-(NSArray *)participantsToCheck;
@end

