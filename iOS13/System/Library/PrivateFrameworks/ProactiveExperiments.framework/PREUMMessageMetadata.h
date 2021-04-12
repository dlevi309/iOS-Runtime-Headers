/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)hasLocale;
-(NSString *)lang;
-(void)setLang:(NSString *)arg1 ;
-(unsigned)charCount;
-(int)ageGroup;
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
-(void)setHasQuestionMark:(BOOL)arg1 ;
-(void)setHasHasQuestionMark:(BOOL)arg1 ;
-(BOOL)hasHasQuestionMark;
-(void)setHostProcess:(NSString *)arg1 ;
-(BOOL)isApricotDevice;
-(BOOL)hasQuestionMark;
-(void)setCharCount:(unsigned)arg1 ;
-(void)setHasCharCount:(BOOL)arg1 ;
-(BOOL)hasCharCount;
@end

