/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSUUID, HMDAccessoryNetworkCredential;

@interface HMDHomeReprovisioningPendingInformation : NSObject {

	NSUUID* _messageIdentifier;
	HMDAccessoryNetworkCredential* _networkCredential;

}

@property (readonly) NSUUID * messageIdentifier;                                     //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (readonly) HMDAccessoryNetworkCredential * networkCredential;              //@synthesize networkCredential=_networkCredential - In the implementation block
-(NSUUID *)messageIdentifier;
-(HMDAccessoryNetworkCredential *)networkCredential;
-(id)initWithMessageUUID:(id)arg1 networkCredential:(id)arg2 ;
@end

