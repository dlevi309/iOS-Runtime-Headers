/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaVoiceTriggerMetrics, NSData;

@interface SISchemaAggregatedMetrics : PBCodable {

	SISchemaVoiceTriggerMetrics* _voiceTrigger;
	BOOL _hasVoiceTrigger;

}

@property (nonatomic,retain) SISchemaVoiceTriggerMetrics * voiceTrigger;              //@synthesize voiceTrigger=_voiceTrigger - In the implementation block
@property (assign,nonatomic) BOOL hasVoiceTrigger;                                    //@synthesize hasVoiceTrigger=_hasVoiceTrigger - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)setVoiceTrigger:(SISchemaVoiceTriggerMetrics *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(SISchemaVoiceTriggerMetrics *)voiceTrigger;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasVoiceTrigger;
-(void)setHasVoiceTrigger:(BOOL)arg1 ;
@end

