/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface LTSchemaASRSpeechTranslationEvent : PBCodable {

	NSString* _requestID;
	NSString* _selectedLocale;
	unsigned _timeToFirstPartialMs;
	unsigned _timeToFinalResultMs;
	unsigned _latencyFinalResultMs;
	SCD_Struct_LT0 _has;
	BOOL _hasRequestID;
	BOOL _hasSelectedLocale;

}

@property (nonatomic,copy) NSString * requestID;                         //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL hasRequestID;                          //@synthesize hasRequestID=_hasRequestID - In the implementation block
@property (nonatomic,copy) NSString * selectedLocale;                    //@synthesize selectedLocale=_selectedLocale - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedLocale;                     //@synthesize hasSelectedLocale=_hasSelectedLocale - In the implementation block
@property (assign,nonatomic) unsigned timeToFirstPartialMs;              //@synthesize timeToFirstPartialMs=_timeToFirstPartialMs - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToFirstPartialMs; 
@property (assign,nonatomic) unsigned timeToFinalResultMs;               //@synthesize timeToFinalResultMs=_timeToFinalResultMs - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToFinalResultMs; 
@property (assign,nonatomic) unsigned latencyFinalResultMs;              //@synthesize latencyFinalResultMs=_latencyFinalResultMs - In the implementation block
@property (assign,nonatomic) BOOL hasLatencyFinalResultMs; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(NSString *)requestID;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)selectedLocale;
-(void)setSelectedLocale:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setRequestID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimeToFirstPartialMs:(unsigned)arg1 ;
-(void)setTimeToFinalResultMs:(unsigned)arg1 ;
-(void)setLatencyFinalResultMs:(unsigned)arg1 ;
-(unsigned)timeToFirstPartialMs;
-(unsigned)timeToFinalResultMs;
-(unsigned)latencyFinalResultMs;
-(BOOL)hasRequestID;
-(BOOL)hasSelectedLocale;
-(BOOL)hasTimeToFirstPartialMs;
-(void)setHasTimeToFirstPartialMs:(BOOL)arg1 ;
-(BOOL)hasTimeToFinalResultMs;
-(void)setHasTimeToFinalResultMs:(BOOL)arg1 ;
-(BOOL)hasLatencyFinalResultMs;
-(void)setHasLatencyFinalResultMs:(BOOL)arg1 ;
-(void)setHasRequestID:(BOOL)arg1 ;
-(void)setHasSelectedLocale:(BOOL)arg1 ;
@end

