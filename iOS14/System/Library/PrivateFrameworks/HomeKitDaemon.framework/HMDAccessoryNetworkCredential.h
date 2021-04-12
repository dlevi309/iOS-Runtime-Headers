/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)wiFiPSK;
-(NSNumber *)clientIdentifier;
-(NSUUID *)networkRouterUUID;
-(id)initWithNetworkRouterUUID:(id)arg1 clientIdentifier:(id)arg2 wiFiPSK:(id)arg3 ;
@end

