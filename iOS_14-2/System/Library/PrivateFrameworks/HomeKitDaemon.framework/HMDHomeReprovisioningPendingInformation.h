/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

