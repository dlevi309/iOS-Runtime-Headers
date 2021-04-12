/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSString;

@interface TVRMSService : NSObject {

	int _port;
	NSString* _displayName;
	NSString* _networkName;
	NSString* _hostName;
	long long _serviceType;
	long long _serviceDiscoverySource;
	long long _serviceLegacyFlags;
	NSString* _homeSharingGroupKey;

}

@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * networkName;                        //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,retain) NSString * hostName;                           //@synthesize hostName=_hostName - In the implementation block
@property (assign,nonatomic) int port;                                      //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) long long serviceType;                         //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) long long serviceDiscoverySource;              //@synthesize serviceDiscoverySource=_serviceDiscoverySource - In the implementation block
@property (assign,nonatomic) long long serviceLegacyFlags;                  //@synthesize serviceLegacyFlags=_serviceLegacyFlags - In the implementation block
@property (nonatomic,retain) NSString * homeSharingGroupKey;                //@synthesize homeSharingGroupKey=_homeSharingGroupKey - In the implementation block
+(id)servicesFromProtobufs:(id)arg1 ;
+(id)protobufsFromServices:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(int)port;
-(id)data;
-(void)setPort:(int)arg1 ;
-(NSString *)hostName;
-(NSString *)displayName;
-(BOOL)isLegacy;
-(long long)serviceType;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(id)protobuf;
-(BOOL)isEqualToService:(id)arg1 ;
-(void)setNetworkName:(NSString *)arg1 ;
-(NSString *)networkName;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(long long)serviceDiscoverySource;
-(NSString *)homeSharingGroupKey;
-(void)setServiceDiscoverySource:(long long)arg1 ;
-(void)setHomeSharingGroupKey:(NSString *)arg1 ;
-(long long)serviceLegacyFlags;
-(void)setServiceLegacyFlags:(long long)arg1 ;
@end

