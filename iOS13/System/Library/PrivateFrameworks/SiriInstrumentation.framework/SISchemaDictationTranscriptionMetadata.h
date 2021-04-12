/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaDictationAlternativesPresent, NSData;

@interface SISchemaDictationTranscriptionMetadata : PBCodable {

	int _dictationModel;
	NSString* _dictationModelVersion;
	SISchemaDictationAlternativesPresent* _dictationAlternativesPresent;

}

@property (assign,nonatomic) int dictationModel;                                                               //@synthesize dictationModel=_dictationModel - In the implementation block
@property (nonatomic,copy) NSString * dictationModelVersion;                                                   //@synthesize dictationModelVersion=_dictationModelVersion - In the implementation block
@property (nonatomic,retain) SISchemaDictationAlternativesPresent * dictationAlternativesPresent;              //@synthesize dictationAlternativesPresent=_dictationAlternativesPresent - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDictationModel:(int)arg1 ;
-(void)setDictationModelVersion:(NSString *)arg1 ;
-(void)setDictationAlternativesPresent:(SISchemaDictationAlternativesPresent *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(int)dictationModel;
-(NSString *)dictationModelVersion;
-(SISchemaDictationAlternativesPresent *)dictationAlternativesPresent;
@end

