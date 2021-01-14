/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)wantsHorizontalLayout;
+(double)valueLabelFirstBaselineAnchorConstraintConstant;
+(double)labelViewFirstBaselineAnchorConstraintConstant;
+(double)minimumContentHeight;
+(double)contentViewBottomAnchorConstraintConstant;
-(BOOL)canBecomeFocused;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIEdgeInsets)contentInsets;
-(CNStarkActionView *)actionView1;
-(CNStarkActionView *)actionView2;
-(void)actionViewTapped:(id)arg1 ;
-(BOOL)supportsTintColorValue;
-(BOOL)shouldShowStar;
-(void)updateTransportButtons;
-(id)constantConstraints;
-(BOOL)allowsFocus;
-(NSLayoutConstraint *)labelViewFirstBaselineAnchorConstraint;
-(void)setLabelViewFirstBaselineAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)valueViewFirstBaselineAnchorConstraint;
-(void)setValueViewFirstBaselineAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)performDefaultAction;
-(id)variableConstraints;
-(long long)transportTypeForActionType:(id)arg1 ;
-(void)performActionForMessage;
-(void)setAllowsFocus:(BOOL)arg1 ;
-(BOOL)allowsCellSelection;
-(BOOL)supportsValueColorUsesLabelColor;
-(NSLayoutConstraint *)contentViewBottomAnchorConstraint;
-(void)setContentViewBottomAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_cnui_applyContactStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

