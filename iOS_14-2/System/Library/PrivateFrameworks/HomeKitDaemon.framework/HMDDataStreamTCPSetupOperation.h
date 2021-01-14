/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDDataStreamSetupOperation.h>

@class HMFNetAddress, NSData, HAPSecuritySessionEncryption;

@interface HMDDataStreamTCPSetupOperation : HMDDataStreamSetupOperation {

	HMFNetAddress* _remoteNetAddress;
	NSData* _controllerKeySalt;
	NSData* _accessoryKeySalt;
	long long _remoteTcpPort;
	HAPSecuritySessionEncryption* _sessionEncryption;

}

@property (nonatomic,retain) HMFNetAddress * remoteNetAddress;                              //@synthesize remoteNetAddress=_remoteNetAddress - In the implementation block
@property (nonatomic,readonly) NSData * controllerKeySalt;                                  //@synthesize controllerKeySalt=_controllerKeySalt - In the implementation block
@property (nonatomic,retain) NSData * accessoryKeySalt;                                     //@synthesize accessoryKeySalt=_accessoryKeySalt - In the implementation block
@property (assign,nonatomic) long long remoteTcpPort;                                       //@synthesize remoteTcpPort=_remoteTcpPort - In the implementation block
@property (nonatomic,retain) HAPSecuritySessionEncryption * sessionEncryption;              //@synthesize sessionEncryption=_sessionEncryption - In the implementation block
+(id)logCategory;
-(void)startSetup;
-(BOOL)_isComplete;
-(id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 ;
-(void)processTransportSetupResponse:(id)arg1 ;
-(HMFNetAddress *)remoteNetAddress;
-(long long)remoteTcpPort;
-(HAPSecuritySessionEncryption *)sessionEncryption;
-(NSData *)controllerKeySalt;
-(NSData *)accessoryKeySalt;
-(void)setRemoteNetAddress:(HMFNetAddress *)arg1 ;
-(void)_finishStreamTransport;
-(void)setRemoteTcpPort:(long long)arg1 ;
-(void)setAccessoryKeySalt:(NSData *)arg1 ;
-(void)_generateStreamKeys;
-(id)_fullKeySalt;
-(void)setSessionEncryption:(HAPSecuritySessionEncryption *)arg1 ;
@end

