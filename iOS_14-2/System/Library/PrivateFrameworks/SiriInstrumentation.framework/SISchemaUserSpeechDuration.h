/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaUserSpeechDuration : PBCodable {

	long long _durationMs;
	NSString* _resultCandidateId;
	SCD_Struct_SI1 _has;
	BOOL _hasResultCandidateId;

}

@property (assign,nonatomic) long long durationMs;                    //@synthesize durationMs=_durationMs - In the implementation block
@property (assign,nonatomic) BOOL hasDurationMs; 
@property (nonatomic,copy) NSString * resultCandidateId;              //@synthesize resultCandidateId=_resultCandidateId - In the implementation block
@property (assign,nonatomic) BOOL hasResultCandidateId;               //@synthesize hasResultCandidateId=_hasResultCandidateId - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(long long)durationMs;
-(BOOL)hasDurationMs;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(void)setDurationMs:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasResultCandidateId;
-(void)setHasResultCandidateId:(BOOL)arg1 ;
@end

