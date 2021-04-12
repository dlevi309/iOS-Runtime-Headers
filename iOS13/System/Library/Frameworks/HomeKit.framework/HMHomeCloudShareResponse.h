/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CKShareParticipant *)participant;
-(HMUser *)ownerUser;
-(id)initWithOwnerUser:(id)arg1 pariticipant:(id)arg2 clientInfo:(id)arg3 ;
@end

