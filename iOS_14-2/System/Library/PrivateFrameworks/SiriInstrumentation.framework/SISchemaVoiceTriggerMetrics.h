/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaVoiceTriggerMetrics : PBCodable {

	int _implicitUtterances;
	int _explicitUtterances;
	int _firstPassTriggers;
	SCD_Struct_LT0 _has;

}

@property (assign,nonatomic) int implicitUtterances;                  //@synthesize implicitUtterances=_implicitUtterances - In the implementation block
@property (assign,nonatomic) BOOL hasImplicitUtterances; 
@property (assign,nonatomic) int explicitUtterances;                  //@synthesize explicitUtterances=_explicitUtterances - In the implementation block
@property (assign,nonatomic) BOOL hasExplicitUtterances; 
@property (assign,nonatomic) int firstPassTriggers;                   //@synthesize firstPassTriggers=_firstPassTriggers - In the implementation block
@property (assign,nonatomic) BOOL hasFirstPassTriggers; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setImplicitUtterances:(int)arg1 ;
-(void)setExplicitUtterances:(int)arg1 ;
-(void)setFirstPassTriggers:(int)arg1 ;
-(int)implicitUtterances;
-(int)explicitUtterances;
-(int)firstPassTriggers;
-(BOOL)hasImplicitUtterances;
-(void)setHasImplicitUtterances:(BOOL)arg1 ;
-(BOOL)hasExplicitUtterances;
-(void)setHasExplicitUtterances:(BOOL)arg1 ;
-(BOOL)hasFirstPassTriggers;
-(void)setHasFirstPassTriggers:(BOOL)arg1 ;
@end

