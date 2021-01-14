/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)easyTouchDefaultCharge;
+(UIEdgeInsets)easyTouchDefaultHitRectInsets;
-(void)setHitTestDebugEnabled:(BOOL)arg1 ;
-(void)_handleTouchCancel;
-(CGRect)hitRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)hitRectInsets;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)_handleTouchUp;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isHolding;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_delayedTriggerHold;
-(void)setHoldDelayInterval:(double)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)hitTestDebugEnabled;
-(double)holdDelayInterval;
-(void)layoutSubviews;
-(void)_handleTouchDown;
-(void)dealloc;
@end

