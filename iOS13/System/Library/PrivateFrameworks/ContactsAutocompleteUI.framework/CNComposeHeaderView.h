/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CNComposeHeaderViewDelegate;
@class NSString, CNComposeHeaderLabelView, UIView;

@interface CNComposeHeaderView : UIView {

	BOOL _showsHighlightWhenTouched;
	NSString* _navTitle;
	CNComposeHeaderLabelView* _labelView;
	id<CNComposeHeaderViewDelegate> _delegate;
	UIView* _separator;
	UIView* _highlightedBackgroundView;
	NSDirectionalEdgeInsets _separatorDirectionalEdgeInsets;

}

@property (nonatomic,retain) CNComposeHeaderLabelView * labelView;                                //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UIView * separator;                                                  //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIView * highlightedBackgroundView;                                  //@synthesize highlightedBackgroundView=_highlightedBackgroundView - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * navTitle;                                                   //@synthesize navTitle=_navTitle - In the implementation block
@property (assign,nonatomic) BOOL showsHighlightWhenTouched;                                      //@synthesize showsHighlightWhenTouched=_showsHighlightWhenTouched - In the implementation block
@property (assign,nonatomic,__weak) id<CNComposeHeaderViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets separatorDirectionalEdgeInsets;              //@synthesize separatorDirectionalEdgeInsets=_separatorDirectionalEdgeInsets - In the implementation block
+(id)defaultFont;
+(double)preferredHeight;
+(double)separatorHeight;
+(double)_labelTopPaddingSpecification;
+(id)defaultSeparatorColor;
-(id<CNComposeHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<CNComposeHeaderViewDelegate>)arg1 ;
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
-(UIView *)separator;
-(void)setSeparator:(UIView *)arg1 ;
-(CGRect)_contentRect;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_canBecomeFirstResponder;
-(CNComposeHeaderLabelView *)labelView;
-(void)setLabelView:(CNComposeHeaderLabelView *)arg1 ;
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
-(void)setSeparatorDirectionalEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)separatorDirectionalEdgeInsets;
-(UIView *)highlightedBackgroundView;
-(void)setHighlightedBackgroundView:(UIView *)arg1 ;
@end

