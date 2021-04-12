/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setStyle:(id)arg1 ;
-(void)setMaxWidth:(double)arg1 ;
-(UIView *)view;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)viewForLastBaselineLayout;
-(UIColor *)textColor;
-(double)_lastLineBaseline;
-(CGSize)intrinsicSize;
-(void)updateTimeText;
-(CGSize)sizeThatFits;
-(void)setShowSeconds:(BOOL)arg1 ;
-(BOOL)showSeconds;
-(void)_updateAttributedText;
-(id)_initForDevice:(id)arg1 primary:(BOOL)arg2 withTimeFormatter:(id)arg3 options:(unsigned long long)arg4 labelFactory:(/*^block*/id)arg5 ;
-(id)_attributedTextShowingBlinker:(BOOL)arg1 numbers:(BOOL)arg2 ;
-(UIEdgeInsets)opticalInsets;
-(id)effectiveFont;
-(id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(unsigned long long)arg3 labelFactory:(/*^block*/id)arg4 ;
-(void)setShowsDesignator:(BOOL)arg1 ;
-(void)sizeViewToFit;
-(id)effectiveAttributedText;
-(void)enumerateUnderlyingLabelsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)animationsPaused;
-(void)setAnimationsPaused:(BOOL)arg1 ;
-(BOOL)showsBlinker;
-(void)setShowsBlinker:(BOOL)arg1 ;
-(BOOL)showsNumbers;
-(void)setShowsNumbers:(BOOL)arg1 ;
@end

