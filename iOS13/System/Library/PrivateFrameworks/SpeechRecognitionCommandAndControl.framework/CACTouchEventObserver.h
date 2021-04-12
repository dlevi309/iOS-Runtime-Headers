/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@protocol CACTouchEventObserverDelegate;
@class AXEventProcessor, AXMutableReplayableGesture;

@interface CACTouchEventObserver : NSObject {

	AXEventProcessor* _eventProcessor;
	BOOL _areTouchesDown;
	id<CACTouchEventObserverDelegate> _delegate;
	AXMutableReplayableGesture* _gestureBeingRecorded;
	double _startTimeForGestureBeingRecorded;

}

@property (nonatomic,retain) AXMutableReplayableGesture * gestureBeingRecorded;              //@synthesize gestureBeingRecorded=_gestureBeingRecorded - In the implementation block
@property (assign,nonatomic) double startTimeForGestureBeingRecorded;                        //@synthesize startTimeForGestureBeingRecorded=_startTimeForGestureBeingRecorded - In the implementation block
@property (assign,nonatomic,__weak) id<CACTouchEventObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CACTouchEventObserverDelegate>)delegate;
-(void)setDelegate:(id<CACTouchEventObserverDelegate>)arg1 ;
-(void)beginObserving;
-(void)endObserving;
-(void)startRecordingGesture;
-(id)stopRecordingGesture;
-(void)_didReceiveEvent:(id)arg1 ;
-(void)setGestureBeingRecorded:(AXMutableReplayableGesture *)arg1 ;
-(void)setStartTimeForGestureBeingRecorded:(double)arg1 ;
-(AXMutableReplayableGesture *)gestureBeingRecorded;
-(BOOL)_isLiftEvent:(id)arg1 ;
-(double)startTimeForGestureBeingRecorded;
-(void)_recordEvent:(id)arg1 ;
-(BOOL)_isTouchEvent:(id)arg1 ;
@end

