/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <ProactiveExperiments/ProactiveExperiments-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PREAMResponseItem : PBCodable <NSCopying> {

	int _ageGroup;
	NSString* _experimentId;
	NSString* _hostProcess;
	NSString* _lang;
	NSString* _locale;
	unsigned _modelId;
	unsigned _position;
	unsigned _replyTextId;
	unsigned _responseClassId;
	NSString* _treatmentId;
	NSString* _treatmentModelName;
	BOOL _isApricotDevice;
	BOOL _isCustomResponse;
	SCD_Struct_PR6 _has;

}

@property (assign,nonatomic) BOOL hasModelId; 
@property (assign,nonatomic) unsigned modelId;                           //@synthesize modelId=_modelId - In the implementation block
@property (assign,nonatomic) BOOL hasResponseClassId; 
@property (assign,nonatomic) unsigned responseClassId;                   //@synthesize responseClassId=_responseClassId - In the implementation block
@property (assign,nonatomic) BOOL hasReplyTextId; 
@property (assign,nonatomic) unsigned replyTextId;                       //@synthesize replyTextId=_replyTextId - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) unsigned position;                          //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId;                    //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) BOOL hasTreatmentId; 
@property (nonatomic,retain) NSString * treatmentId;                     //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) BOOL hasTreatmentModelName; 
@property (nonatomic,retain) NSString * treatmentModelName;              //@synthesize treatmentModelName=_treatmentModelName - In the implementation block
@property (nonatomic,readonly) BOOL hasHostProcess; 
@property (nonatomic,retain) NSString * hostProcess;                     //@synthesize hostProcess=_hostProcess - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                          //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL hasLang; 
@property (nonatomic,retain) NSString * lang;                            //@synthesize lang=_lang - In the implementation block
@property (assign,nonatomic) BOOL hasIsApricotDevice; 
@property (assign,nonatomic) BOOL isApricotDevice;                       //@synthesize isApricotDevice=_isApricotDevice - In the implementation block
@property (assign,nonatomic) BOOL hasAgeGroup; 
@property (assign,nonatomic) int ageGroup;                               //@synthesize ageGroup=_ageGroup - In the implementation block
@property (assign,nonatomic) BOOL hasIsCustomResponse; 
@property (assign,nonatomic) BOOL isCustomResponse;                      //@synthesize isCustomResponse=_isCustomResponse - In the implementation block
-(BOOL)hasPosition;
-(id)dictionaryRepresentation;
-(unsigned)position;
-(void)setExperimentId:(NSString *)arg1 ;
-(NSString *)locale;
-(NSString *)hostProcess;
-(BOOL)hasLocale;
-(NSString *)lang;
-(void)setLocale:(NSString *)arg1 ;
-(void)setHostProcess:(NSString *)arg1 ;
-(BOOL)hasExperimentId;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)treatmentId;
-(void)setTreatmentId:(NSString *)arg1 ;
-(id)description;
-(NSString *)experimentId;
-(void)setHasPosition:(BOOL)arg1 ;
-(BOOL)hasTreatmentId;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned long long)hash;
-(unsigned)modelId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLang:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)ageGroup;
-(BOOL)hasLang;
-(BOOL)isEqual:(id)arg1 ;
-(void)setModelId:(unsigned)arg1 ;
-(void)setHasModelId:(BOOL)arg1 ;
-(BOOL)hasModelId;
-(unsigned)replyTextId;
-(BOOL)isCustomResponse;
-(void)setResponseClassId:(unsigned)arg1 ;
-(void)setHasResponseClassId:(BOOL)arg1 ;
-(BOOL)hasResponseClassId;
-(void)setReplyTextId:(unsigned)arg1 ;
-(void)setHasReplyTextId:(BOOL)arg1 ;
-(BOOL)hasReplyTextId;
-(BOOL)hasTreatmentModelName;
-(BOOL)hasHostProcess;
-(void)setIsApricotDevice:(BOOL)arg1 ;
-(void)setHasIsApricotDevice:(BOOL)arg1 ;
-(BOOL)hasIsApricotDevice;
-(void)setAgeGroup:(int)arg1 ;
-(void)setHasAgeGroup:(BOOL)arg1 ;
-(BOOL)hasAgeGroup;
-(id)ageGroupAsString:(int)arg1 ;
-(int)StringAsAgeGroup:(id)arg1 ;
-(void)setIsCustomResponse:(BOOL)arg1 ;
-(void)setHasIsCustomResponse:(BOOL)arg1 ;
-(BOOL)hasIsCustomResponse;
-(unsigned)responseClassId;
-(NSString *)treatmentModelName;
-(void)setTreatmentModelName:(NSString *)arg1 ;
-(BOOL)isApricotDevice;
@end

