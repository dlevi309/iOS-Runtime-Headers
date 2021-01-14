/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData, NSDictionary;

@interface W5AWDLStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _power;
	BOOL _isAWDLRealTimeMode;
	NSString* _interfaceName;
	NSArray* _ipv6Addresses;
	NSData* _awdlSyncEnabled;
	NSData* _awdlSyncState;
	NSData* _awdlSyncChannelSequence;
	NSData* _awdlStrategy;
	NSData* _awdlElectionParameters;
	NSData* _awdlMasterChannel;
	NSData* _awdlSecondaryMasterChannel;
	NSData* _awdlOpMode;
	NSData* _awdlSyncParameters;
	NSData* _awdlPeerDatabase;
	NSData* _awdlSidecarDiagnostics;
	long long _airDropDiscoverableMode;

}

@property (nonatomic,readonly) NSString * awdlOpModeString; 
@property (nonatomic,readonly) NSString * awdlScheduleString; 
@property (nonatomic,readonly) NSString * awdlSyncChannelSequenceString; 
@property (nonatomic,readonly) NSString * awdlMasterChannelString; 
@property (nonatomic,readonly) NSString * awdlSecondaryMasterChannelString; 
@property (nonatomic,readonly) NSString * awdlSyncStateString; 
@property (nonatomic,readonly) NSString * awdlElectionParametersString; 
@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,copy) NSString * interfaceName;                                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy) NSArray * ipv6Addresses;                                      //@synthesize ipv6Addresses=_ipv6Addresses - In the implementation block
@property (assign,nonatomic) BOOL power;                                                 //@synthesize power=_power - In the implementation block
@property (nonatomic,copy) NSData * awdlSyncEnabled;                                     //@synthesize awdlSyncEnabled=_awdlSyncEnabled - In the implementation block
@property (nonatomic,copy) NSData * awdlSyncState;                                       //@synthesize awdlSyncState=_awdlSyncState - In the implementation block
@property (nonatomic,copy) NSData * awdlSyncChannelSequence;                             //@synthesize awdlSyncChannelSequence=_awdlSyncChannelSequence - In the implementation block
@property (nonatomic,copy) NSData * awdlStrategy;                                        //@synthesize awdlStrategy=_awdlStrategy - In the implementation block
@property (nonatomic,copy) NSData * awdlElectionParameters;                              //@synthesize awdlElectionParameters=_awdlElectionParameters - In the implementation block
@property (nonatomic,copy) NSData * awdlMasterChannel;                                   //@synthesize awdlMasterChannel=_awdlMasterChannel - In the implementation block
@property (nonatomic,copy) NSData * awdlSecondaryMasterChannel;                          //@synthesize awdlSecondaryMasterChannel=_awdlSecondaryMasterChannel - In the implementation block
@property (nonatomic,copy) NSData * awdlOpMode;                                          //@synthesize awdlOpMode=_awdlOpMode - In the implementation block
@property (nonatomic,copy) NSData * awdlSyncParameters;                                  //@synthesize awdlSyncParameters=_awdlSyncParameters - In the implementation block
@property (nonatomic,copy) NSData * awdlPeerDatabase;                                    //@synthesize awdlPeerDatabase=_awdlPeerDatabase - In the implementation block
@property (nonatomic,copy) NSData * awdlSidecarDiagnostics;                              //@synthesize awdlSidecarDiagnostics=_awdlSidecarDiagnostics - In the implementation block
@property (assign,nonatomic) BOOL isAWDLRealTimeMode;                                    //@synthesize isAWDLRealTimeMode=_isAWDLRealTimeMode - In the implementation block
@property (assign,nonatomic) long long airDropDiscoverableMode;                          //@synthesize airDropDiscoverableMode=_airDropDiscoverableMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionary;
-(NSString *)awdlOpModeString;
-(NSString *)awdlScheduleString;
-(NSString *)awdlSyncChannelSequenceString;
-(NSString *)awdlMasterChannelString;
-(NSString *)awdlSecondaryMasterChannelString;
-(NSString *)awdlSyncStateString;
-(NSString *)awdlElectionParametersString;
-(NSArray *)ipv6Addresses;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)interfaceName;
-(id)description;
-(BOOL)power;
-(id)initWithCoder:(id)arg1 ;
-(void)setPower:(BOOL)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setIpv6Addresses:(NSArray *)arg1 ;
-(NSData *)awdlOpMode;
-(NSData *)awdlStrategy;
-(NSData *)awdlSyncChannelSequence;
-(NSData *)awdlMasterChannel;
-(NSData *)awdlSecondaryMasterChannel;
-(NSData *)awdlSyncState;
-(NSData *)awdlElectionParameters;
-(long long)airDropDiscoverableMode;
-(NSData *)awdlSyncEnabled;
-(NSData *)awdlSyncParameters;
-(NSData *)awdlPeerDatabase;
-(NSData *)awdlSidecarDiagnostics;
-(BOOL)isAWDLRealTimeMode;
-(BOOL)isEqualToAWDLStatus:(id)arg1 ;
-(void)setAwdlSecondaryMasterChannel:(NSData *)arg1 ;
-(void)setAwdlOpMode:(NSData *)arg1 ;
-(void)setAwdlMasterChannel:(NSData *)arg1 ;
-(void)setAwdlElectionParameters:(NSData *)arg1 ;
-(void)setAwdlSyncState:(NSData *)arg1 ;
-(void)setAwdlSyncParameters:(NSData *)arg1 ;
-(void)setAwdlSyncEnabled:(NSData *)arg1 ;
-(void)setAwdlSyncChannelSequence:(NSData *)arg1 ;
-(void)setAwdlStrategy:(NSData *)arg1 ;
-(void)setIsAWDLRealTimeMode:(BOOL)arg1 ;
-(void)setAirDropDiscoverableMode:(long long)arg1 ;
-(void)setAwdlPeerDatabase:(NSData *)arg1 ;
-(void)setAwdlSidecarDiagnostics:(NSData *)arg1 ;
@end

