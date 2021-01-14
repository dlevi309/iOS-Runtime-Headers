/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>

@class CKUserIdentityLookupInfo, NSUUID, NSString, NSNumber, HDCloudSyncZone, NSArray, HDCloudSyncShareSetupMetadata;

@interface HDCloudSyncShareToParticipantOperation : HDCloudSyncOperation {

	os_unfair_lock_s _lock;
	CKUserIdentityLookupInfo* _identityLookupInfo;
	NSUUID* _storeIdentifier;
	NSString* _ownerIdentifier;
	BOOL _requireExistingRelationship;
	NSNumber* _expectedDeviceMode;
	HDCloudSyncZone* _participantPushZone;
	NSArray* _addedParticipants;
	HDCloudSyncShareSetupMetadata* _result;

}

@property (readonly) HDCloudSyncShareSetupMetadata * result;              //@synthesize result=_result - In the implementation block
-(void)main;
-(HDCloudSyncShareSetupMetadata *)result;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 identityLookupInfo:(id)arg3 requireExistingRelationship:(BOOL)arg4 requireZoneDeviceMode:(id)arg5 ;
@end

