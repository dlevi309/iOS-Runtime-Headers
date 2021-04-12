/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <TVRemoteUI/TVRTouchProcessor.h>

@class UITapGestureRecognizer, NSTimer;

@interface TVRStandardTouchProcessor : TVRTouchProcessor {

	long long _clickVirtualizerState;
	CGPoint _touchBeganLocation;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSTimer* _clickVirtualizerTimer;

}
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_tap:(id)arg1 ;
-(void)setTouchpadView:(id)arg1 ;
-(void)_touchpadClickVirtualizerTimerFired:(id)arg1 ;
@end

