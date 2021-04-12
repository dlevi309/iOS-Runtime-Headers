/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGMeaningfulEventRequiredCriteria;

@interface PGMeaningfulEventMatchingResult : NSObject {

	BOOL _isMatching;
	BOOL _isReliable;
	double _score;
	PGMeaningfulEventRequiredCriteria* _requiredCriteria;

}

@property (nonatomic,readonly) BOOL isMatching;                                                   //@synthesize isMatching=_isMatching - In the implementation block
@property (nonatomic,readonly) double score;                                                      //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) BOOL isReliable;                                                   //@synthesize isReliable=_isReliable - In the implementation block
@property (nonatomic,readonly) PGMeaningfulEventRequiredCriteria * requiredCriteria;              //@synthesize requiredCriteria=_requiredCriteria - In the implementation block
-(id)initWithIsMatching:(BOOL)arg1 score:(double)arg2 isReliable:(BOOL)arg3 requiredCriteria:(id)arg4 ;
-(double)score;
-(PGMeaningfulEventRequiredCriteria *)requiredCriteria;
-(BOOL)isMatching;
-(id)description;
-(BOOL)isReliable;
@end

