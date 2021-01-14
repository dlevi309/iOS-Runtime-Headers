/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SIServiceInstrumentationBatchResponse : PBCodable {

	BOOL _hasBatch_id;
	BOOL _hasStatus_code;
	BOOL _hasMessage;
	int _status_code;
	NSData* _batch_id;
	NSString* _message;

}

@property (nonatomic,copy) NSData * batch_id;                  //@synthesize batch_id=_batch_id - In the implementation block
@property (assign,nonatomic) BOOL hasBatch_id;                 //@synthesize hasBatch_id=_hasBatch_id - In the implementation block
@property (assign,nonatomic) int status_code;                  //@synthesize status_code=_status_code - In the implementation block
@property (assign,nonatomic) BOOL hasStatus_code;              //@synthesize hasStatus_code=_hasStatus_code - In the implementation block
@property (nonatomic,copy) NSString * message;                 //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL hasMessage;                  //@synthesize hasMessage=_hasMessage - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)setMessage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)message;
-(void)setHasMessage:(BOOL)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasMessage;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)batch_id;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBatch_id:(NSData *)arg1 ;
-(BOOL)hasBatch_id;
-(void)setHasBatch_id:(BOOL)arg1 ;
-(void)setStatus_code:(int)arg1 ;
-(int)status_code;
-(BOOL)hasStatus_code;
-(void)setHasStatus_code:(BOOL)arg1 ;
@end

