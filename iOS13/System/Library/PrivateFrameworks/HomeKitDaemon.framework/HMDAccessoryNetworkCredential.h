/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSUUID, NSNumber, NSData;

@interface HMDAccessoryNetworkCredential : NSObject {

	NSUUID* _networkRouterUUID;
	NSNumber* _clientIdentifier;
	NSData* _wiFiPSK;

}

@property (readonly) NSUUID * networkRouterUUID;               //@synthesize networkRouterUUID=_networkRouterUUID - In the implementation block
@property (readonly) NSNumber * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) NSData * wiFiPSK;                         //@synthesize wiFiPSK=_wiFiPSK - In the implementation block
-(NSNumber *)clientIdentifier;
-(NSUUID *)networkRouterUUID;
-(NSData *)wiFiPSK;
-(id)initWithNetworkRouterUUID:(id)arg1 clientIdentifier:(id)arg2 wiFiPSK:(id)arg3 ;
@end

