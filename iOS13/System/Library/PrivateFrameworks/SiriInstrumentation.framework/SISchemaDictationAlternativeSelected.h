/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaLocaleIdentifier, NSData;

@interface SISchemaDictationAlternativeSelected : PBCodable {

	int _countOfWordsReplaced;
	int _countOfAlternativesAvailable;
	int _alternativeListPosition;
	SISchemaLocaleIdentifier* _alternativesLocale;

}

@property (assign,nonatomic) int countOfWordsReplaced;                                   //@synthesize countOfWordsReplaced=_countOfWordsReplaced - In the implementation block
@property (assign,nonatomic) int countOfAlternativesAvailable;                           //@synthesize countOfAlternativesAvailable=_countOfAlternativesAvailable - In the implementation block
@property (assign,nonatomic) int alternativeListPosition;                                //@synthesize alternativeListPosition=_alternativeListPosition - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * alternativesLocale;              //@synthesize alternativesLocale=_alternativesLocale - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAlternativesLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setCountOfWordsReplaced:(int)arg1 ;
-(void)setCountOfAlternativesAvailable:(int)arg1 ;
-(void)setAlternativeListPosition:(int)arg1 ;
-(int)countOfWordsReplaced;
-(int)countOfAlternativesAvailable;
-(int)alternativeListPosition;
-(SISchemaLocaleIdentifier *)alternativesLocale;
@end

