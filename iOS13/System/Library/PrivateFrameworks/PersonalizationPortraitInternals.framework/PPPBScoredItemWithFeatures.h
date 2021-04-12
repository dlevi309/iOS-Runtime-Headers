/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PPPBScoredItemWithFeatures : PBCodable <NSCopying> {

	unsigned long long _topicId;
	NSMutableArray* _features;
	NSMutableArray* _feedbackItems;
	NSString* _namedEntity;
	NSString* _namedEntityWithFeedback;
	float _score;
	SCD_Struct_PP2 _has;

}

@property (assign,nonatomic) BOOL hasTopicId; 
@property (assign,nonatomic) unsigned long long topicId;                      //@synthesize topicId=_topicId - In the implementation block
@property (nonatomic,readonly) BOOL hasNamedEntity; 
@property (nonatomic,retain) NSString * namedEntity;                          //@synthesize namedEntity=_namedEntity - In the implementation block
@property (nonatomic,readonly) BOOL hasNamedEntityWithFeedback; 
@property (nonatomic,retain) NSString * namedEntityWithFeedback;              //@synthesize namedEntityWithFeedback=_namedEntityWithFeedback - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) float score;                                     //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSMutableArray * features;                       //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSMutableArray * feedbackItems;                  //@synthesize feedbackItems=_feedbackItems - In the implementation block
+(Class)featuresType;
+(Class)feedbackItemsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(float)score;
-(void)writeTo:(id)arg1 ;
-(void)setScore:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(NSMutableArray *)features;
-(id)featuresAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)featuresCount;
-(void)clearFeatures;
-(void)setFeatures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)feedbackItems;
-(void)setTopicId:(unsigned long long)arg1 ;
-(BOOL)hasTopicId;
-(unsigned long long)topicId;
-(void)setHasTopicId:(BOOL)arg1 ;
-(BOOL)hasNamedEntity;
-(BOOL)hasNamedEntityWithFeedback;
-(void)addFeatures:(id)arg1 ;
-(void)clearFeedbackItems;
-(void)addFeedbackItems:(id)arg1 ;
-(unsigned long long)feedbackItemsCount;
-(id)feedbackItemsAtIndex:(unsigned long long)arg1 ;
-(NSString *)namedEntity;
-(void)setNamedEntity:(NSString *)arg1 ;
-(NSString *)namedEntityWithFeedback;
-(void)setNamedEntityWithFeedback:(NSString *)arg1 ;
-(void)setFeedbackItems:(NSMutableArray *)arg1 ;
@end

