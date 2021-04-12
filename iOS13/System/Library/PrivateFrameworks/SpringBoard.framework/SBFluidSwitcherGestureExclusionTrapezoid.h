/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFluidSwitcherGestureExclusionShape.h>

@class NSString;

@interface SBFluidSwitcherGestureExclusionTrapezoid : NSObject <SBFluidSwitcherGestureExclusionShape> {

	BOOL _allowHorizontalSwipesOutsideTrapezoid;
	double _baseHeight;
	double _trapezoidHeight;
	double _adjacentBaseXDistanceFromEdge;
	double _opposingBaseXDistanceFromEdge;

}

@property (assign,nonatomic) double baseHeight;                                       //@synthesize baseHeight=_baseHeight - In the implementation block
@property (assign,nonatomic) double trapezoidHeight;                                  //@synthesize trapezoidHeight=_trapezoidHeight - In the implementation block
@property (assign,nonatomic) double adjacentBaseXDistanceFromEdge;                    //@synthesize adjacentBaseXDistanceFromEdge=_adjacentBaseXDistanceFromEdge - In the implementation block
@property (assign,nonatomic) double opposingBaseXDistanceFromEdge;                    //@synthesize opposingBaseXDistanceFromEdge=_opposingBaseXDistanceFromEdge - In the implementation block
@property (assign,nonatomic) BOOL allowHorizontalSwipesOutsideTrapezoid;              //@synthesize allowHorizontalSwipesOutsideTrapezoid=_allowHorizontalSwipesOutsideTrapezoid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exclusionTrapezoidWithBaseHeight:(double)arg1 trapezoidHeight:(double)arg2 adjacentBaseXDistanceFromEdge:(double)arg3 opposingBaseXDistanceFromEdge:(double)arg4 allowHorizontalSwipesOutsideTrapezoid:(BOOL)arg5 ;
-(double)baseHeight;
-(id)debugView;
-(void)setBaseHeight:(double)arg1 ;
-(BOOL)shouldBeginGestureAtStartingPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 bounds:(CGRect)arg3 ;
-(void)setTrapezoidHeight:(double)arg1 ;
-(void)setAdjacentBaseXDistanceFromEdge:(double)arg1 ;
-(void)setOpposingBaseXDistanceFromEdge:(double)arg1 ;
-(void)setAllowHorizontalSwipesOutsideTrapezoid:(BOOL)arg1 ;
-(double)trapezoidHeight;
-(double)adjacentBaseXDistanceFromEdge;
-(double)opposingBaseXDistanceFromEdge;
-(BOOL)allowHorizontalSwipesOutsideTrapezoid;
@end

