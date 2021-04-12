/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncPipelineStage.h>

@class HDCloudSyncShareSetupMetadata, CKUserIdentityLookupInfo, NSUUID, NSString, NSNumber;

@interface HDCloudSyncPipelineStageAddSharingParticipant : HDCloudSyncPipelineStage {

	BOOL _requireExistingRelationship;
	HDCloudSyncShareSetupMetadata* _result;
	CKUserIdentityLookupInfo* _identityLookupInfo;
	NSUUID* _participantPushStoreIdentifier;
	NSString* _participantOwnerIdentifier;
	NSNumber* _requiredZoneDeviceMode;

}

@property (nonatomic,readonly) HDCloudSyncShareSetupMetadata * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,copy,readonly) CKUserIdentityLookupInfo * identityLookupInfo;              //@synthesize identityLookupInfo=_identityLookupInfo - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * participantPushStoreIdentifier;                    //@synthesize participantPushStoreIdentifier=_participantPushStoreIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * participantOwnerIdentifier;                      //@synthesize participantOwnerIdentifier=_participantOwnerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL requireExistingRelationship;                                  //@synthesize requireExistingRelationship=_requireExistingRelationship - In the implementation block
@property (nonatomic,copy) NSNumber * requiredZoneDeviceMode;                                   //@synthesize requiredZoneDeviceMode=_requiredZoneDeviceMode - In the implementation block
-(void)main;
-(HDCloudSyncShareSetupMetadata *)result;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 identityLookupInfo:(id)arg3 ;
-(BOOL)requireExistingRelationship;
-(void)setRequireExistingRelationship:(BOOL)arg1 ;
-(void)setRequiredZoneDeviceMode:(NSNumber *)arg1 ;
-(CKUserIdentityLookupInfo *)identityLookupInfo;
-(NSUUID *)participantPushStoreIdentifier;
-(NSString *)participantOwnerIdentifier;
-(NSNumber *)requiredZoneDeviceMode;
@end

