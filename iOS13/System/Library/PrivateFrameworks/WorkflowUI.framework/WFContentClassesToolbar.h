/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol WFContentClassesToolbarDelegate;
@class WFModuleAppearance, NSArray, UIView, UILabel, UIImageView, NSLayoutConstraint;

@interface WFContentClassesToolbar : UICollectionReusableView {

	BOOL _toolbarDisabled;
	BOOL _highlighted;
	WFModuleAppearance* _appearance;
	id<WFContentClassesToolbarDelegate> _delegate;
	NSArray* _contentClasses;
	double _horizontalInset;
	UIView* _contentView;
	UILabel* _typesLabel;
	UIImageView* _chevronImageView;
	NSLayoutConstraint* _contentViewLeadingConstraint;
	NSLayoutConstraint* _contentViewTrailingConstraint;
	NSLayoutConstraint* _chevronVisibleConstraint;
	NSLayoutConstraint* _chevronHiddenConstraint;

}

@property (assign,nonatomic,__weak) UIView * contentView;                                       //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * typesLabel;                                       //@synthesize typesLabel=_typesLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * chevronImageView;                             //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                                  //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentViewLeadingConstraint;               //@synthesize contentViewLeadingConstraint=_contentViewLeadingConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * contentViewTrailingConstraint;              //@synthesize contentViewTrailingConstraint=_contentViewTrailingConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * chevronVisibleConstraint;                   //@synthesize chevronVisibleConstraint=_chevronVisibleConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * chevronHiddenConstraint;                    //@synthesize chevronHiddenConstraint=_chevronHiddenConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<WFContentClassesToolbarDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * contentClasses;                                            //@synthesize contentClasses=_contentClasses - In the implementation block
@property (assign,nonatomic) BOOL toolbarDisabled;                                              //@synthesize toolbarDisabled=_toolbarDisabled - In the implementation block
@property (assign,nonatomic) double horizontalInset;                                            //@synthesize horizontalInset=_horizontalInset - In the implementation block
@property (nonatomic,retain) WFModuleAppearance * appearance;                                   //@synthesize appearance=_appearance - In the implementation block
+(double)preferredHeight;
+(NSDirectionalEdgeInsets)contentViewInsets;
+(id)headingFont;
-(id<WFContentClassesToolbarDelegate>)delegate;
-(void)setDelegate:(id<WFContentClassesToolbarDelegate>)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(WFModuleAppearance *)appearance;
-(void)setAppearance:(WFModuleAppearance *)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityActivate;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)unhighlight;
-(void)highlight;
-(void)updateAppearance;
-(UIImageView *)chevronImageView;
-(void)setChevronImageView:(UIImageView *)arg1 ;
-(double)horizontalInset;
-(void)setHorizontalInset:(double)arg1 ;
-(NSArray *)contentClasses;
-(void)setContentClasses:(NSArray *)arg1 ;
-(void)fadeOutHighlight;
-(BOOL)toolbarDisabled;
-(void)updateTypesLabel;
-(void)typesLabelTapped;
-(void)setToolbarDisabled:(BOOL)arg1 ;
-(UILabel *)typesLabel;
-(void)setTypesLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)contentViewLeadingConstraint;
-(NSLayoutConstraint *)contentViewTrailingConstraint;
-(NSLayoutConstraint *)chevronVisibleConstraint;
-(NSLayoutConstraint *)chevronHiddenConstraint;
@end

