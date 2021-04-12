/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKTimeFormatterObserver.h>
#import <libobjc.A.dylib/CLKTimeFormatterDelegate.h>
#import <libobjc.A.dylib/CLKUILabel.h>

@protocol _CLKUITimeLabelManager;
@class UIFont, UIColor, NSString, NSAttributedString, CLKUITimeLabelStyle, CLKDevice, CLKTimeFormatter;

@interface CLKUITimeLabel : UIView <CLKTimeFormatterObserver, CLKTimeFormatterDelegate, CLKUILabel> {

	unsigned long long _options;
	id<_CLKUITimeLabelManager> _labelManager;
	BOOL _styleTransitioning;
	double _styleTransitionFraction;
	CGRect _styleTransitionEndFrame;
	CLKUITimeLabelStyle* _fromStyle;
	id<_CLKUITimeLabelManager> _fromLabelManager;
	double _fadeStart;
	double _fadeEnd;
	NSString* _timeText;
	BOOL _showsDesignator;
	BOOL _paused;
	BOOL _showSeconds;
	CLKDevice* _device;
	CLKTimeFormatter* _timeFormatter;
	double _maxWidth;
	/*^block*/id _didResizeHandler;
	CLKUITimeLabelStyle* _style;

}

@property (nonatomic,copy) CLKUITimeLabelStyle * style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                    //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                            //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) CLKTimeFormatter * timeFormatter;              //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (assign,nonatomic) BOOL showsDesignator;                            //@synthesize showsDesignator=_showsDesignator - In the implementation block
@property (assign,nonatomic) BOOL paused;                                     //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) double maxWidth;                                 //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,readonly) CGSize intrinsicSize; 
@property (nonatomic,copy) id didResizeHandler;                               //@synthesize didResizeHandler=_didResizeHandler - In the implementation block
@property (assign,nonatomic) BOOL showSeconds;                                //@synthesize showSeconds=_showSeconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,readonly) double _lastLineBaseline; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
+(id)labelWithOptions:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)labelWithOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(CLKUITimeLabelStyle *)style;
-(void)setStyle:(CLKUITimeLabelStyle *)arg1 ;
-(CLKDevice *)device;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(void)sizeToFit;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)didMoveToWindow;
-(void)setTimeOffset:(double)arg1 ;
-(UIColor *)textColor;
-(double)_lastLineBaseline;
-(long long)textAlignment;
-(CGSize)intrinsicSize;
-(CLKTimeFormatter *)timeFormatter;
-(void)timeFormatterTextDidChange:(id)arg1 ;
-(id)identifyingInfoForTimeFormatter:(id)arg1 ;
-(void)setShowSeconds:(BOOL)arg1 ;
-(BOOL)showSeconds;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(UIEdgeInsets)opticalInsets;
-(void)setShowsDesignator:(BOOL)arg1 ;
-(id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(id)_newLabelManager;
-(void)_resizeIfNecessary;
-(void)setBlinkingPaused:(BOOL)arg1 ;
-(void)_cancelAnimation;
-(void)setTimeFont:(id)arg1 designatorFont:(id)arg2 ;
-(void)setThreeDigitFont:(id)arg1 fourDigitFont:(id)arg2 designatorFont:(id)arg3 ;
-(void)cleanupAfterStyleTransition;
-(void)setStyleTransitionFraction:(double)arg1 ;
-(void)_scaleTransitionLabels;
-(void)_fadeTransitionLabels;
-(id)_newUnderlyingLabel:(BOOL)arg1 ;
-(id)initWithTimeLabelOptions:(unsigned long long)arg1 ;
-(id)labelManagerContentView;
-(void)prepareToTransitionToStyle:(id)arg1 ;
-(CGSize)styleTransitionEndSize;
-(CGSize)styleTransitionCurrentSize;
-(void)_enumerateUnderlyingLabelsWithBlock:(/*^block*/id)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(BOOL)showsDesignator;
-(id)didResizeHandler;
-(void)setDidResizeHandler:(id)arg1 ;
@end

