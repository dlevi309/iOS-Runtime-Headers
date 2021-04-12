/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(double)score;
-(BOOL)isReliable;
-(id)initWithIsMatching:(BOOL)arg1 score:(double)arg2 isReliable:(BOOL)arg3 requiredCriteria:(id)arg4 ;
-(BOOL)isMatching;
-(PGMeaningfulEventRequiredCriteria *)requiredCriteria;
@end

