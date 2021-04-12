/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class MPCPlayerResponseItem, MRUVisualStylingProvider, UIView, UILabel, CAGradientLayer, CADisplayLink, AVTimeFormatter, NSString;

@interface MRUNowPlayingTimeControlsView : UIControl <MRUVisualStylingProviderObserver> {

	BOOL _onScreen;
	BOOL _debugPreviousDisplayLinkPaused;
	MPCPlayerResponseItem* _playerResponseItem;
	MRUVisualStylingProvider* _stylingProvider;
	long long _context;
	UIView* _elapsedTrack;
	UIView* _remainingTrack;
	UIView* _knobView;
	UILabel* _elapsedTimeLabel;
	UILabel* _remainingTimeLabel;
	UILabel* _liveLabel;
	UIView* _liveBackground;
	CAGradientLayer* _liveBackgroundMask;
	CADisplayLink* _displayLink;
	AVTimeFormatter* _elapsedTimeFormatter;
	AVTimeFormatter* _remainingTimeFormatter;
	double _elapsedTimeFactor;
	SCD_Struct_MR1 _durationSnapshot;

}

@property (nonatomic,retain) UIView * elapsedTrack;                                   //@synthesize elapsedTrack=_elapsedTrack - In the implementation block
@property (nonatomic,retain) UIView * remainingTrack;                                 //@synthesize remainingTrack=_remainingTrack - In the implementation block
@property (nonatomic,retain) UIView * knobView;                                       //@synthesize knobView=_knobView - In the implementation block
@property (nonatomic,retain) UILabel * elapsedTimeLabel;                              //@synthesize elapsedTimeLabel=_elapsedTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * remainingTimeLabel;                            //@synthesize remainingTimeLabel=_remainingTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * liveLabel;                                     //@synthesize liveLabel=_liveLabel - In the implementation block
@property (nonatomic,retain) UIView * liveBackground;                                 //@synthesize liveBackground=_liveBackground - In the implementation block
@property (nonatomic,retain) CAGradientLayer * liveBackgroundMask;                    //@synthesize liveBackgroundMask=_liveBackgroundMask - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                             //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) AVTimeFormatter * elapsedTimeFormatter;                  //@synthesize elapsedTimeFormatter=_elapsedTimeFormatter - In the implementation block
@property (nonatomic,retain) AVTimeFormatter * remainingTimeFormatter;                //@synthesize remainingTimeFormatter=_remainingTimeFormatter - In the implementation block
@property (assign,nonatomic) SCD_Struct_MR1 durationSnapshot;                         //@synthesize durationSnapshot=_durationSnapshot - In the implementation block
@property (assign,nonatomic) double elapsedTimeFactor;                                //@synthesize elapsedTimeFactor=_elapsedTimeFactor - In the implementation block
@property (assign,nonatomic) BOOL debugPreviousDisplayLinkPaused;                     //@synthesize debugPreviousDisplayLinkPaused=_debugPreviousDisplayLinkPaused - In the implementation block
@property (nonatomic,retain) MPCPlayerResponseItem * playerResponseItem;              //@synthesize playerResponseItem=_playerResponseItem - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long context;                                       //@synthesize context=_context - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                         //@synthesize onScreen=_onScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isOnScreen;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLiveBackground:(UIView *)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setDurationSnapshot:(SCD_Struct_MR1)arg1 ;
-(void)setElapsedTrack:(UIView *)arg1 ;
-(UIView *)elapsedTrack;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setLiveBackgroundMask:(CAGradientLayer *)arg1 ;
-(void)setOnScreen:(BOOL)arg1 ;
-(void)setRemainingTrack:(UIView *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UILabel *)remainingTimeLabel;
-(UIView *)remainingTrack;
-(long long)context;
-(void)setLiveLabel:(UILabel *)arg1 ;
-(void)updateBackgroundMask;
-(UILabel *)elapsedTimeLabel;
-(void)layoutSubviews;
-(UILabel *)liveLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setRemainingTimeLabel:(UILabel *)arg1 ;
-(void)setElapsedTimeLabel:(UILabel *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)knobView;
-(AVTimeFormatter *)elapsedTimeFormatter;
-(AVTimeFormatter *)remainingTimeFormatter;
-(void)setKnobView:(UIView *)arg1 ;
-(void)updateVisibility;
-(CAGradientLayer *)liveBackgroundMask;
-(SCD_Struct_MR1)durationSnapshot;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)updateDisplayLink;
-(UIView *)liveBackground;
-(void)updateVisualStyling;
-(void)setContext:(long long)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(void)updateContentSizeCategory;
-(void)updateDisplayLinkPaused;
-(void)updateElapsedTime;
-(void)animateLayout;
-(void)updateElapsedTimeWithElapsedTime:(double)arg1 ;
-(MPCPlayerResponseItem *)playerResponseItem;
-(void)updateElapsedTimeOnDisplayLinkTick:(id)arg1 ;
-(void)setPlayerResponseItem:(MPCPlayerResponseItem *)arg1 ;
-(void)setElapsedTimeFormatter:(AVTimeFormatter *)arg1 ;
-(void)setRemainingTimeFormatter:(AVTimeFormatter *)arg1 ;
-(double)elapsedTimeFactor;
-(void)setElapsedTimeFactor:(double)arg1 ;
-(BOOL)debugPreviousDisplayLinkPaused;
-(void)setDebugPreviousDisplayLinkPaused:(BOOL)arg1 ;
@end

