/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class SISchemaLocaleIdentifier, NSData;

@interface SISchemaDictationAlternativesViewed : PBCodable {

	int _countOfWordsUnderlined;
	int _countOfAlternativesAvailable;
	SISchemaLocaleIdentifier* _alternativesLocale;
	SCD_Struct_SI3 _has;
	BOOL _hasAlternativesLocale;

}

@property (assign,nonatomic) int countOfWordsUnderlined;                                 //@synthesize countOfWordsUnderlined=_countOfWordsUnderlined - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfWordsUnderlined; 
@property (assign,nonatomic) int countOfAlternativesAvailable;                           //@synthesize countOfAlternativesAvailable=_countOfAlternativesAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfAlternativesAvailable; 
@property (nonatomic,retain) SISchemaLocaleIdentifier * alternativesLocale;              //@synthesize alternativesLocale=_alternativesLocale - In the implementation block
@property (assign,nonatomic) BOOL hasAlternativesLocale;                                 //@synthesize hasAlternativesLocale=_hasAlternativesLocale - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setCountOfWordsUnderlined:(int)arg1 ;
-(void)setAlternativesLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)setCountOfAlternativesAvailable:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SISchemaLocaleIdentifier *)alternativesLocale;
-(int)countOfAlternativesAvailable;
-(BOOL)hasCountOfAlternativesAvailable;
-(void)setHasCountOfAlternativesAvailable:(BOOL)arg1 ;
-(BOOL)hasAlternativesLocale;
-(void)setHasAlternativesLocale:(BOOL)arg1 ;
-(int)countOfWordsUnderlined;
-(BOOL)hasCountOfWordsUnderlined;
-(void)setHasCountOfWordsUnderlined:(BOOL)arg1 ;
@end

