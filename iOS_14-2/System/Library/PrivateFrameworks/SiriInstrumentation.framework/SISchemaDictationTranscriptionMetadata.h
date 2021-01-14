/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaDictationAlternativesPresent, NSData;

@interface SISchemaDictationTranscriptionMetadata : PBCodable {

	int _dictationModel;
	NSString* _dictationModelVersion;
	SISchemaDictationAlternativesPresent* _dictationAlternativesPresent;
	SCD_Struct_SI1 _has;
	BOOL _hasDictationModelVersion;
	BOOL _hasDictationAlternativesPresent;

}

@property (assign,nonatomic) int dictationModel;                                                               //@synthesize dictationModel=_dictationModel - In the implementation block
@property (assign,nonatomic) BOOL hasDictationModel; 
@property (nonatomic,copy) NSString * dictationModelVersion;                                                   //@synthesize dictationModelVersion=_dictationModelVersion - In the implementation block
@property (assign,nonatomic) BOOL hasDictationModelVersion;                                                    //@synthesize hasDictationModelVersion=_hasDictationModelVersion - In the implementation block
@property (nonatomic,retain) SISchemaDictationAlternativesPresent * dictationAlternativesPresent;              //@synthesize dictationAlternativesPresent=_dictationAlternativesPresent - In the implementation block
@property (assign,nonatomic) BOOL hasDictationAlternativesPresent;                                             //@synthesize hasDictationAlternativesPresent=_hasDictationAlternativesPresent - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setDictationModel:(int)arg1 ;
-(void)setDictationModelVersion:(NSString *)arg1 ;
-(void)setDictationAlternativesPresent:(SISchemaDictationAlternativesPresent *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)dictationModelVersion;
-(SISchemaDictationAlternativesPresent *)dictationAlternativesPresent;
-(int)dictationModel;
-(BOOL)hasDictationModel;
-(void)setHasDictationModel:(BOOL)arg1 ;
-(BOOL)hasDictationModelVersion;
-(BOOL)hasDictationAlternativesPresent;
-(void)setHasDictationModelVersion:(BOOL)arg1 ;
-(void)setHasDictationAlternativesPresent:(BOOL)arg1 ;
@end

