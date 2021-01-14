/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, PKProgressBar, UIImageView, NSString, PKCurrencyAmount;

@interface PKInstallmentPlanProgressCollectionViewCell : PKDashboardCollectionViewCell {

	UILabel* _leadingTitleLabel;
	UILabel* _leadingAmountLabel;
	UILabel* _trailingTitleLabel;
	UILabel* _trailingAmountLabel;
	PKProgressBar* _progressBar;
	UIImageView* _completeCheckmark;
	UILabel* _completeLabel;
	UILabel* _detailLabel;
	BOOL _complete;
	NSString* _leadingTitle;
	NSString* _trailingTitle;
	PKCurrencyAmount* _leadingAmount;
	PKCurrencyAmount* _trailingAmount;
	NSString* _subtitleText;

}

@property (nonatomic,copy) NSString * leadingTitle;                          //@synthesize leadingTitle=_leadingTitle - In the implementation block
@property (nonatomic,copy) NSString * trailingTitle;                         //@synthesize trailingTitle=_trailingTitle - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * leadingAmount;               //@synthesize leadingAmount=_leadingAmount - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * trailingAmount;              //@synthesize trailingAmount=_trailingAmount - In the implementation block
@property (assign,nonatomic) double progressAmount; 
@property (nonatomic,copy) NSString * subtitleText;                          //@synthesize subtitleText=_subtitleText - In the implementation block
@property (assign,getter=isComplete,nonatomic) BOOL complete;                //@synthesize complete=_complete - In the implementation block
-(BOOL)isComplete;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(PKCurrencyAmount *)leadingAmount;
-(void)setLeadingAmount:(PKCurrencyAmount *)arg1 ;
-(void)setTrailingAmount:(PKCurrencyAmount *)arg1 ;
-(void)setProgressAmount:(double)arg1 ;
-(double)progressAmount;
-(PKCurrencyAmount *)trailingAmount;
-(NSString *)leadingTitle;
-(NSString *)trailingTitle;
-(void)setLeadingTitle:(NSString *)arg1 ;
-(void)setTrailingTitle:(NSString *)arg1 ;
@end

