/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(BOOL)isTracking;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id<MPDetailScrubControllerDelegate>)delegate;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)_endScrubbing;
-(void)_commitValue:(float)arg1 ;
-(void)_beginScrubbing;
-(id)initWithScrubbingControl:(id)arg1 ;
-(float)scaleForVerticalPosition:(double)arg1 ;
-(BOOL)durationAllowsForDetailedScrubbing;
-(float)_scaleForIdealValueForVerticalPosition:(double)arg1 ;
-(UIControl*<MPDetailedScrubbing>)scrubbingControl;
-(void)setScrubbingControl:(UIControl*<MPDetailedScrubbing>)arg1 ;
-(double)scrubbingVerticalRange;
-(void)setScrubbingVerticalRange:(double)arg1 ;
-(BOOL)detailedScrubbingEnabled;
-(void)setDetailedScrubbingEnabled:(BOOL)arg1 ;
-(long long)currentScrubSpeed;
-(void)setDelegate:(id<MPDetailScrubControllerDelegate>)arg1 ;
-(double)duration;
-(float)_minimumScale;
@end

