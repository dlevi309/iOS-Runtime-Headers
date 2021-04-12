/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
*/

#import <AXRuntime/AXElementGrouper.h>

@interface AXVisualElementGrouper : AXElementGrouper {

	double _maximumNeighbourDistance;
	double _maximumDistanceForAligningEdges;

}

@property (assign,nonatomic) double maximumNeighbourDistance;                     //@synthesize maximumNeighbourDistance=_maximumNeighbourDistance - In the implementation block
@property (assign,nonatomic) double maximumDistanceForAligningEdges;              //@synthesize maximumDistanceForAligningEdges=_maximumDistanceForAligningEdges - In the implementation block
-(id)_groupablesForItems:(id)arg1 ;
-(id)initWithHeuristics:(long long)arg1 ;
-(void)setMaximumNeighbourDistance:(double)arg1 ;
-(void)setMaximumDistanceForAligningEdges:(double)arg1 ;
-(double)maximumDistanceForAligningEdges;
-(double)maximumNeighbourDistance;
@end

