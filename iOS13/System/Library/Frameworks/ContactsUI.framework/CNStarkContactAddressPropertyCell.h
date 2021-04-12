/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyPostalAddressCell.h>
#import <libobjc.A.dylib/CNStarkActionViewDelegate.h>

@class CNStarkActionView, NSLayoutConstraint, NSString;

@interface CNStarkContactAddressPropertyCell : CNPropertyPostalAddressCell <CNStarkActionViewDelegate> {

	CNStarkActionView* _actionView;
	NSLayoutConstraint* _labelViewFirstBaselineAnchorConstraint;
	NSLayoutConstraint* _valueViewFirstBaselineAnchorConstraint;
	NSLayoutConstraint* _contentViewBottomAnchorConstraint;

}

@property (nonatomic,readonly) CNStarkActionView * actionView;                                         //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelViewFirstBaselineAnchorConstraint;              //@synthesize labelViewFirstBaselineAnchorConstraint=_labelViewFirstBaselineAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * valueViewFirstBaselineAnchorConstraint;              //@synthesize valueViewFirstBaselineAnchorConstraint=_valueViewFirstBaselineAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomAnchorConstraint;                   //@synthesize contentViewBottomAnchorConstraint=_contentViewBottomAnchorConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CNStarkActionView *)actionView;
-(id)variableConstraints;
-(id)constantConstraints;
-(void)performDefaultAction;
-(NSLayoutConstraint *)contentViewBottomAnchorConstraint;
-(void)setContentViewBottomAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_cnui_applyContactStyle;
-(void)actionViewTapped:(id)arg1 ;
-(BOOL)supportsTintColorValue;
-(BOOL)shouldShowStar;
-(void)updateTransportButtons;
-(BOOL)supportsValueColorUsesLabelColor;
-(NSLayoutConstraint *)labelViewFirstBaselineAnchorConstraint;
-(void)setLabelViewFirstBaselineAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)valueViewFirstBaselineAnchorConstraint;
-(void)setValueViewFirstBaselineAnchorConstraint:(NSLayoutConstraint *)arg1 ;
@end

