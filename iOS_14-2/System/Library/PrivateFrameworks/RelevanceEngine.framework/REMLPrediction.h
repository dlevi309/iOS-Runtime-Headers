/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)bias;
-(float)mean;
-(float)probability;
-(float)variance;
-(void)setBias:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addExplanation:(id)arg1 ;
-(id)explanationDescription;
-(NSSet *)explanations;
-(float)pessimistic;
@end

