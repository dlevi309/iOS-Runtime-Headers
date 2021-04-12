/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaLocaleIdentifier, NSData;

@interface SISchemaDictationAlternativesPresent : PBCodable {

	BOOL _multilingualIsLowConfidence;
	int _numberOfUnderlines;
	int _countOfWordsUnderlined;
	SISchemaLocaleIdentifier* _alternativesLocale;

}

@property (assign,nonatomic) int numberOfUnderlines;                                     //@synthesize numberOfUnderlines=_numberOfUnderlines - In the implementation block
@property (assign,nonatomic) int countOfWordsUnderlined;                                 //@synthesize countOfWordsUnderlined=_countOfWordsUnderlined - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * alternativesLocale;              //@synthesize alternativesLocale=_alternativesLocale - In the implementation block
@property (assign,nonatomic) BOOL multilingualIsLowConfidence;                           //@synthesize multilingualIsLowConfidence=_multilingualIsLowConfidence - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setNumberOfUnderlines:(int)arg1 ;
-(void)setCountOfWordsUnderlined:(int)arg1 ;
-(void)setAlternativesLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)setMultilingualIsLowConfidence:(BOOL)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(SISchemaLocaleIdentifier *)alternativesLocale;
-(int)numberOfUnderlines;
-(int)countOfWordsUnderlined;
-(BOOL)multilingualIsLowConfidence;
@end

