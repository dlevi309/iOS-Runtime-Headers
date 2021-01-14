/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface LTSchemaTTSSpeechTranslationEvent : PBCodable {

	NSString* _requestID;
	NSString* _selectedLocale;
	unsigned _responseTimeMs;
	unsigned _playbackBeginTimeMs;
	SCD_Struct_SI3 _has;
	BOOL _hasRequestID;
	BOOL _hasSelectedLocale;

}

@property (nonatomic,copy) NSString * requestID;                        //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL hasRequestID;                         //@synthesize hasRequestID=_hasRequestID - In the implementation block
@property (nonatomic,copy) NSString * selectedLocale;                   //@synthesize selectedLocale=_selectedLocale - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedLocale;                    //@synthesize hasSelectedLocale=_hasSelectedLocale - In the implementation block
@property (assign,nonatomic) unsigned responseTimeMs;                   //@synthesize responseTimeMs=_responseTimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTimeMs; 
@property (assign,nonatomic) unsigned playbackBeginTimeMs;              //@synthesize playbackBeginTimeMs=_playbackBeginTimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackBeginTimeMs; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(NSString *)requestID;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)selectedLocale;
-(void)setSelectedLocale:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setResponseTimeMs:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRequestID;
-(BOOL)hasSelectedLocale;
-(void)setHasRequestID:(BOOL)arg1 ;
-(void)setHasSelectedLocale:(BOOL)arg1 ;
-(unsigned)responseTimeMs;
-(BOOL)hasResponseTimeMs;
-(void)setHasResponseTimeMs:(BOOL)arg1 ;
-(void)setPlaybackBeginTimeMs:(unsigned)arg1 ;
-(unsigned)playbackBeginTimeMs;
-(BOOL)hasPlaybackBeginTimeMs;
-(void)setHasPlaybackBeginTimeMs:(BOOL)arg1 ;
@end

