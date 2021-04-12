/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNUINavigationListViewCell.h>

@interface CNUINavigationListViewDetailCell : CNUINavigationListViewCell {

	long long _contentAlignment;

}

@property (assign,nonatomic) long long contentAlignment;              //@synthesize contentAlignment=_contentAlignment - In the implementation block
+(double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1 ;
+(double)subtitleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1 ;
+(double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1 ;
+(CGSize)desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3 ;
+(id)reuseIdentifier;
-(void)applyStyle;
-(long long)contentAlignment;
-(void)setContentAlignment:(long long)arg1 ;
-(void)updateConstraints;
-(double)minimumContentHeight;
-(double)contentViewBottomAnchorConstraintConstant;
-(double)subtitleLabelFirstBaselineAnchorConstraintConstant;
-(void)setupAccessoryImageViewInView:(id)arg1 ;
-(double)titleLabelFirstBaselineAnchorConstraintConstant;
-(void)loadContentViewConstraints;
@end

