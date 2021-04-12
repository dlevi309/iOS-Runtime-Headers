/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaUserSpeechDuration : PBCodable {

	long long _durationMs;
	NSString* _resultCandidateId;

}

@property (assign,nonatomic) long long durationMs;                    //@synthesize durationMs=_durationMs - In the implementation block
@property (nonatomic,copy) NSString * resultCandidateId;              //@synthesize resultCandidateId=_resultCandidateId - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)durationMs;
-(void)setDurationMs:(long long)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
@end

