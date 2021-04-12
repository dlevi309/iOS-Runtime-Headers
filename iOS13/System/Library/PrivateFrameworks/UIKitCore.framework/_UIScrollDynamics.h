/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIScrollDynamics : NSObject {

	BOOL _shouldRoundCalculations;
	CGSize _tolerance;
	CGPoint _decelerationTarget;
	CGPoint _initialContentOffset;
	CGVector _initialVelocity;
	CGPoint _contentOrigin;
	CGSize _viewSize;
	CGRect _contentFrame;

}

@property (assign,nonatomic) BOOL shouldRoundCalculations;              //@synthesize shouldRoundCalculations=_shouldRoundCalculations - In the implementation block
@property (nonatomic,readonly) CGSize tolerance;                        //@synthesize tolerance=_tolerance - In the implementation block
@property (assign,nonatomic) CGPoint decelerationTarget;                //@synthesize decelerationTarget=_decelerationTarget - In the implementation block
@property (assign,nonatomic) CGPoint initialContentOffset;              //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
@property (assign,nonatomic) CGVector initialVelocity;                  //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                       //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) CGPoint contentOrigin;                     //@synthesize contentOrigin=_contentOrigin - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                           //@synthesize viewSize=_viewSize - In the implementation block
@property (nonatomic,readonly) double durationUntilStop; 
-(id)init;
-(CGSize)tolerance;
-(CGRect)contentFrame;
-(CGVector)initialVelocity;
-(void)setInitialVelocity:(CGVector)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(CGSize)viewSize;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)setInitialContentOffset:(CGPoint)arg1 ;
-(void)setContentOrigin:(CGPoint)arg1 ;
-(void)setShouldRoundCalculations:(BOOL)arg1 ;
-(void)calculateDecelerationTarget;
-(void)setDecelerationTarget:(CGPoint)arg1 ;
-(void)calculateToReachDecelerationTarget;
-(id)initWithInitialContentOffset:(CGPoint)arg1 velocity:(CGVector)arg2 contentFrame:(CGRect)arg3 viewSize:(CGSize)arg4 screenScale:(double)arg5 ;
-(double)durationUntilStop;
-(double)speedAfterDuration:(double)arg1 ;
-(CGVector)velocityAfterDuration:(double)arg1 ;
-(CGPoint)positionAfterDuration:(double)arg1 ;
-(BOOL)isRubberBandingAfterDuration:(double)arg1 ;
-(void)recalculateForDecelerationTarget:(CGPoint)arg1 ;
-(BOOL)shouldRoundCalculations;
-(CGPoint)decelerationTarget;
-(CGPoint)initialContentOffset;
-(CGPoint)contentOrigin;
@end

