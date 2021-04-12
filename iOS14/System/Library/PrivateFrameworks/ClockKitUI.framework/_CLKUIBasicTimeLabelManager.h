/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <libobjc.A.dylib/_CLKUITimeLabelManager.h>

@class UIView, UIColor, CLKDevice, UILabel, CLKTimeFormatter, NSString, CLKUITimeLabelStyle, NSAttributedString;

@interface _CLKUIBasicTimeLabelManager : NSObject <_CLKUITimeLabelManager> {

	CLKDevice* _device;
	UILabel* _label;
	CLKTimeFormatter* _timeFormatter;
	NSString* _timeText;
	CLKUITimeLabelStyle* _style;
	double _maxWidth;
	NSAttributedString* _correctAttributedText;
	BOOL _showsDesignator;
	BOOL _showSubstringToSeparator;
	BOOL _showSubstringFromSeparator;
	BOOL _hideMinutesIfZero;
	BOOL _primary;
	CGSize _cachedIntrinsicSize;
	UIEdgeInsets _cachedOpticalEdgeInsets;
	BOOL _cachedOpticalEdgeInsetsIsValid;
	BOOL _showSeconds;
	UIColor* _textColor;
	NSAttributedString* _minutesBlinkerAttributedText;
	NSAttributedString* _secondsBlinkerAttributedText;
	NSRange _minutesBlinkerRange;
	NSRange _secondsBlinkerRange;
	CGRect _boundingRectOfMinutesBlinkerAttributedText;
	CGRect _boundingRectOfSecondsBlinkerAttributedText;
	BOOL _animationsPaused;
	BOOL _showsBlinker;
	BOOL _showsNumbers;

}

@property (assign,nonatomic) BOOL showsBlinker;                         //@synthesize showsBlinker=_showsBlinker - In the implementation block
@property (assign,nonatomic) BOOL showsNumbers;                         //@synthesize showsNumbers=_showsNumbers - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) CGSize intrinsicSize; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) BOOL animationsPaused;                     //@synthesize animationsPaused=_animationsPaused - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
@property (assign,nonatomic) BOOL showSeconds;                          //@synthesize showSeconds=_showSeconds - In the implementation block
-(id)viewForLastBaselineLayout;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIView *)view;
-(void)setStyle:(id)arg1 ;
-(void)_updateAttributedText;
-(CGSize)intrinsicSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setMaxWidth:(double)arg1 ;
-(double)_lastLineBaseline;
-(void)updateTimeText;
-(CGSize)sizeThatFits;
-(UIEdgeInsets)opticalInsets;
-(void)setShowSeconds:(BOOL)arg1 ;
-(void)setShowsDesignator:(BOOL)arg1 ;
-(BOOL)showSeconds;
-(id)_initForDevice:(id)arg1 primary:(BOOL)arg2 withTimeFormatter:(id)arg3 options:(unsigned long long)arg4 labelFactory:(/*^block*/id)arg5 ;
-(id)_attributedTextShowingBlinker:(BOOL)arg1 numbers:(BOOL)arg2 ;
-(id)secondsDesignatorAttributedText;
-(CGRect)_boundingRectOfBlinkerAtRange:(NSRange)arg1 ;
-(id)effectiveFont;
-(id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(unsigned long long)arg3 labelFactory:(/*^block*/id)arg4 ;
-(void)sizeViewToFit;
-(id)effectiveAttributedText;
-(void)enumerateUnderlyingLabelsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)animationsPaused;
-(void)setAnimationsPaused:(BOOL)arg1 ;
-(id)minutesDesignatorAttributedText;
-(CGRect)_boundingRectOfMinutesBlinker;
-(CGRect)_boundingRectOfSecondsBlinker;
-(BOOL)showsBlinker;
-(void)setShowsBlinker:(BOOL)arg1 ;
-(BOOL)showsNumbers;
-(void)setShowsNumbers:(BOOL)arg1 ;
@end

