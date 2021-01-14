/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaIntercomMessageRecorded : PBCodable {

	long long _durationInMs;
	BOOL _isReply;
	BOOL _disambiguationRequired;
	int _intercomTarget;
	SCD_Struct_LT2 _has;

}

@property (assign,nonatomic) long long durationInMs;                      //@synthesize durationInMs=_durationInMs - In the implementation block
@property (assign,nonatomic) BOOL hasDurationInMs; 
@property (assign,nonatomic) BOOL isReply;                                //@synthesize isReply=_isReply - In the implementation block
@property (assign,nonatomic) BOOL hasIsReply; 
@property (assign,nonatomic) BOOL disambiguationRequired;                 //@synthesize disambiguationRequired=_disambiguationRequired - In the implementation block
@property (assign,nonatomic) BOOL hasDisambiguationRequired; 
@property (assign,nonatomic) int intercomTarget;                          //@synthesize intercomTarget=_intercomTarget - In the implementation block
@property (assign,nonatomic) BOOL hasIntercomTarget; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(BOOL)hasIsReply;
-(void)setHasIsReply:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)isReply;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsReply:(BOOL)arg1 ;
-(void)setDurationInMs:(long long)arg1 ;
-(void)setDisambiguationRequired:(BOOL)arg1 ;
-(void)setIntercomTarget:(int)arg1 ;
-(long long)durationInMs;
-(BOOL)disambiguationRequired;
-(int)intercomTarget;
-(BOOL)hasDurationInMs;
-(void)setHasDurationInMs:(BOOL)arg1 ;
-(BOOL)hasDisambiguationRequired;
-(void)setHasDisambiguationRequired:(BOOL)arg1 ;
-(BOOL)hasIntercomTarget;
-(void)setHasIntercomTarget:(BOOL)arg1 ;
@end

