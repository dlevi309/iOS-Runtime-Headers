/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXPBProactiveSuggestionScoreSpecification : PBCodable <NSCopying> {

	double _rawScore;
	int _suggestedConfidenceCategory;
	SCD_Struct_AT3 _has;

}

@property (assign,nonatomic) BOOL hasRawScore; 
@property (assign,nonatomic) double rawScore;                                  //@synthesize rawScore=_rawScore - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestedConfidenceCategory; 
@property (assign,nonatomic) int suggestedConfidenceCategory;                  //@synthesize suggestedConfidenceCategory=_suggestedConfidenceCategory - In the implementation block
-(id)dictionaryRepresentation;
-(void)setSuggestedConfidenceCategory:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(double)rawScore;
-(unsigned long long)hash;
-(void)setRawScore:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)suggestedConfidenceCategory;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasRawScore:(BOOL)arg1 ;
-(BOOL)hasRawScore;
-(void)setHasSuggestedConfidenceCategory:(BOOL)arg1 ;
-(BOOL)hasSuggestedConfidenceCategory;
-(id)suggestedConfidenceCategoryAsString:(int)arg1 ;
-(int)StringAsSuggestedConfidenceCategory:(id)arg1 ;
@end

