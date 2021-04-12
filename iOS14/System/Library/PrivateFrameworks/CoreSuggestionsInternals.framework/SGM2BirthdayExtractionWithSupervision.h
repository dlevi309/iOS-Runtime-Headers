/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SGM2BirthdayExtractionWithSupervision : PBCodable <NSCopying> {

	unsigned _modelVersion;
	int _offset;
	BOOL _dateIsCorrect;
	BOOL _didRegexTrigger;
	BOOL _isFromCongratulation;
	SCD_Struct_SG5 _has;

}

@property (assign,nonatomic) BOOL hasDateIsCorrect; 
@property (assign,nonatomic) BOOL dateIsCorrect;                        //@synthesize dateIsCorrect=_dateIsCorrect - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromCongratulation; 
@property (assign,nonatomic) BOOL isFromCongratulation;                 //@synthesize isFromCongratulation=_isFromCongratulation - In the implementation block
@property (assign,nonatomic) BOOL hasModelVersion; 
@property (assign,nonatomic) unsigned modelVersion;                     //@synthesize modelVersion=_modelVersion - In the implementation block
@property (assign,nonatomic) BOOL hasDidRegexTrigger; 
@property (assign,nonatomic) BOOL didRegexTrigger;                      //@synthesize didRegexTrigger=_didRegexTrigger - In the implementation block
@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) int offset;                                //@synthesize offset=_offset - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned)modelVersion;
-(BOOL)hasModelVersion;
-(void)setHasModelVersion:(BOOL)arg1 ;
-(void)setModelVersion:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasOffset:(BOOL)arg1 ;
-(int)offset;
-(id)description;
-(unsigned long long)hash;
-(void)setOffset:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasOffset;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDateIsCorrect:(BOOL)arg1 ;
-(void)setHasDateIsCorrect:(BOOL)arg1 ;
-(BOOL)hasDateIsCorrect;
-(void)setIsFromCongratulation:(BOOL)arg1 ;
-(void)setHasIsFromCongratulation:(BOOL)arg1 ;
-(BOOL)hasIsFromCongratulation;
-(void)setDidRegexTrigger:(BOOL)arg1 ;
-(void)setHasDidRegexTrigger:(BOOL)arg1 ;
-(BOOL)hasDidRegexTrigger;
-(id)offsetAsString:(int)arg1 ;
-(int)StringAsOffset:(id)arg1 ;
-(BOOL)dateIsCorrect;
-(BOOL)isFromCongratulation;
-(BOOL)didRegexTrigger;
@end

