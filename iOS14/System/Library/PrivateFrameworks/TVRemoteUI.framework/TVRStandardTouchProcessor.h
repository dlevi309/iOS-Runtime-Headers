/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_tap:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setTouchpadView:(id)arg1 ;
-(void)_touchpadClickVirtualizerTimerFired:(id)arg1 ;
@end

