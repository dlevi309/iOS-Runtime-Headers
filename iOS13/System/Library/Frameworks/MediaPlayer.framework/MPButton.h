/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView;

@interface MPButton : UIButton {

	unsigned _holding : 1;
	UIView* _hitTestDebugView;
	BOOL _hitTestDebugEnabled;
	double _holdDelayInterval;
	UIEdgeInsets _alignmentRectInsets;
	UIEdgeInsets _hitRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;              //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                    //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) double holdDelayInterval;                      //@synthesize holdDelayInterval=_holdDelayInterval - In the implementation block
@property (getter=isHolding,nonatomic,readonly) BOOL holding; 
@property (assign,nonatomic) BOOL hitTestDebugEnabled;                      //@synthesize hitTestDebugEnabled=_hitTestDebugEnabled - In the implementation block
+(id)easyTouchButtonWithType:(long long)arg1 ;
+(UIEdgeInsets)easyTouchDefaultHitRectInsets;
+(double)easyTouchDefaultCharge;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(BOOL)isHolding;
-(UIEdgeInsets)hitRectInsets;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(void)setHitTestDebugEnabled:(BOOL)arg1 ;
-(void)_delayedTriggerHold;
-(void)_handleTouchCancel;
-(void)_handleTouchDown;
-(void)_handleTouchUp;
-(double)holdDelayInterval;
-(void)setHoldDelayInterval:(double)arg1 ;
-(BOOL)hitTestDebugEnabled;
@end

