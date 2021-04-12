/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class LCServiceLoggingConfiguration, NSData;

@interface LCServiceConfigurationResponse : PBCodable {

	BOOL _hasConfiguration;
	unsigned long long _whichResponse;
	LCServiceLoggingConfiguration* _configuration;

}

@property (nonatomic,retain) LCServiceLoggingConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL hasConfiguration;                                      //@synthesize hasConfiguration=_hasConfiguration - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichResponse;                         //@synthesize whichResponse=_whichResponse - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(BOOL)hasConfiguration;
-(id)initWithDictionary:(id)arg1 ;
-(LCServiceLoggingConfiguration *)configuration;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfiguration:(LCServiceLoggingConfiguration *)arg1 ;
-(unsigned long long)whichResponse;
-(void)setHasConfiguration:(BOOL)arg1 ;
@end

