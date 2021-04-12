/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable <NSCopying> {

	int _configuration;
	int _configurationExtension;
	unsigned _maxBandwidth;
	SCD_Struct_VC55 _has;

}

@property (assign,nonatomic) int configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) unsigned maxBandwidth;                       //@synthesize maxBandwidth=_maxBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasConfigurationExtension; 
@property (assign,nonatomic) int configurationExtension;                  //@synthesize configurationExtension=_configurationExtension - In the implementation block
+(int)bandwidthConfigurationWithOperatingMode:(int)arg1 connectionType:(int)arg2 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)configuration;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfiguration:(int)arg1 ;
-(unsigned)maxBandwidth;
-(void)setMaxBandwidth:(unsigned)arg1 ;
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

