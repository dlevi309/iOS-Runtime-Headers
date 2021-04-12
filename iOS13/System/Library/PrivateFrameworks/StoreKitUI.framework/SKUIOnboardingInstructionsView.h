/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSMutableArray;

@interface SKUIOnboardingInstructionsView : UIView {

	UIEdgeInsets _contentInset;
	long long _contentPosition;
	UILabel* _explanationLabel;
	NSMutableArray* _labelsStack;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                 //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) UILabel * explanationLabel;              //@synthesize explanationLabel=_explanationLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) long long contentPosition;                 //@synthesize contentPosition=_contentPosition - In the implementation block
+(id)titleAttributedStringWithString:(id)arg1 ;
+(id)explanationAttributedStringWithString:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(id)_newExplanationLabel;
-(UILabel *)explanationLabel;
-(void)setContentPosition:(long long)arg1 ;
-(void)pushLabelState;
-(void)popLabelState;
-(id)_newTitleLabel;
-(void)setContentPosition:(long long)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long)contentPosition;
@end

