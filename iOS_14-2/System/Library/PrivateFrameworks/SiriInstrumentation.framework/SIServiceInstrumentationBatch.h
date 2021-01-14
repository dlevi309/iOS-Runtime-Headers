/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSString, SIServiceBatchInfo, NSData;

@interface SIServiceInstrumentationBatch : PBCodable {

	BOOL _hasApp_id;
	BOOL _hasBatch_info;
	NSArray* _events;
	NSString* _app_id;
	SIServiceBatchInfo* _batch_info;

}

@property (nonatomic,copy) NSString * app_id;                              //@synthesize app_id=_app_id - In the implementation block
@property (assign,nonatomic) BOOL hasApp_id;                               //@synthesize hasApp_id=_hasApp_id - In the implementation block
@property (nonatomic,retain) SIServiceBatchInfo * batch_info;              //@synthesize batch_info=_batch_info - In the implementation block
@property (assign,nonatomic) BOOL hasBatch_info;                           //@synthesize hasBatch_info=_hasBatch_info - In the implementation block
@property (nonatomic,copy) NSArray * events;                               //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(void)addEvent:(id)arg1 ;
-(void)setEvents:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(NSString *)app_id;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setApp_id:(NSString *)arg1 ;
-(NSArray *)events;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)eventCount;
-(id)eventAtIndex:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBatch_info:(SIServiceBatchInfo *)arg1 ;
-(SIServiceBatchInfo *)batch_info;
-(void)clearEvent;
-(BOOL)hasApp_id;
-(void)setHasApp_id:(BOOL)arg1 ;
-(BOOL)hasBatch_info;
-(void)setHasBatch_info:(BOOL)arg1 ;
@end

