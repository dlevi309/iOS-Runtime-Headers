/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPropertyPhoneNumberCell.h>
#import <libobjc.A.dylib/CNStarkActionViewDelegate.h>

@class CNStarkActionView, NSLayoutConstraint, NSString;

@interface CNStarkContactPropertyCell : CNPropertyPhoneNumberCell <CNStarkActionViewDelegate> {

	BOOL _allowsFocus;
	CNStarkActionView* _actionView1;
	CNStarkActionView* _actionView2;
	NSLayoutConstraint* _labelViewFirstBaselineAnchorConstraint;
	NSLayoutConstraint* _valueViewFirstBaselineAnchorConstraint;
	NSLayoutConstraint* _contentViewBottomAnchorConstraint;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) CNStarkActionView * actionView1;                                        //@synthesize actionView1=_actionView1 - In the implementation block
@property (nonatomic,readonly) CNStarkActionView * actionView2;                                        //@synthesize actionView2=_actionView2 - In the implementation block
@property (assign,nonatomic) BOOL allowsFocus;                                                         //@synthesize allowsFocus=_allowsFocus - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelViewFirstBaselineAnchorConstraint;              //@synthesize labelViewFirstBaselineAnchorConstraint=_labelViewFirstBaselineAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * valueViewFirstBaselineAnchorConstraint;              //@synthesize valueViewFirstBaselineAnchorConstraint=_valueViewFirstBaselineAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomAnchorConstraint;                   //@synthesize contentViewBottomAnchorConstraint=_contentViewBottomAnchorConstraint - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                               //@synthesize contentInsets=_contentInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)minimumContentHeight;
+(double)contentViewBottomAnchorConstraintConstant;
+(BOOL)wantsHorizontalLayout;
+(double)valueLabelFirstBaselineAnchorConstraintConstant;
+(double)labelViewFirstBaselineAnchorConstraintConstant;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)variableConstraints;
-(id)constantConstraints;
-(void)performDefaultAction;
-(NSLayoutConstraint *)contentViewBottomAnchorConstraint;
-(void)setContentViewBottomAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_cnui_applyContactStyle;
-(CNStarkActionView *)actionView1;
-(CNStarkActionView *)actionView2;
-(void)actionViewTapped:(id)arg1 ;
-(BOOL)supportsTintColorValue;
-(BOOL)shouldShowStar;
-(void)updateTransportButtons;
-(BOOL)allowsCellSelection;
-(BOOL)supportsValueColorUsesLabelColor;
-(NSLayoutConstraint *)labelViewFirstBaselineAnchorConstraint;
-(void)setLabelViewFirstBaselineAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)valueViewFirstBaselineAnchorConstraint;
-(void)setValueViewFirstBaselineAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(long long)transportTypeForActionType:(id)arg1 ;
-(void)performActionForMessage;
-(BOOL)allowsFocus;
-(void)setAllowsFocus:(BOOL)arg1 ;
@end

