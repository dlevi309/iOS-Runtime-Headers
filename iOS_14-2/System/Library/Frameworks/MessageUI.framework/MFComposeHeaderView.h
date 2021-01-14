/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)separatorHeight;
+(double)preferredHeight;
+(double)_labelTopPaddingSpecification;
+(id)defaultSeparatorColor;
+(id)defaultFont;
-(BOOL)_canBecomeFirstResponder;
-(void)layoutMarginsDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_baseAttributes;
-(MFHeaderLabelView *)labelView;
-(id)_automationID;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)labelColor;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)_contentRect;
-(NSString *)navTitle;
-(CGRect)titleLabelBaselineAlignmentRectForLabel:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(double)labelTopPadding;
-(UIEdgeInsets)_recipientViewEdgeInsets;
-(BOOL)_shouldEmbedLabelInTextView;
-(void)handleTouchesEnded;
-(BOOL)showsHighlightWhenTouched;
-(id)_highlightedBackgroundView;
-(void)refreshPreferredContentSize;
-(CGRect)_exclusionRectForView:(id)arg1 alongEdge:(unsigned long long)arg2 ;
-(void)setNavTitle:(NSString *)arg1 ;
-(void)setShowsHighlightWhenTouched:(BOOL)arg1 ;
-(NSString *)label;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

