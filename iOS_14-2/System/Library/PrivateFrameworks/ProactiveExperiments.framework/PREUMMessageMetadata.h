/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <ProactiveExperiments/ProactiveExperiments-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PREUMMessageMetadata : PBCodable <NSCopying> {

	int _ageGroup;
	unsigned _charCount;
	NSString* _hostProcess;
	NSString* _lang;
	NSString* _locale;
	BOOL _hasQuestionMark;
	BOOL _isApricotDevice;
	SCD_Struct_PR1 _has;

}

@property (nonatomic,readonly) BOOL hasHostProcess; 
@property (nonatomic,retain) NSString * hostProcess;               //@synthesize hostProcess=_hostProcess - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL hasLang; 
@property (nonatomic,retain) NSString * lang;                      //@synthesize lang=_lang - In the implementation block
@property (assign,nonatomic) BOOL hasIsApricotDevice; 
@property (assign,nonatomic) BOOL isApricotDevice;                 //@synthesize isApricotDevice=_isApricotDevice - In the implementation block
@property (assign,nonatomic) BOOL hasCharCount; 
@property (assign,nonatomic) unsigned charCount;                   //@synthesize charCount=_charCount - In the implementation block
@property (assign,nonatomic) BOOL hasAgeGroup; 
@property (assign,nonatomic) int ageGroup;                         //@synthesize ageGroup=_ageGroup - In the implementation block
@property (assign,nonatomic) BOOL hasHasQuestionMark; 
@property (assign,nonatomic) BOOL hasQuestionMark;                 //@synthesize hasQuestionMark=_hasQuestionMark - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)locale;
-(NSString *)hostProcess;
-(BOOL)hasLocale;
-(NSString *)lang;
-(void)setLocale:(NSString *)arg1 ;
-(void)setHostProcess:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLang:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)ageGroup;
-(BOOL)hasLang;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasHostProcess;
-(void)setIsApricotDevice:(BOOL)arg1 ;
-(void)setHasIsApricotDevice:(BOOL)arg1 ;
-(BOOL)hasIsApricotDevice;
-(void)setAgeGroup:(int)arg1 ;
-(void)setHasAgeGroup:(BOOL)arg1 ;
-(BOOL)hasAgeGroup;
-(id)ageGroupAsString:(int)arg1 ;
-(int)StringAsAgeGroup:(id)arg1 ;
-(void)setHasQuestionMark:(BOOL)arg1 ;
-(void)setHasHasQuestionMark:(BOOL)arg1 ;
-(BOOL)hasHasQuestionMark;
-(BOOL)isApricotDevice;
-(BOOL)hasQuestionMark;
-(void)setCharCount:(unsigned)arg1 ;
-(void)setHasCharCount:(BOOL)arg1 ;
-(BOOL)hasCharCount;
-(unsigned)charCount;
@end

