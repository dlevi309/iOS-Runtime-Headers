/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, UIColor, TPLCDTextViewScrollingView, UIFrameAnimation;

@interface TPLCDTextView : UIView {

	NSString* _text;
	UIFont* _font;
	UIColor* _shadowColor;
	UIColor* _textColor;
	TPLCDTextViewScrollingView* _scrollingView;
	double _fontSize;
	CGRect _textRect;
	UIFrameAnimation* _animation;
	id _delegate;
	double _minFontSize;
	unsigned _textRectIsValid : 1;
	unsigned _centerText : 1;
	unsigned _animates : 1;
	unsigned _isAnimating : 1;
	unsigned _leftTruncates : 1;

}
+(double)defaultMinimumFontSize;
-(void)setShadowColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(BOOL)animates;
-(void)setTextColor:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)_tearDownAnimation;
-(void)setFrame:(CGRect)arg1 ;
-(id)text;
-(void)startAnimating;
-(void)stopAnimating;
-(CGSize)sizeToFit;
-(CGRect)textRect;
-(void)dealloc;
-(void)setMinimumFontSize:(double)arg1 ;
-(void)_setupForAnimationIfNecessary;
-(void)setLCDTextFont:(id)arg1 ;
-(void)_drawTextInRect:(CGRect)arg1 verticallyOffset:(BOOL)arg2 ;
-(void)_startScrolling;
-(void)_scheduleStartScrolling;
-(void)_finishedScrolling;
-(void)setCenterText:(BOOL)arg1 ;
-(void)setLeftTruncatesText:(BOOL)arg1 ;
-(void)setAnimatesIfTruncated:(BOOL)arg1 ;
-(void)resetAnimation;
@end

