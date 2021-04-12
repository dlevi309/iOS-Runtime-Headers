/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) CGRect mf_scribbleFrame; 
@property (nonatomic,retain) CNComposeHeaderLabelView * labelView;                                //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UIView * separator;                                                  //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIView * highlightedBackgroundView;                                  //@synthesize highlightedBackgroundView=_highlightedBackgroundView - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * navTitle;                                                   //@synthesize navTitle=_navTitle - In the implementation block
@property (assign,nonatomic) BOOL showsHighlightWhenTouched;                                      //@synthesize showsHighlightWhenTouched=_showsHighlightWhenTouched - In the implementation block
@property (assign,nonatomic,__weak) id<CNComposeHeaderViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets separatorDirectionalEdgeInsets;              //@synthesize separatorDirectionalEdgeInsets=_separatorDirectionalEdgeInsets - In the implementation block
+(double)separatorHeight;
+(double)preferredHeight;
+(double)_labelTopPaddingSpecification;
+(id)defaultSeparatorColor;
+(id)defaultFont;
-(CGRect)mf_scribbleFrame;
-(BOOL)_canBecomeFirstResponder;
-(void)layoutMarginsDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_baseAttributes;
-(id<CNComposeHeaderViewDelegate>)delegate;
-(CNComposeHeaderLabelView *)labelView;
-(id)_automationID;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)labelColor;
-(UIView *)separator;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<CNComposeHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)_contentRect;
-(NSString *)navTitle;
-(void)setSeparator:(UIView *)arg1 ;
-(CGRect)titleLabelBaselineAlignmentRectForLabel:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setLabelView:(CNComposeHeaderLabelView *)arg1 ;
-(double)labelTopPadding;
-(UIEdgeInsets)_recipientViewEdgeInsets;
-(BOOL)_shouldEmbedLabelInTextView;
-(void)handleTouchesEnded;
-(NSDirectionalEdgeInsets)separatorDirectionalEdgeInsets;
-(BOOL)showsHighlightWhenTouched;
-(UIView *)highlightedBackgroundView;
-(id)_highlightedBackgroundView;
-(void)refreshPreferredContentSize;
-(CGRect)_exclusionRectForView:(id)arg1 alongEdge:(unsigned long long)arg2 ;
-(void)setNavTitle:(NSString *)arg1 ;
-(void)setShowsHighlightWhenTouched:(BOOL)arg1 ;
-(void)setSeparatorDirectionalEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setHighlightedBackgroundView:(UIView *)arg1 ;
-(NSString *)label;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

