/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class LTSchemaTask, NSString, LTSchemaError, NSData;

@interface LTSchemaBatchTranslationEvent : PBCodable {

	LTSchemaTask* _task;
	NSString* _sessionID;
	NSString* _requestID;
	NSString* _systemLocale;
	unsigned _batchSeqNo;
	unsigned _numberOfParagraphs;
	unsigned _responseTimeMs;
	unsigned _numParagraphFailures;
	LTSchemaError* _error;
	SCD_Struct_LT2 _has;
	BOOL _hasTask;
	BOOL _hasSessionID;
	BOOL _hasRequestID;
	BOOL _hasSystemLocale;
	BOOL _hasError;

}

@property (nonatomic,retain) LTSchemaTask * task;                        //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) BOOL hasTask;                               //@synthesize hasTask=_hasTask - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                         //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID;                          //@synthesize hasSessionID=_hasSessionID - In the implementation block
@property (nonatomic,copy) NSString * requestID;                         //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL hasRequestID;                          //@synthesize hasRequestID=_hasRequestID - In the implementation block
@property (nonatomic,copy) NSString * systemLocale;                      //@synthesize systemLocale=_systemLocale - In the implementation block
@property (assign,nonatomic) BOOL hasSystemLocale;                       //@synthesize hasSystemLocale=_hasSystemLocale - In the implementation block
@property (assign,nonatomic) unsigned batchSeqNo;                        //@synthesize batchSeqNo=_batchSeqNo - In the implementation block
@property (assign,nonatomic) BOOL hasBatchSeqNo; 
@property (assign,nonatomic) unsigned numberOfParagraphs;                //@synthesize numberOfParagraphs=_numberOfParagraphs - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfParagraphs; 
@property (assign,nonatomic) unsigned responseTimeMs;                    //@synthesize responseTimeMs=_responseTimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTimeMs; 
@property (assign,nonatomic) unsigned numParagraphFailures;              //@synthesize numParagraphFailures=_numParagraphFailures - In the implementation block
@property (assign,nonatomic) BOOL hasNumParagraphFailures; 
@property (nonatomic,retain) LTSchemaError * error;                      //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasError;                              //@synthesize hasError=_hasError - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(NSString *)systemLocale;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(LTSchemaTask *)task;
-(NSData *)jsonData;
-(void)setHasError:(BOOL)arg1 ;
-(void)setTask:(LTSchemaTask *)arg1 ;
-(void)setError:(LTSchemaError *)arg1 ;
-(LTSchemaError *)error;
-(NSString *)requestID;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasTask;
-(unsigned long long)hash;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setResponseTimeMs:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSystemLocale:(NSString *)arg1 ;
-(void)setNumberOfParagraphs:(unsigned)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRequestID;
-(void)setHasRequestID:(BOOL)arg1 ;
-(void)setBatchSeqNo:(unsigned)arg1 ;
-(void)setNumParagraphFailures:(unsigned)arg1 ;
-(unsigned)batchSeqNo;
-(unsigned)numberOfParagraphs;
-(unsigned)responseTimeMs;
-(unsigned)numParagraphFailures;
-(BOOL)hasSystemLocale;
-(BOOL)hasBatchSeqNo;
-(void)setHasBatchSeqNo:(BOOL)arg1 ;
-(BOOL)hasNumberOfParagraphs;
-(void)setHasNumberOfParagraphs:(BOOL)arg1 ;
-(BOOL)hasResponseTimeMs;
-(void)setHasResponseTimeMs:(BOOL)arg1 ;
-(BOOL)hasNumParagraphFailures;
-(void)setHasNumParagraphFailures:(BOOL)arg1 ;
-(void)setHasTask:(BOOL)arg1 ;
-(void)setHasSystemLocale:(BOOL)arg1 ;
@end

