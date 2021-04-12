/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RMSServiceMessage : PBCodable <NSCopying> {

	NSString* _displayName;
	NSString* _homeSharingGroupKey;
	NSString* _hostName;
	NSString* _networkName;
	int _port;
	int _serviceDiscoverySource;
	int _serviceFlags;
	int _serviceType;
	NSString* _uniqueIdentifier;
	SCD_Struct_RM6 _has;

}

@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkName; 
@property (nonatomic,retain) NSString * networkName;                      //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,readonly) BOOL hasHostName; 
@property (nonatomic,retain) NSString * hostName;                         //@synthesize hostName=_hostName - In the implementation block
@property (assign,nonatomic) BOOL hasPort; 
@property (assign,nonatomic) int port;                                    //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType;                             //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) BOOL hasServiceDiscoverySource; 
@property (assign,nonatomic) int serviceDiscoverySource;                  //@synthesize serviceDiscoverySource=_serviceDiscoverySource - In the implementation block
@property (assign,nonatomic) BOOL hasServiceFlags; 
@property (assign,nonatomic) int serviceFlags;                            //@synthesize serviceFlags=_serviceFlags - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeSharingGroupKey; 
@property (nonatomic,retain) NSString * homeSharingGroupKey;              //@synthesize homeSharingGroupKey=_homeSharingGroupKey - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(void)setPort:(int)arg1 ;
-(NSString *)networkName;
-(id)dictionaryRepresentation;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(int)port;
-(void)setHasServiceType:(BOOL)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(void)setNetworkName:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(NSString *)hostName;
-(id)description;
-(BOOL)hasPort;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)serviceType;
-(BOOL)hasServiceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)hasNetworkName;
-(void)setHasPort:(BOOL)arg1 ;
-(int)serviceDiscoverySource;
-(int)serviceFlags;
-(NSString *)homeSharingGroupKey;
-(void)setServiceDiscoverySource:(int)arg1 ;
-(void)setServiceFlags:(int)arg1 ;
-(void)setHomeSharingGroupKey:(NSString *)arg1 ;
-(BOOL)hasHostName;
-(void)setHasServiceDiscoverySource:(BOOL)arg1 ;
-(BOOL)hasServiceDiscoverySource;
-(void)setHasServiceFlags:(BOOL)arg1 ;
-(BOOL)hasServiceFlags;
-(BOOL)hasHomeSharingGroupKey;
@end

