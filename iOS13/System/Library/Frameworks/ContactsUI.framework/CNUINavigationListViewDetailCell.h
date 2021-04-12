/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNUINavigationListViewCell.h>

@interface CNUINavigationListViewDetailCell : CNUINavigationListViewCell {

	long long _contentAlignment;

}

@property (assign,nonatomic) long long contentAlignment;              //@synthesize contentAlignment=_contentAlignment - In the implementation block
+(id)reuseIdentifier;
+(double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1 ;
+(double)subtitleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1 ;
+(double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1 ;
+(CGSize)desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3 ;
-(void)updateConstraints;
-(long long)contentAlignment;
-(void)setContentAlignment:(long long)arg1 ;
-(double)minimumContentHeight;
-(double)contentViewBottomAnchorConstraintConstant;
-(double)subtitleLabelFirstBaselineAnchorConstraintConstant;
-(double)titleLabelFirstBaselineAnchorConstraintConstant;
-(void)setupAccessoryImageViewInView:(id)arg1 ;
-(void)loadContentViewConstraints;
-(void)applyStyle;
@end

