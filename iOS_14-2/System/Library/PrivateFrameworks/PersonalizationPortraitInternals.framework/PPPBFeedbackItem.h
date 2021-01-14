/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PPPBFeedbackItem : PBCodable <NSCopying> {

	int _feedbackType;
	SCD_Struct_PP1 _has;

}

@property (assign,nonatomic) BOOL hasFeedbackType; 
@property (assign,nonatomic) int feedbackType;                  //@synthesize feedbackType=_feedbackType - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasFeedbackType:(BOOL)arg1 ;
-(BOOL)hasFeedbackType;
-(unsigned long long)hash;
-(int)feedbackType;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFeedbackType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

