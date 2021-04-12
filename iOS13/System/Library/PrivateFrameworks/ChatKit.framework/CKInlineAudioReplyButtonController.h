/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKInlineAudioReplyButtonDelegate;
@class UIButton;

@interface CKInlineAudioReplyButtonController : NSObject {

	BOOL _started;
	id<CKInlineAudioReplyButtonDelegate> _delegate;
	UIButton* _startButton;
	UIButton* _stopButton;
	double _holdThreshold;
	double _touchDownTime;

}

@property (nonatomic,retain) UIButton * startButton;                                            //@synthesize startButton=_startButton - In the implementation block
@property (nonatomic,retain) UIButton * stopButton;                                             //@synthesize stopButton=_stopButton - In the implementation block
@property (assign,nonatomic) double holdThreshold;                                              //@synthesize holdThreshold=_holdThreshold - In the implementation block
@property (assign,nonatomic) double touchDownTime;                                              //@synthesize touchDownTime=_touchDownTime - In the implementation block
@property (assign,getter=isStarted,nonatomic) BOOL started;                                     //@synthesize started=_started - In the implementation block
@property (assign,nonatomic,__weak) id<CKInlineAudioReplyButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CKInlineAudioReplyButtonDelegate>)delegate;
-(void)setDelegate:(id<CKInlineAudioReplyButtonDelegate>)arg1 ;
-(BOOL)isStarted;
-(void)setStarted:(BOOL)arg1 ;
-(id)initWithStartButton:(id)arg1 stopButton:(id)arg2 ;
-(void)setHoldThreshold:(double)arg1 ;
-(void)touchDownInStartButton:(id)arg1 event:(id)arg2 ;
-(void)touchUpInStartButton:(id)arg1 event:(id)arg2 ;
-(void)touchUpOutsideStartButton:(id)arg1 event:(id)arg2 ;
-(void)touchUpInStopButton:(id)arg1 ;
-(void)touchDragEnter:(id)arg1 ;
-(void)touchDragExit:(id)arg1 ;
-(void)setStartButton:(UIButton *)arg1 ;
-(void)setStopButton:(UIButton *)arg1 ;
-(UIButton *)startButton;
-(UIButton *)stopButton;
-(void)setTouchDownTime:(double)arg1 ;
-(double)touchDownTime;
-(double)holdThreshold;
@end

