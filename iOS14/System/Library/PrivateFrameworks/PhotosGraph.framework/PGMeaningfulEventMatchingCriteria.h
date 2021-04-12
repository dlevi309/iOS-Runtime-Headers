/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMeaningfulEventCriteria.h>

@class PGGraphMomentNode;

@interface PGMeaningfulEventMatchingCriteria : PGMeaningfulEventCriteria {

	BOOL _interestingForMeaningInference;
	PGGraphMomentNode* _momentNode;

}

@property (assign,nonatomic) BOOL interestingForMeaningInference;              //@synthesize interestingForMeaningInference=_interestingForMeaningInference - In the implementation block
@property (nonatomic,readonly) PGGraphMomentNode * momentNode;                 //@synthesize momentNode=_momentNode - In the implementation block
-(PGGraphMomentNode *)momentNode;
-(BOOL)interestingForMeaningInference;
-(id)matchingResultWithCriteria:(id)arg1 ;
-(id)debugDescription;
-(double)matchingScoreWithCriteria:(id)arg1 failed:(BOOL*)arg2 isReliable:(BOOL*)arg3 ;
-(id)initWithMoment:(id)arg1 ;
-(void)setInterestingForMeaningInference:(BOOL)arg1 ;
-(void)_calculateMatchingScoreForPOIROIWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(/*^block*/id)arg3 ;
-(double)_calculateMatchingScoreForPartOfDayWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 requiresStrictMatching:(BOOL)arg3 ;
-(void)_calculateMatchingScoreForLocationsWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)_calculateMatchingScoreForScenesWithRequiredCriteria:(id)arg1 result:(/*^block*/id)arg2 ;
@end

