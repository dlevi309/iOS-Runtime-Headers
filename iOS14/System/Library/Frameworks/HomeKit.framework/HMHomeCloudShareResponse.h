/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class CKShareParticipant, HMUser, HMUserCloudShareClientInfo;

@interface HMHomeCloudShareResponse : NSObject {

	CKShareParticipant* _participant;
	HMUser* _ownerUser;
	HMUserCloudShareClientInfo* _clientInfo;

}

@property (readonly) CKShareParticipant * participant;                     //@synthesize participant=_participant - In the implementation block
@property (readonly) HMUser * ownerUser;                                   //@synthesize ownerUser=_ownerUser - In the implementation block
@property (readonly) HMUserCloudShareClientInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
-(HMUserCloudShareClientInfo *)clientInfo;
-(HMUser *)ownerUser;
-(id)initWithOwnerUser:(id)arg1 pariticipant:(id)arg2 clientInfo:(id)arg3 ;
-(CKShareParticipant *)participant;
@end

