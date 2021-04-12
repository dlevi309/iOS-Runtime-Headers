/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIPanGestureRecognizer *)gestureRecognizer;
-(id)init;
-(double)scaleForY:(double)arg1 ;
-(id)_dynamicAnimationWithStart:(double)arg1 target:(double)arg2 initialVelocity:(double)arg3 ;
-(CGPoint)panningViewTargetPosition;
-(double)panningViewTargetScale;
-(PKPassGroupView *)groupView;
-(void)stop;
-(id)initWithGroupView:(id)arg1 ;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)layoutViewsWithY:(double)arg1 ;
-(CGPoint)panningViewStartPosition;
-(void)setPanningViewStartPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetScale:(double)arg1 ;
-(void)dismissWithStartVelocity:(double)arg1 alongSideApplier:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

