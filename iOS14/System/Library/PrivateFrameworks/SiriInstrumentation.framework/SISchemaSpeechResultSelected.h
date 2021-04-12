/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaSpeechResultSelected : PBCodable {

	NSString* _resultCandidateId;
	int _source;
	SCD_Struct_SI1 _has;
	BOOL _hasResultCandidateId;

}

@property (nonatomic,copy) NSString * resultCandidateId;              //@synthesize resultCandidateId=_resultCandidateId - In the implementation block
@property (assign,nonatomic) BOOL hasResultCandidateId;               //@synthesize hasResultCandidateId=_hasResultCandidateId - In the implementation block
@property (assign,nonatomic) int source;                              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(void)setHasSource:(BOOL)arg1 ;
-(BOOL)hasSource;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSource:(int)arg1 ;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
-(BOOL)hasResultCandidateId;
-(void)setHasResultCandidateId:(BOOL)arg1 ;
@end

