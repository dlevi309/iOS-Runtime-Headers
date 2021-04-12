/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PPPBFeedbackItem : PBCodable <NSCopying> {

	int _feedbackType;
	float _mappingWeight;
	SCD_Struct_PP2 _has;

}

@property (assign,nonatomic) BOOL hasFeedbackType; 
@property (assign,nonatomic) int feedbackType;                   //@synthesize feedbackType=_feedbackType - In the implementation block
@property (assign,nonatomic) BOOL hasMappingWeight; 
@property (assign,nonatomic) float mappingWeight;                //@synthesize mappingWeight=_mappingWeight - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)feedbackType;
-(void)setFeedbackType:(int)arg1 ;
-(void)setHasFeedbackType:(BOOL)arg1 ;
-(BOOL)hasFeedbackType;
-(void)setMappingWeight:(float)arg1 ;
-(void)setHasMappingWeight:(BOOL)arg1 ;
-(BOOL)hasMappingWeight;
-(float)mappingWeight;
@end

