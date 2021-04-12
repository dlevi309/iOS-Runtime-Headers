/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSSet;

@interface REMLPrediction : NSObject <NSCopying> {

	NSMutableSet* _explanations;
	float _mean;
	float _variance;
	float _probability;
	float _pessimistic;
	float _bias;

}

@property (assign,nonatomic) float bias;                          //@synthesize bias=_bias - In the implementation block
@property (nonatomic,readonly) NSSet * explanations; 
@property (nonatomic,readonly) float mean;                        //@synthesize mean=_mean - In the implementation block
@property (nonatomic,readonly) float variance;                    //@synthesize variance=_variance - In the implementation block
@property (nonatomic,readonly) float probability;                 //@synthesize probability=_probability - In the implementation block
@property (nonatomic,readonly) float pessimistic;                 //@synthesize pessimistic=_pessimistic - In the implementation block
+(id)predictionWithProbability:(float)arg1 mean:(float)arg2 variance:(float)arg3 pessimistic:(float)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBias:(float)arg1 ;
-(float)bias;
-(float)probability;
-(float)mean;
-(float)variance;
-(void)addExplanation:(id)arg1 ;
-(id)explanationDescription;
-(NSSet *)explanations;
-(float)pessimistic;
@end

