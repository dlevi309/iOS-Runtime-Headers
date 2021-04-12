/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<TKVibrationRecorderTouchSurfaceDelegate>)delegate;
-(void)setDelegate:(id<TKVibrationRecorderTouchSurfaceDelegate>)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)enterReplayModeWithVibrationPattern:(id)arg1 ;
-(void)enterRecordingMode;
-(void)exitReplayMode;
-(id)initWithVibrationPatternMaximumDuration:(double)arg1 styleProvider:(id)arg2 ;
-(void)exitRecordingMode;
-(void)currentVibrationComponentShouldEnd;
-(void)_recordTouchLocation:(CGPoint)arg1 touchPhase:(int)arg2 ;
-(void)_updateTouchLocationForReplayMode:(id)arg1 ;
@end

