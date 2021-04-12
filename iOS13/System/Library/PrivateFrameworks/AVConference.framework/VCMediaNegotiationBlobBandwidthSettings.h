/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable <NSCopying> {

	int _configuration;
	int _configurationExtension;
	unsigned _maxBandwidth;
	SCD_Struct_VC45 _has;

}

@property (assign,nonatomic) int configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) unsigned maxBandwidth;                       //@synthesize maxBandwidth=_maxBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasConfigurationExtension; 
@property (assign,nonatomic) int configurationExtension;                  //@synthesize configurationExtension=_configurationExtension - In the implementation block
+(int)bandwidthConfigurationWithOperatingMode:(int)arg1 connectionType:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setConfiguration:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)configuration;
-(void)setMaxBandwidth:(unsigned)arg1 ;
-(unsigned)maxBandwidth;
-(id)configurationAsString:(int)arg1 ;
-(int)StringAsConfiguration:(id)arg1 ;
-(int)configurationExtension;
-(void)setConfigurationExtension:(int)arg1 ;
-(void)setHasConfigurationExtension:(BOOL)arg1 ;
-(BOOL)hasConfigurationExtension;
-(id)configurationExtensionAsString:(int)arg1 ;
-(int)StringAsConfigurationExtension:(id)arg1 ;
-(id)newBandwidthConfigurations;
@end

