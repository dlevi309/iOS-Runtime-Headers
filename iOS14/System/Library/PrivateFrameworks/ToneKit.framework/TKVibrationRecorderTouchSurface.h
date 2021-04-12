/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <ToneKit/TKVibrationRecorderRippleView.h>

@protocol NSCopying, TKVibrationRecorderTouchSurfaceDelegate;
@class TKVibrationRecorderTouchSurfaceRecordedDataWrapper, TLVibrationPattern;

@interface TKVibrationRecorderTouchSurface : TKVibrationRecorderRippleView {

	BOOL _isRecordingModeEnabled;
	double _vibrationPatternMaximumDuration;
	TKVibrationRecorderTouchSurfaceRecordedDataWrapper* _recordedDataWrapper;
	BOOL _shouldIgnoreCurrentTouch;
	BOOL _isReplayModeEnabled;
	TLVibrationPattern* _vibrationPatternToReplay;
	double _replayModeWasEnteredStartTime;
	id<NSCopying> _displayLinkManagerObserverToken;
	id<TKVibrationRecorderTouchSurfaceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TKVibrationRecorderTouchSurfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TKVibrationRecorderTouchSurfaceDelegate>)delegate;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<TKVibrationRecorderTouchSurfaceDelegate>)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(void)enterReplayModeWithVibrationPattern:(id)arg1 ;
-(void)enterRecordingMode;
-(void)exitReplayMode;
-(id)initWithVibrationPatternMaximumDuration:(double)arg1 styleProvider:(id)arg2 ;
-(void)exitRecordingMode;
-(void)currentVibrationComponentShouldEnd;
-(void)_recordTouchLocation:(CGPoint)arg1 touchPhase:(int)arg2 ;
-(void)_updateTouchLocationForReplayMode:(id)arg1 ;
@end

