/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPDetailedScrubbing, MPDetailScrubControllerDelegate;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class UISelectionFeedbackGenerator, UIControl;

@interface MPDetailScrubController : NSObject {

	BOOL _didBeginTracking;
	BOOL _needsCommit;
	float _accumulatedDelta;
	CGPoint _previousLocationInView;
	CGPoint _beginLocationInView;
	CGPoint _lastCommittedLocationInView;
	float _currentValue;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	BOOL _detailedScrubbingEnabled;
	BOOL _isTracking;
	UIControl*<MPDetailedScrubbing> _scrubbingControl;
	id<MPDetailScrubControllerDelegate> _delegate;
	double _duration;
	double _scrubbingVerticalRange;
	long long _currentScrubSpeed;

}

@property (assign,nonatomic,__weak) UIControl*<MPDetailedScrubbing> scrubbingControl;              //@synthesize scrubbingControl=_scrubbingControl - In the implementation block
@property (assign,nonatomic,__weak) id<MPDetailScrubControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double duration;                                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double scrubbingVerticalRange;                                        //@synthesize scrubbingVerticalRange=_scrubbingVerticalRange - In the implementation block
@property (assign,nonatomic) BOOL detailedScrubbingEnabled;                                        //@synthesize detailedScrubbingEnabled=_detailedScrubbingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL durationAllowsForDetailedScrubbing; 
@property (nonatomic,readonly) BOOL isTracking;                                                    //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,readonly) long long currentScrubSpeed;                                        //@synthesize currentScrubSpeed=_currentScrubSpeed - In the implementation block
-(id)init;
-(id<MPDetailScrubControllerDelegate>)delegate;
-(void)setDelegate:(id<MPDetailScrubControllerDelegate>)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)isTracking;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(float)_minimumScale;
-(id)initWithScrubbingControl:(id)arg1 ;
-(BOOL)durationAllowsForDetailedScrubbing;
-(float)scaleForVerticalPosition:(double)arg1 ;
-(float)_scaleForIdealValueForVerticalPosition:(double)arg1 ;
-(void)_beginScrubbing;
-(void)_endScrubbing;
-(void)_commitValue:(float)arg1 ;
-(UIControl*<MPDetailedScrubbing>)scrubbingControl;
-(void)setScrubbingControl:(UIControl*<MPDetailedScrubbing>)arg1 ;
-(double)scrubbingVerticalRange;
-(void)setScrubbingVerticalRange:(double)arg1 ;
-(BOOL)detailedScrubbingEnabled;
-(void)setDetailedScrubbingEnabled:(BOOL)arg1 ;
-(long long)currentScrubSpeed;
@end

