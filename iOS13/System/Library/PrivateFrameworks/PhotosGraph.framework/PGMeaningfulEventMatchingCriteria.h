/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGMeaningfulEventCriteria.h>

@class PGGraphMomentNode;

@interface PGMeaningfulEventMatchingCriteria : PGMeaningfulEventCriteria {

	BOOL _interestingForMeaningInference;
	PGGraphMomentNode* _moment;

}

@property (assign,nonatomic) BOOL interestingForMeaningInference;              //@synthesize interestingForMeaningInference=_interestingForMeaningInference - In the implementation block
@property (nonatomic,readonly) PGGraphMomentNode * moment;                     //@synthesize moment=_moment - In the implementation block
-(id)debugDescription;
-(id)initWithMoment:(id)arg1 ;
-(PGGraphMomentNode *)moment;
-(id)matchingResultWithCriteria:(id)arg1 ;
-(double)matchingScoreWithCriteria:(id)arg1 failed:(BOOL*)arg2 isReliable:(BOOL*)arg3 ;
-(void)_calculateMatchingScoreForScenesWithRequiredCriteria:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)_calculateMatchingScoreForPOIROIWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)_calculateMatchingScoreForLocationsWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(/*^block*/id)arg3 ;
-(double)_calculateMatchingScoreForPartOfDayWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 requiresStrictMatching:(BOOL)arg3 ;
-(BOOL)interestingForMeaningInference;
-(void)setInterestingForMeaningInference:(BOOL)arg1 ;
@end

