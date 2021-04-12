/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <ProactiveExperiments/ProactiveExperiments-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PREAMResponseListGenerated : PBCodable <NSCopying> {

	int _ageGroup;
	NSString* _experimentId;
	int _generationStatus;
	NSString* _hostProcess;
	NSString* _lang;
	NSString* _locale;
	unsigned _numberOfCustomResponses;
	unsigned _numberOfResponsesGenerated;
	NSString* _treatmentId;
	NSString* _treatmentModelName;
	BOOL _isApricotDevice;
	BOOL _isCached;
	SCD_Struct_PR4 _has;

}

@property (assign,nonatomic) BOOL hasIsCached; 
@property (assign,nonatomic) BOOL isCached;                                    //@synthesize isCached=_isCached - In the implementation block
@property (assign,nonatomic) BOOL hasGenerationStatus; 
@property (assign,nonatomic) int generationStatus;                             //@synthesize generationStatus=_generationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfResponsesGenerated; 
@property (assign,nonatomic) unsigned numberOfResponsesGenerated;              //@synthesize numberOfResponsesGenerated=_numberOfResponsesGenerated - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfCustomResponses; 
@property (assign,nonatomic) unsigned numberOfCustomResponses;                 //@synthesize numberOfCustomResponses=_numberOfCustomResponses - In the implementation block
@property (nonatomic,readonly) BOOL hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId;                          //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) BOOL hasTreatmentId; 
@property (nonatomic,retain) NSString * treatmentId;                           //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) BOOL hasTreatmentModelName; 
@property (nonatomic,retain) NSString * treatmentModelName;                    //@synthesize treatmentModelName=_treatmentModelName - In the implementation block
@property (nonatomic,readonly) BOOL hasHostProcess; 
@property (nonatomic,retain) NSString * hostProcess;                           //@synthesize hostProcess=_hostProcess - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL hasLang; 
@property (nonatomic,retain) NSString * lang;                                  //@synthesize lang=_lang - In the implementation block
@property (assign,nonatomic) BOOL hasIsApricotDevice; 
@property (assign,nonatomic) BOOL isApricotDevice;                             //@synthesize isApricotDevice=_isApricotDevice - In the implementation block
@property (assign,nonatomic) BOOL hasAgeGroup; 
@property (assign,nonatomic) int ageGroup;                                     //@synthesize ageGroup=_ageGroup - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)hostProcess;
-(BOOL)isCached;
-(void)setIsCached:(BOOL)arg1 ;
-(BOOL)hasLocale;
-(BOOL)hasExperimentId;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(NSString *)lang;
-(void)setLang:(NSString *)arg1 ;
-(void)setTreatmentId:(NSString *)arg1 ;
-(BOOL)hasTreatmentId;
-(NSString *)treatmentId;
-(void)setHasIsCached:(BOOL)arg1 ;
-(BOOL)hasIsCached;
-(int)ageGroup;
-(int)generationStatus;
-(void)setGenerationStatus:(int)arg1 ;
-(void)setHasGenerationStatus:(BOOL)arg1 ;
-(BOOL)hasGenerationStatus;
-(id)generationStatusAsString:(int)arg1 ;
-(int)StringAsGenerationStatus:(id)arg1 ;
-(void)setNumberOfResponsesGenerated:(unsigned)arg1 ;
-(void)setHasNumberOfResponsesGenerated:(BOOL)arg1 ;
-(BOOL)hasNumberOfResponsesGenerated;
-(void)setNumberOfCustomResponses:(unsigned)arg1 ;
-(void)setHasNumberOfCustomResponses:(BOOL)arg1 ;
-(BOOL)hasNumberOfCustomResponses;
-(BOOL)hasTreatmentModelName;
-(BOOL)hasHostProcess;
-(BOOL)hasLang;
-(void)setIsApricotDevice:(BOOL)arg1 ;
-(void)setHasIsApricotDevice:(BOOL)arg1 ;
-(BOOL)hasIsApricotDevice;
-(void)setAgeGroup:(int)arg1 ;
-(void)setHasAgeGroup:(BOOL)arg1 ;
-(BOOL)hasAgeGroup;
-(id)ageGroupAsString:(int)arg1 ;
-(int)StringAsAgeGroup:(id)arg1 ;
-(unsigned)numberOfResponsesGenerated;
-(unsigned)numberOfCustomResponses;
-(NSString *)treatmentModelName;
-(void)setTreatmentModelName:(NSString *)arg1 ;
-(void)setHostProcess:(NSString *)arg1 ;
-(BOOL)isApricotDevice;
@end

