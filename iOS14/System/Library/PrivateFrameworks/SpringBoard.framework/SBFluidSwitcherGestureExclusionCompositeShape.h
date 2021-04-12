/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)topEdgeY;
-(BOOL)shouldBeginGestureAtStartingPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 bounds:(CGRect)arg3 ;
-(void)setAllowHorizontalSwipesInsideShapes:(BOOL)arg1 ;
-(BOOL)allowHorizontalSwipesInsideShapes;
-(void)setTopEdgeY:(double)arg1 ;
@end

