/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@class NSString;

@interface RMSService : NSObject {

	int _port;
	NSString* _displayName;
	NSString* _networkName;
	NSString* _hostName;
	long long _serviceType;
	long long _serviceDiscoverySource;
	long long _serviceFlags;
	NSString* _homeSharingGroupKey;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * networkName;                        //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,retain) NSString * hostName;                           //@synthesize hostName=_hostName - In the implementation block
@property (assign,nonatomic) int port;                                      //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) long long serviceType;                         //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) long long serviceDiscoverySource;              //@synthesize serviceDiscoverySource=_serviceDiscoverySource - In the implementation block
@property (assign,nonatomic) long long serviceFlags;                        //@synthesize serviceFlags=_serviceFlags - In the implementation block
@property (nonatomic,retain) NSString * homeSharingGroupKey;                //@synthesize homeSharingGroupKey=_homeSharingGroupKey - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)servicesFromProtobufs:(id)arg1 ;
+(id)protobufsFromServices:(id)arg1 ;
-(void)setPort:(int)arg1 ;
-(NSString *)networkName;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(int)port;
-(BOOL)isEqualToService:(id)arg1 ;
-(void)setNetworkName:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setHostName:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(NSString *)hostName;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)data;
-(id)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(long long)serviceType;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(long long)serviceDiscoverySource;
-(long long)serviceFlags;
-(NSString *)homeSharingGroupKey;
-(void)setServiceDiscoverySource:(long long)arg1 ;
-(void)setServiceFlags:(long long)arg1 ;
-(void)setHomeSharingGroupKey:(NSString *)arg1 ;
-(BOOL)isLegacyAppleTV;
-(BOOL)isMediaRemoteSupported;
@end

