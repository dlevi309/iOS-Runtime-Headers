/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@interface PGMeaningfulEventTrait : NSObject {

	double _minimumScore;

}

@property (assign,nonatomic) double minimumScore;                    //@synthesize minimumScore=_minimumScore - In the implementation block
@property (nonatomic,readonly) BOOL isMatchingRequired; 
@property (nonatomic,readonly) BOOL isActive; 
-(id)init;
-(id)debugDescription;
-(BOOL)isActive;
-(BOOL)isMatchingRequired;
-(double)minimumScore;
-(void)setMinimumScore:(double)arg1 ;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
@end

