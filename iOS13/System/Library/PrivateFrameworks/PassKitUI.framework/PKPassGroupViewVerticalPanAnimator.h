/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


#import <PassKitUI/PassKitUI-Structs.h>
@class _UIDynamicValueAnimation, PKPassGroupView, UIPanGestureRecognizer;

@interface PKPassGroupViewVerticalPanAnimator : NSObject {

	_UIDynamicValueAnimation* _panningAnimation;
	PKPassGroupView* _groupView;
	UIPanGestureRecognizer* _gestureRecognizer;
	double _panningViewTargetScale;
	CGPoint _panningViewStartPosition;
	CGPoint _panningViewTargetPosition;

}

@property (nonatomic,retain,readonly) PKPassGroupView * groupView;                    //@synthesize groupView=_groupView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint panningViewStartPosition;                        //@synthesize panningViewStartPosition=_panningViewStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint panningViewTargetPosition;                       //@synthesize panningViewTargetPosition=_panningViewTargetPosition - In the implementation block
@property (assign,nonatomic) double panningViewTargetScale;                           //@synthesize panningViewTargetScale=_panningViewTargetScale - In the implementation block
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(PKPassGroupView *)groupView;
-(id)initWithGroupView:(id)arg1 ;
-(CGPoint)panningViewStartPosition;
-(void)layoutViewsWithY:(double)arg1 ;
-(void)setPanningViewStartPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetScale:(double)arg1 ;
-(void)dismissWithStartVelocity:(double)arg1 alongSideApplier:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(double)scaleForY:(double)arg1 ;
-(id)_dynamicAnimationWithStart:(double)arg1 target:(double)arg2 initialVelocity:(double)arg3 ;
-(CGPoint)panningViewTargetPosition;
-(double)panningViewTargetScale;
@end

