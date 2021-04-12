/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFluidSwitcherGestureExclusionShape.h>

@class NSArray, NSString;

@interface SBFluidSwitcherGestureExclusionCompositeShape : NSObject <SBFluidSwitcherGestureExclusionShape> {

	BOOL _allowHorizontalSwipesInsideShapes;
	NSArray* _rects;
	double _topEdgeY;

}

@property (nonatomic,retain) NSArray * rects;                                     //@synthesize rects=_rects - In the implementation block
@property (assign,nonatomic) BOOL allowHorizontalSwipesInsideShapes;              //@synthesize allowHorizontalSwipesInsideShapes=_allowHorizontalSwipesInsideShapes - In the implementation block
@property (assign,nonatomic) double topEdgeY;                                     //@synthesize topEdgeY=_topEdgeY - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exclusionCompositeShapeWithRects:(id)arg1 allowHorizontalSwipes:(BOOL)arg2 ;
-(NSArray *)rects;
-(id)debugView;
-(void)setRects:(NSArray *)arg1 ;
-(BOOL)shouldBeginGestureAtStartingPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 bounds:(CGRect)arg3 ;
-(void)setAllowHorizontalSwipesInsideShapes:(BOOL)arg1 ;
-(BOOL)allowHorizontalSwipesInsideShapes;
-(double)topEdgeY;
-(void)setTopEdgeY:(double)arg1 ;
@end

