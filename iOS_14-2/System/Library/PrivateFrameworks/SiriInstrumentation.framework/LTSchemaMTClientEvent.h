/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class LTSchemaSafariFeedbackEvent, LTSchemaBatchTranslationEvent, LTSchemaSpeechTranslationEvent, LTSchemaLIDSpeechTranslationEvent, LTSchemaDisambiguationSpeechTranslationEvent, LTSchemaASRSpeechTranslationEvent, LTSchemaMTSpeechTranslationEvent, LTSchemaTTSSpeechTranslationEvent, NSData;

@interface LTSchemaMTClientEvent : PBCodable {

	LTSchemaSafariFeedbackEvent* _safariFeedbackEvent;
	LTSchemaBatchTranslationEvent* _batchTranslationEvent;
	LTSchemaSpeechTranslationEvent* _speechTranslationEvent;
	LTSchemaLIDSpeechTranslationEvent* _lidSpeechTranslationEvent;
	LTSchemaDisambiguationSpeechTranslationEvent* _disambiguationSpeechTranslationEvent;
	LTSchemaASRSpeechTranslationEvent* _asrSpeechTranslationEvent;
	LTSchemaMTSpeechTranslationEvent* _mtSpeechTranslationEvent;
	LTSchemaTTSSpeechTranslationEvent* _ttsspeechTranslationEvent;
	BOOL _hasSafariFeedbackEvent;
	BOOL _hasBatchTranslationEvent;
	BOOL _hasSpeechTranslationEvent;
	BOOL _hasLidSpeechTranslationEvent;
	BOOL _hasDisambiguationSpeechTranslationEvent;
	BOOL _hasAsrSpeechTranslationEvent;
	BOOL _hasMtSpeechTranslationEvent;
	BOOL _hasTtsspeechTranslationEvent;
	unsigned long long _whichEvent_Type;

}

@property (nonatomic,retain) LTSchemaSafariFeedbackEvent * safariFeedbackEvent;                                                //@synthesize safariFeedbackEvent=_safariFeedbackEvent - In the implementation block
@property (assign,nonatomic) BOOL hasSafariFeedbackEvent;                                                                      //@synthesize hasSafariFeedbackEvent=_hasSafariFeedbackEvent - In the implementation block
@property (nonatomic,retain) LTSchemaBatchTranslationEvent * batchTranslationEvent;                                            //@synthesize batchTranslationEvent=_batchTranslationEvent - In the implementation block
@property (assign,nonatomic) BOOL hasBatchTranslationEvent;                                                                    //@synthesize hasBatchTranslationEvent=_hasBatchTranslationEvent - In the implementation block
@property (nonatomic,retain) LTSchemaSpeechTranslationEvent * speechTranslationEvent;                                          //@synthesize speechTranslationEvent=_speechTranslationEvent - In the implementation block
@property (assign,nonatomic) BOOL hasSpeechTranslationEvent;                                                                   //@synthesize hasSpeechTranslationEvent=_hasSpeechTranslationEvent - In the implementation block
@property (nonatomic,retain) LTSchemaLIDSpeechTranslationEvent * lidSpeechTranslationEvent;                                    //@synthesize lidSpeechTranslationEvent=_lidSpeechTranslationEvent - In the implementation block
@property (assign,nonatomic) BOOL hasLidSpeechTranslationEvent;                                                                //@synthesize hasLidSpeechTranslationEvent=_hasLidSpeechTranslationEvent - In the implementation block
@property (nonatomic,retain) LTSchemaDisambiguationSpeechTranslationEvent * disambiguationSpeechTranslationEvent;              //@synthesize disambiguationSpeechTranslationEvent=_disambiguationSpeechTranslationEvent - In the implementation block
@property (assign,nonatomic) BOOL hasDisambiguationSpeechTranslationEvent;                                                     //@synthesize hasDisambiguationSpeechTranslationEvent=_hasDisambiguationSpeechTranslationEvent - In the implementation block
@property (nonatomic,retain) LTSchemaASRSpeechTranslationEvent * asrSpeechTranslationEvent;                                    //@synthesize asrSpeechTranslationEvent=_asrSpeechTranslationEvent - In the implementation block
@property (assign,nonatomic) BOOL hasAsrSpeechTranslationEvent;                                                                //@synthesize hasAsrSpeechTranslationEvent=_hasAsrSpeechTranslationEvent - In the implementation block
@property (nonatomic,retain) LTSchemaMTSpeechTranslationEvent * mtSpeechTranslationEvent;                                      //@synthesize mtSpeechTranslationEvent=_mtSpeechTranslationEvent - In the implementation block
@property (assign,nonatomic) BOOL hasMtSpeechTranslationEvent;                                                                 //@synthesize hasMtSpeechTranslationEvent=_hasMtSpeechTranslationEvent - In the implementation block
@property (nonatomic,retain) LTSchemaTTSSpeechTranslationEvent * ttsspeechTranslationEvent;                                    //@synthesize ttsspeechTranslationEvent=_ttsspeechTranslationEvent - In the implementation block
@property (assign,nonatomic) BOOL hasTtsspeechTranslationEvent;                                                                //@synthesize hasTtsspeechTranslationEvent=_hasTtsspeechTranslationEvent - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichEvent_Type;                                                             //@synthesize whichEvent_Type=_whichEvent_Type - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setBatchTranslationEvent:(LTSchemaBatchTranslationEvent *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)getAnyEventType;
-(unsigned long long)whichEvent_Type;
-(void)setSafariFeedbackEvent:(LTSchemaSafariFeedbackEvent *)arg1 ;
-(void)setSpeechTranslationEvent:(LTSchemaSpeechTranslationEvent *)arg1 ;
-(void)setLidSpeechTranslationEvent:(LTSchemaLIDSpeechTranslationEvent *)arg1 ;
-(void)setDisambiguationSpeechTranslationEvent:(LTSchemaDisambiguationSpeechTranslationEvent *)arg1 ;
-(void)setAsrSpeechTranslationEvent:(LTSchemaASRSpeechTranslationEvent *)arg1 ;
-(void)setMtSpeechTranslationEvent:(LTSchemaMTSpeechTranslationEvent *)arg1 ;
-(void)setTtsspeechTranslationEvent:(LTSchemaTTSSpeechTranslationEvent *)arg1 ;
-(LTSchemaSafariFeedbackEvent *)safariFeedbackEvent;
-(LTSchemaBatchTranslationEvent *)batchTranslationEvent;
-(LTSchemaSpeechTranslationEvent *)speechTranslationEvent;
-(LTSchemaLIDSpeechTranslationEvent *)lidSpeechTranslationEvent;
-(LTSchemaDisambiguationSpeechTranslationEvent *)disambiguationSpeechTranslationEvent;
-(LTSchemaASRSpeechTranslationEvent *)asrSpeechTranslationEvent;
-(LTSchemaMTSpeechTranslationEvent *)mtSpeechTranslationEvent;
-(LTSchemaTTSSpeechTranslationEvent *)ttsspeechTranslationEvent;
-(BOOL)hasSafariFeedbackEvent;
-(void)setHasSafariFeedbackEvent:(BOOL)arg1 ;
-(BOOL)hasBatchTranslationEvent;
-(void)setHasBatchTranslationEvent:(BOOL)arg1 ;
-(BOOL)hasSpeechTranslationEvent;
-(void)setHasSpeechTranslationEvent:(BOOL)arg1 ;
-(BOOL)hasLidSpeechTranslationEvent;
-(void)setHasLidSpeechTranslationEvent:(BOOL)arg1 ;
-(BOOL)hasDisambiguationSpeechTranslationEvent;
-(void)setHasDisambiguationSpeechTranslationEvent:(BOOL)arg1 ;
-(BOOL)hasAsrSpeechTranslationEvent;
-(void)setHasAsrSpeechTranslationEvent:(BOOL)arg1 ;
-(BOOL)hasMtSpeechTranslationEvent;
-(void)setHasMtSpeechTranslationEvent:(BOOL)arg1 ;
-(BOOL)hasTtsspeechTranslationEvent;
-(void)setHasTtsspeechTranslationEvent:(BOOL)arg1 ;
@end

