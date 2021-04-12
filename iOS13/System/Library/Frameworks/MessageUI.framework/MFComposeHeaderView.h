/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class MFHeaderLabelView, UIView, NSString;

@interface MFComposeHeaderView : UIView {

	id _delegate;
	MFHeaderLabelView* _labelView;
	UIView* _separator;
	UIView* _highlightBackgroundView;
	BOOL _showsHighlightWhenTouched;
	NSString* _navTitle;

}

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * navTitle;                            //@synthesize navTitle=_navTitle - In the implementation block
@property (nonatomic,readonly) MFHeaderLabelView * labelView;              //@synthesize labelView=_labelView - In the implementation block
@property (assign,nonatomic) BOOL showsHighlightWhenTouched;               //@synthesize showsHighlightWhenTouched=_showsHighlightWhenTouched - In the implementation block
+(id)defaultFont;
+(double)preferredHeight;
+(double)separatorHeight;
+(double)_labelTopPaddingSpecification;
+(id)defaultSeparatorColor;
-(void)setDelegate:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)_baseAttributes;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)labelColor;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(CGRect)_contentRect;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_canBecomeFirstResponder;
-(MFHeaderLabelView *)labelView;
-(id)_automationID;
-(NSString *)navTitle;
-(void)setNavTitle:(NSString *)arg1 ;
-(CGRect)titleLabelBaselineAlignmentRectForLabel:(id)arg1 ;
-(id)_highlightedBackgroundView;
-(void)refreshPreferredContentSize;
-(UIEdgeInsets)_recipientViewEdgeInsets;
-(double)labelTopPadding;
-(BOOL)_shouldEmbedLabelInTextView;
-(BOOL)showsHighlightWhenTouched;
-(void)handleTouchesEnded;
-(CGRect)_exclusionRectForView:(id)arg1 alongEdge:(unsigned long long)arg2 ;
-(void)setShowsHighlightWhenTouched:(BOOL)arg1 ;
@end

