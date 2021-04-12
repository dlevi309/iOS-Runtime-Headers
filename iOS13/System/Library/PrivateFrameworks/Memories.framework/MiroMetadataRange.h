/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class NSDictionary, NSArray;

@interface MiroMetadataRange : NSObject {

	int _startTimeInFrames;
	int _durationInFrames;
	unsigned long long _type;
	unsigned long long _flags;
	NSDictionary* _analysisDict;
	double _score;
	unsigned long long _rating;
	NSArray* _childRanges;

}

@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (assign,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                 //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) int startTimeInFrames;                    //@synthesize startTimeInFrames=_startTimeInFrames - In the implementation block
@property (assign,nonatomic) int durationInFrames;                     //@synthesize durationInFrames=_durationInFrames - In the implementation block
@property (nonatomic,retain) NSDictionary * analysisDict;              //@synthesize analysisDict=_analysisDict - In the implementation block
@property (assign,nonatomic) double score;                             //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned long long rating;                //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) NSArray * childRanges;                    //@synthesize childRanges=_childRanges - In the implementation block
+(id)descriptionForType:(unsigned long long)arg1 ;
+(id)rangeWithRange:(id)arg1 ;
+(id)descriptionForFlags:(unsigned long long)arg1 ;
+(id)rangeWithType:(unsigned long long)arg1 ;
+(void)miro_computeAndSetStaticScoreWithFlags:(unsigned long long)arg1 forRanges:(id)arg2 ;
+(id)rangeWithVPMetadataRange:(id)arg1 ;
+(double)miro_computeStaticScoreWithFlags:(unsigned long long)arg1 ;
+(void)enumerateByAscendingTypes:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)mergeRanges:(id)arg1 withRanges:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)flags;
-(double)score;
-(void)setScore:(double)arg1 ;
-(id)_description;
-(void)setFlags:(unsigned long long)arg1 ;
-(unsigned long long)rating;
-(void)setRating:(unsigned long long)arg1 ;
-(int)durationInFrames;
-(void)setDurationInFrames:(int)arg1 ;
-(int)startTimeInFrames;
-(void)setStartTimeInFrames:(int)arg1 ;
-(NSDictionary *)analysisDict;
-(void)setAnalysisDict:(NSDictionary *)arg1 ;
-(int)durationOfOverlapWithStart:(int)arg1 duration:(int)arg2 ;
-(id)_treeDescriptionWithDepthLevel:(unsigned long long)arg1 ;
-(NSArray *)childRanges;
-(void)setChildRanges:(NSArray *)arg1 ;
-(int)durationOfOverlapWithRange:(id)arg1 ;
@end

