/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UISlider.h>
#import <libobjc.A.dylib/MPDetailedScrubbing.h>
#import <libobjc.A.dylib/MPDetailScrubControllerDelegate.h>

@protocol MPDetailSliderDelegate;
@class UILabel, MPDetailScrubController, NSTimer, UIView, UIImageView, AVTimeFormatter, NSString;

@interface MPDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate> {

	UILabel* _currentTimeInverseLabel;
	UILabel* _currentTimeLabel;
	MPDetailScrubController* _scrubController;
	BOOL _allowsScrubbing;
	BOOL _autoscrubActive;
	NSTimer* _autoscrubTimer;
	BOOL _canCommit;
	double _currentTime;
	UIView* _downloadingTrackOverlay;
	UIImageView* _glowDetailScrubImageView;
	BOOL _isTracking;
	double _maxTrackWidth;
	CGPoint _previousLocationInView;
	long long _style;
	UIImageView* _thumbImageView;
	double _trackInset;
	AVTimeFormatter* _formatter;
	id<MPDetailSliderDelegate> _delegate;
	double _detailScrubbingVerticalRange;
	double _duration;
	double _availableDuration;
	long long _timeLabelStyle;
	double _minTimeLabelWidth;

}

@property (assign,nonatomic,__weak) id<MPDetailSliderDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsScrubbing;                                           //@synthesize allowsScrubbing=_allowsScrubbing - In the implementation block
@property (assign,nonatomic) BOOL allowsDetailScrubbing; 
@property (assign,nonatomic) double detailScrubbingVerticalRange;                            //@synthesize detailScrubbingVerticalRange=_detailScrubbingVerticalRange - In the implementation block
@property (assign,nonatomic) double duration;                                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double availableDuration;                                       //@synthesize availableDuration=_availableDuration - In the implementation block
@property (nonatomic,readonly) BOOL detailScrubbingAvailableForCurrentDuration; 
@property (assign,nonatomic) long long timeLabelStyle;                                       //@synthesize timeLabelStyle=_timeLabelStyle - In the implementation block
@property (assign,nonatomic) double minTimeLabelWidth;                                       //@synthesize minTimeLabelWidth=_minTimeLabelWidth - In the implementation block
@property (nonatomic,readonly) NSString * localizedScrubSpeedText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)labelClass;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)tintColorDidChange;
-(void)setDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(BOOL)isTracking;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id<MPDetailSliderDelegate>)delegate;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_autoscrubTick:(id)arg1 ;
-(void)detailScrubController:(id)arg1 didChangeValue:(float)arg2 ;
-(CGRect)thumbHitRect;
-(void)detailScrubController:(id)arg1 didChangeScrubSpeed:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 maxTrackWidth:(double)arg3 ;
-(void)setValue:(float)arg1 duration:(double)arg2 ;
-(void)_setValueWhileTracking:(float)arg1 duration:(double)arg2 ;
-(BOOL)detailScrubbingAvailableForCurrentDuration;
-(void)cancelTracking;
-(NSString *)localizedScrubSpeedText;
-(void)setAvailableDuration:(double)arg1 ;
-(void)setMinTimeLabelWidth:(double)arg1 ;
-(void)setTimeLabelStyle:(long long)arg1 ;
-(id)timeLabelFontForStyle:(long long)arg1 ;
-(id)timeLabelTextColorForStyle:(long long)arg1 ;
-(id)_colorSliceImageWithColor:(id)arg1 height:(double)arg2 ;
-(void)_commitValue;
-(id)_modernThumbImageWithColor:(id)arg1 height:(double)arg2 includeShadow:(BOOL)arg3 ;
-(void)_setupControlsForStyle;
-(void)_updateTrackInset;
-(void)_updateTimeDisplayForTime:(double)arg1 ;
-(void)_updateTimeDisplayForTime:(double)arg1 force:(BOOL)arg2 ;
-(id)_stringForTime:(double)arg1 elapsed:(BOOL)arg2 ;
-(long long)timeLabelStyle;
-(id)_stringForCurrentTime:(double)arg1 ;
-(id)_stringForInverseCurrentTime:(double)arg1 ;
-(void)_resetScrubInfo;
-(void)_updateForAvailableDuraton;
-(double)detailScrubbingVerticalRange;
-(void)setDetailScrubbingVerticalRange:(double)arg1 ;
-(double)availableDuration;
-(double)minTimeLabelWidth;
-(void)setValue:(float)arg1 ;
-(void)setDelegate:(id<MPDetailSliderDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(id)createThumbView;
-(BOOL)allowsDetailScrubbing;
-(void)setAllowsDetailScrubbing:(BOOL)arg1 ;
-(id)currentThumbImage;
-(double)duration;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIEdgeInsets)_thumbHitEdgeInsets;
-(BOOL)allowsScrubbing;
-(void)setAllowsScrubbing:(BOOL)arg1 ;
-(void)dealloc;
@end
