/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <UIKitCore/UIGestureRecognizer.h>

@interface CAMTouchingGestureRecognizer : UIGestureRecognizer {

	unsigned long long __touchCount;

}

@property (assign,setter=_setTouchCount:,nonatomic) unsigned long long _touchCount;              //@synthesize _touchCount=__touchCount - In the implementation block
-(void)_setTouchCount:(unsigned long long)arg1 ;
-(void)_incrementTouchesBy:(unsigned long long)arg1 ;
-(unsigned long long)_touchCount;
-(void)cancelGesture;
-(void)setEnabled:(BOOL)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_decrementTouchesBy:(unsigned long long)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateStateFromTouchCount:(unsigned long long)arg1 toTouchCount:(unsigned long long)arg2 ;
@end

