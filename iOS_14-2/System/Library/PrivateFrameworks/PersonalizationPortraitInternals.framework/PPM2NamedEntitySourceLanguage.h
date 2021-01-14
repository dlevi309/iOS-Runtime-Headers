/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2NamedEntitySourceLanguage : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	int _algorithm;
	NSString* _detectedLanguage;
	int _donationSource;
	unsigned _languageCount;
	NSString* _systemLanguage;
	SCD_Struct_PP4 _has;

}

@property (nonatomic,readonly) BOOL hasDetectedLanguage; 
@property (nonatomic,retain) NSString * detectedLanguage;              //@synthesize detectedLanguage=_detectedLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemLanguage; 
@property (nonatomic,retain) NSString * systemLanguage;                //@synthesize systemLanguage=_systemLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasLanguageCount; 
@property (assign,nonatomic) unsigned languageCount;                   //@synthesize languageCount=_languageCount - In the implementation block
@property (assign,nonatomic) BOOL hasDonationSource; 
@property (assign,nonatomic) int donationSource;                       //@synthesize donationSource=_donationSource - In the implementation block
@property (assign,nonatomic) BOOL hasAlgorithm; 
@property (assign,nonatomic) int algorithm;                            //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(int)algorithm;
-(id)dictionaryRepresentation;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(void)setHasAlgorithm:(BOOL)arg1 ;
-(int)StringAsDonationSource:(id)arg1 ;
-(int)donationSource;
-(id)algorithmAsString:(int)arg1 ;
-(id)donationSourceAsString:(int)arg1 ;
-(int)StringAsAlgorithm:(id)arg1 ;
-(void)setDonationSource:(int)arg1 ;
-(BOOL)hasActiveTreatments;
-(BOOL)hasAlgorithm;
-(void)setAlgorithm:(int)arg1 ;
-(void)setDetectedLanguage:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLanguageCount:(unsigned)arg1 ;
-(unsigned)languageCount;
-(void)setSystemLanguage:(NSString *)arg1 ;
-(void)setHasDonationSource:(BOOL)arg1 ;
-(BOOL)hasSystemLanguage;
-(id)description;
-(BOOL)hasDetectedLanguage;
-(void)setHasLanguageCount:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDonationSource;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasLanguageCount;
-(NSString *)detectedLanguage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)systemLanguage;
-(BOOL)isEqual:(id)arg1 ;
@end

