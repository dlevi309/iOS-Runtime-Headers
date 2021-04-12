/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class NSTextContainer, NSTextStorage, NSLayoutManager, _MKUILabel, NSString, UIFont, UITapGestureRecognizer, UITextView, UIColor, NSAttributedString;

@interface MKExpandingLabel : UIView <UIGestureRecognizerDelegate, UITextViewDelegate> {

	unsigned long long _expansionMode;
	NSTextContainer* _textContainer;
	NSTextStorage* _textStorage;
	NSLayoutManager* _textLayoutManager;
	_MKUILabel* _showMoreLabel;
	NSString* _showLessText;
	UIFont* _showLessFont;
	UITapGestureRecognizer* _showMoreTapRecognizer;
	BOOL _isPerformingLayout;
	BOOL _allowLessText;
	UITextView* _textView;
	UIColor* _showMoreTextColor;
	UIColor* _showLessTextColor;
	unsigned long long _numberOfLinesWhenCollapsed;
	/*^block*/id _labelResizedBlock;

}

@property (nonatomic,retain) UITextView * textView;                                      //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSString * showMoreText; 
@property (nonatomic,retain) UIFont * showMoreFont; 
@property (nonatomic,retain) UIColor * showMoreTextColor;                                //@synthesize showMoreTextColor=_showMoreTextColor - In the implementation block
@property (nonatomic,copy) NSString * showLessText; 
@property (nonatomic,retain) UIFont * showLessFont; 
@property (nonatomic,retain) UIColor * showLessTextColor;                                //@synthesize showLessTextColor=_showLessTextColor - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLinesWhenCollapsed;              //@synthesize numberOfLinesWhenCollapsed=_numberOfLinesWhenCollapsed - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded; 
@property (assign,nonatomic) BOOL allowLessText;                                         //@synthesize allowLessText=_allowLessText - In the implementation block
@property (nonatomic,copy) id labelResizedBlock;                                         //@synthesize labelResizedBlock=_labelResizedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextView *)textView;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(NSAttributedString *)attributedText;
-(id)viewForLastBaselineLayout;
-(UIColor *)textColor;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id)viewForFirstBaselineLayout;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)_expand;
-(void)setText:(NSString *)arg1 ;
-(UIColor *)showMoreTextColor;
-(void)setShowMoreText:(NSString *)arg1 ;
-(void)setShowMoreFont:(UIFont *)arg1 ;
-(void)setShowLessFont:(UIFont *)arg1 ;
-(void)_mkExpandingLabelComonInit;
-(BOOL)isShowingExpanded;
-(BOOL)_canShowAllText;
-(void)_setExpansionMode:(unsigned long long)arg1 ;
-(void)_setTextExclusionPath;
-(BOOL)_canShowLess;
-(UIFont *)showLessFont;
-(UIColor *)showLessTextColor;
-(id)_showLessTextSeparator;
-(NSString *)showLessText;
-(BOOL)allowLessText;
-(BOOL)_isShowingUserExpanded;
-(void)setNumberOfLinesWhenCollapsed:(unsigned long long)arg1 ;
-(NSString *)showMoreText;
-(UIFont *)showMoreFont;
-(void)setShowMoreTextColor:(UIColor *)arg1 ;
-(void)setShowLessTextColor:(UIColor *)arg1 ;
-(void)setShowLessText:(NSString *)arg1 ;
-(unsigned long long)numberOfLinesWhenCollapsed;
-(id)labelResizedBlock;
-(void)setLabelResizedBlock:(id)arg1 ;
-(void)setAllowLessText:(BOOL)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(void)infoCardThemeChanged;
-(void)setTextAlignment:(long long)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIFont *)font;
@end

