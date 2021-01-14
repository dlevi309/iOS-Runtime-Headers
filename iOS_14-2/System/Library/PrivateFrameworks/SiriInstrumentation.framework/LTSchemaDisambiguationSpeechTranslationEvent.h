/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface LTSchemaDisambiguationSpeechTranslationEvent : PBCodable {

	NSString* _requestID;
	NSString* _sourceLocale;
	NSString* _senseID;
	BOOL _hasRequestID;
	BOOL _hasSourceLocale;
	BOOL _hasSenseID;

}

@property (nonatomic,copy) NSString * requestID;                 //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL hasRequestID;                  //@synthesize hasRequestID=_hasRequestID - In the implementation block
@property (nonatomic,copy) NSString * sourceLocale;              //@synthesize sourceLocale=_sourceLocale - In the implementation block
@property (assign,nonatomic) BOOL hasSourceLocale;               //@synthesize hasSourceLocale=_hasSourceLocale - In the implementation block
@property (nonatomic,copy) NSString * senseID;                   //@synthesize senseID=_senseID - In the implementation block
@property (assign,nonatomic) BOOL hasSenseID;                    //@synthesize hasSenseID=_hasSenseID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(NSString *)requestID;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)senseID;
-(void)setSenseID:(NSString *)arg1 ;
-(NSString *)sourceLocale;
-(unsigned long long)hash;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setSourceLocale:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRequestID;
-(void)setHasRequestID:(BOOL)arg1 ;
-(BOOL)hasSourceLocale;
-(BOOL)hasSenseID;
-(void)setHasSourceLocale:(BOOL)arg1 ;
-(void)setHasSenseID:(BOOL)arg1 ;
@end

