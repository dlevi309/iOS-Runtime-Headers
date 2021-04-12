/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutManager, NSTextStorage, NSTextContainer, NSMutableArray, NSMutableSet, UIFont, UIColor, NSArray, NSString;

@interface SUICStreamingTextView : UIView {

	NSLayoutManager* _layoutManager;
	NSTextStorage* _textStorage;
	NSTextContainer* _textContainer;
	NSMutableArray* _words;
	NSMutableArray* _wordsToShow;
	NSMutableSet* _wordsToDelete;
	BOOL _animatedInternal;
	BOOL _animated;
	UIFont* _font;
	double _hyphenationFactor;
	UIColor* _startTextColor;
	UIColor* _endTextColor;
	double _animationDuration;
	UIColor* _textColor;

}

@property (nonatomic,retain) UIFont * font;                         //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double hyphenationFactor;              //@synthesize hyphenationFactor=_hyphenationFactor - In the implementation block
@property (nonatomic,retain) UIColor * startTextColor;              //@synthesize startTextColor=_startTextColor - In the implementation block
@property (nonatomic,retain) UIColor * endTextColor;                //@synthesize endTextColor=_endTextColor - In the implementation block
@property (assign,nonatomic) double animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) BOOL animated;                         //@synthesize animated=_animated - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                   //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) NSArray * words; 
@property (nonatomic,readonly) NSString * text; 
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)text;
-(double)hyphenationFactor;
-(void)setHyphenationFactor:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(UIColor *)textColor;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setWords:(NSArray *)arg1 ;
-(void)_resetState;
-(NSArray *)words;
-(void)_sharedInit;
-(void)_updateText:(id)arg1 ;
-(void)_updateAnimatedInternal;
-(void)setEndTextColor:(UIColor *)arg1 ;
-(void)_layoutFrames;
-(id)_glyphImageForWord:(id)arg1 frame:(CGRect)arg2 glyphRange:(NSRange)arg3 textColor:(id)arg4 ;
-(void)_animateLayers;
-(void)_animateWordIn:(id)arg1 ;
-(void)_animateWordOut:(id)arg1 ;
-(id)_createGlyphImage:(CGRect)arg1 glyphRange:(NSRange)arg2 layoutManager:(id)arg3 ;
-(UIColor *)startTextColor;
-(void)setStartTextColor:(UIColor *)arg1 ;
-(UIColor *)endTextColor;
@end

