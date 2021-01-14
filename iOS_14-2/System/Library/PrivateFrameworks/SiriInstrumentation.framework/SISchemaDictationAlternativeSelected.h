/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class SISchemaLocaleIdentifier, NSData;

@interface SISchemaDictationAlternativeSelected : PBCodable {

	int _countOfWordsReplaced;
	int _countOfAlternativesAvailable;
	int _alternativeListPosition;
	SISchemaLocaleIdentifier* _alternativesLocale;
	SCD_Struct_LT0 _has;
	BOOL _hasAlternativesLocale;

}

@property (assign,nonatomic) int countOfWordsReplaced;                                   //@synthesize countOfWordsReplaced=_countOfWordsReplaced - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfWordsReplaced; 
@property (assign,nonatomic) int countOfAlternativesAvailable;                           //@synthesize countOfAlternativesAvailable=_countOfAlternativesAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfAlternativesAvailable; 
@property (assign,nonatomic) int alternativeListPosition;                                //@synthesize alternativeListPosition=_alternativeListPosition - In the implementation block
@property (assign,nonatomic) BOOL hasAlternativeListPosition; 
@property (nonatomic,retain) SISchemaLocaleIdentifier * alternativesLocale;              //@synthesize alternativesLocale=_alternativesLocale - In the implementation block
@property (assign,nonatomic) BOOL hasAlternativesLocale;                                 //@synthesize hasAlternativesLocale=_hasAlternativesLocale - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setAlternativesLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)setAlternativeListPosition:(int)arg1 ;
-(void)setCountOfAlternativesAvailable:(int)arg1 ;
-(void)setCountOfWordsReplaced:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SISchemaLocaleIdentifier *)alternativesLocale;
-(int)countOfWordsReplaced;
-(int)countOfAlternativesAvailable;
-(int)alternativeListPosition;
-(BOOL)hasCountOfWordsReplaced;
-(void)setHasCountOfWordsReplaced:(BOOL)arg1 ;
-(BOOL)hasCountOfAlternativesAvailable;
-(void)setHasCountOfAlternativesAvailable:(BOOL)arg1 ;
-(BOOL)hasAlternativeListPosition;
-(void)setHasAlternativeListPosition:(BOOL)arg1 ;
-(BOOL)hasAlternativesLocale;
-(void)setHasAlternativesLocale:(BOOL)arg1 ;
@end

