/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <AppSupportUI/NUITableViewContainerCell.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class CNComposeRecipient, UILabel, UIColor, NUIContainerStackView, NSString;

@interface CNComposeTableViewCell : NUITableViewContainerCell <NUIContainerViewDelegate> {

	CNComposeRecipient* _recipient;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UIColor* _labelColor;
	double _trailingButtonMidlineInsetFromLayoutMargin;
	double _trailingButtonWidth;
	NUIContainerStackView* _labelViewStack;

}

@property (nonatomic,retain) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                          //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                                           //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) NUIContainerStackView * labelViewStack;                         //@synthesize labelViewStack=_labelViewStack - In the implementation block
@property (nonatomic,retain) CNComposeRecipient * recipient;                                 //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;              //@synthesize trailingButtonMidlineInsetFromLayoutMargin=_trailingButtonMidlineInsetFromLayoutMargin - In the implementation block
@property (nonatomic,readonly) double trailingButtonWidth;                                   //@synthesize trailingButtonWidth=_trailingButtonWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
+(Class)containerViewClass;
+(double)additionalSeparatorInset;
+(id)axCappedSymbolConfigurationIsBold:(BOOL)arg1 ;
+(void)requireIntrinsicSizeForView:(id)arg1 ;
+(id)axCappedFontWithTextStyle:(id)arg1 bold:(BOOL)arg2 ;
-(UIColor *)labelColor;
-(UILabel *)titleLabel;
-(void)layoutMarginsDidChange;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setRecipient:(CNComposeRecipient *)arg1 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(CNComposeRecipient *)recipient;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(void)setLabelColor:(UIColor *)arg1 ;
-(double)trailingButtonMidlineInsetFromLayoutMargin;
-(void)setTrailingButtonMidlineInsetFromLayoutMargin:(double)arg1 ;
-(id)titleTextStyle;
-(void)labelsChangedWidth:(double)arg1 ;
-(double)trailingButtonWidth;
-(id)labelWithTextStyle:(id)arg1 ;
-(void)setLabelViewStack:(NUIContainerStackView *)arg1 ;
-(NUIContainerStackView *)labelViewStack;
-(void)settrailingButtonMidlineInsetFromLayoutMargin:(double)arg1 ;
@end

