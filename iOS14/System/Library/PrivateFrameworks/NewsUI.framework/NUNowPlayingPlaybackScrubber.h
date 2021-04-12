/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/IMCustomSliderDelegate.h>

@protocol NUNowPlayingPlaybackScrubberDelegate;
@class UIVisualEffectView, AEScrubberSlider, NSDateComponentsFormatter, UILabel, UIActivityIndicatorView, NSString;

@interface NUNowPlayingPlaybackScrubber : UIView <IMCustomSliderDelegate> {

	BOOL _disableExtenalTimeSpecification;
	UIVisualEffectView* _lighteningEffectView;
	AEScrubberSlider* _scrubber;
	double _currentTime;
	double _duration;
	NSDateComponentsFormatter* _formatter;
	NSDateComponentsFormatter* _accessibilityFormatter;
	UILabel* _playedTimeLabel;
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _remainingTimeLabel;
	id<NUNowPlayingPlaybackScrubberDelegate> _delegate;

}

@property (nonatomic,retain) UIVisualEffectView * lighteningEffectView;                             //@synthesize lighteningEffectView=_lighteningEffectView - In the implementation block
@property (nonatomic,retain) AEScrubberSlider * scrubber;                                           //@synthesize scrubber=_scrubber - In the implementation block
@property (assign,nonatomic) double currentTime;                                                    //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double duration;                                                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * formatter;                                 //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * accessibilityFormatter;                    //@synthesize accessibilityFormatter=_accessibilityFormatter - In the implementation block
@property (assign,nonatomic) BOOL disableExtenalTimeSpecification;                                  //@synthesize disableExtenalTimeSpecification=_disableExtenalTimeSpecification - In the implementation block
@property (nonatomic,retain) UILabel * playedTimeLabel;                                             //@synthesize playedTimeLabel=_playedTimeLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                           //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UILabel * remainingTimeLabel;                                          //@synthesize remainingTimeLabel=_remainingTimeLabel - In the implementation block
@property (assign,nonatomic,__weak) id<NUNowPlayingPlaybackScrubberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIActivityIndicatorView *)activityIndicator;
-(id)_stringFromTimeInterval:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(NSDateComponentsFormatter *)formatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(id<NUNowPlayingPlaybackScrubberDelegate>)delegate;
-(AEScrubberSlider *)scrubber;
-(void)setCurrentTime:(double)arg1 ;
-(UILabel *)remainingTimeLabel;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setScrubber:(AEScrubberSlider *)arg1 ;
-(void)_updateAccessibilityValue;
-(void)setFormatter:(NSDateComponentsFormatter *)arg1 ;
-(unsigned long long)accessibilityTraits;
-(void)setDelegate:(id<NUNowPlayingPlaybackScrubberDelegate>)arg1 ;
-(double)currentTime;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setRemainingTimeLabel:(UILabel *)arg1 ;
-(void)sliderValueChanged:(id)arg1 ;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(double)duration;
-(void)setCurrentTime:(double)arg1 duration:(double)arg2 animated:(BOOL)arg3 ;
-(UIVisualEffectView *)lighteningEffectView;
-(void)setLighteningEffectView:(UIVisualEffectView *)arg1 ;
-(void)beginTracking:(id)arg1 ;
-(void)endTracking:(id)arg1 ;
-(id)_stretchableImageOfHalfRoundFacingRight:(BOOL)arg1 size:(CGSize)arg2 color:(id)arg3 ;
-(void)scrubberDidChange:(id)arg1 ;
-(UILabel *)playedTimeLabel;
-(void)setDisableExtenalTimeSpecification:(BOOL)arg1 ;
-(void)enableExternalTimeSpecificationAfterPropagationDelay;
-(NSDateComponentsFormatter *)accessibilityFormatter;
-(id)_stringFromTimeInterval:(double)arg1 withFormatter:(id)arg2 ;
-(id)timestampStringAttributes:(BOOL)arg1 ;
-(id)_accessibilityStringFromTimeInterval:(double)arg1 ;
-(BOOL)disableExtenalTimeSpecification;
-(void)_setCurrentTime:(double)arg1 duration:(double)arg2 animated:(BOOL)arg3 ;
-(void)setIsWaiting:(BOOL)arg1 ;
-(void)setAccessibilityFormatter:(NSDateComponentsFormatter *)arg1 ;
-(void)setPlayedTimeLabel:(UILabel *)arg1 ;
@end

