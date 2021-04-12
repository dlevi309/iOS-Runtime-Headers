/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSTextContainer, NSTextStorage, NSLayoutManager, _MKUILabel, UITapGestureRecognizer, UITextView, UIColor, NSString, UIFont, NSAttributedString;

@interface MKExpandingLabel : UIView <UIGestureRecognizerDelegate> {

	unsigned long long _expansionMode;
	NSTextContainer* _textContainer;
	NSTextStorage* _textStorage;
	NSLayoutManager* _textLayoutManager;
	_MKUILabel* _showMoreLabel;
	UITapGestureRecognizer* _showMoreTapRecognizer;
	BOOL _isPerformingLayout;
	UITextView* _textView;
	UIColor* _showMoreTextColor;
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
@property (assign,nonatomic) unsigned long long numberOfLinesWhenCollapsed;              //@synthesize numberOfLinesWhenCollapsed=_numberOfLinesWhenCollapsed - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded; 
@property (nonatomic,copy) id labelResizedBlock;                                         //@synthesize labelResizedBlock=_labelResizedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(UIColor *)textColor;
-(long long)textAlignment;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(void)infoCardThemeChanged;
-(UIColor *)showMoreTextColor;
-(void)setShowMoreText:(NSString *)arg1 ;
-(void)setShowMoreFont:(UIFont *)arg1 ;
-(void)_expand;
-(void)_mkExpandingLabelComonInit;
-(BOOL)isShowingExpanded;
-(BOOL)_canShowAllText;
-(void)_setExpansionMode:(unsigned long long)arg1 ;
-(void)_setTextExclusionPath;
-(void)setNumberOfLinesWhenCollapsed:(unsigned long long)arg1 ;
-(NSString *)showMoreText;
-(UIFont *)showMoreFont;
-(void)setShowMoreTextColor:(UIColor *)arg1 ;
-(unsigned long long)numberOfLinesWhenCollapsed;
-(id)labelResizedBlock;
-(void)setLabelResizedBlock:(id)arg1 ;
@end

