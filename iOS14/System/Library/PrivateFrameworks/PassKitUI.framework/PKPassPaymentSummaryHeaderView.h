/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, UIColor;

@interface PKPassPaymentSummaryHeaderView : UIView {

	UILabel* _titleLabel;
	UILabel* _secondaryTitleLabel;

}

@property (nonatomic,retain) NSString * primaryTitle; 
@property (nonatomic,retain) NSString * secondaryTitle; 
@property (nonatomic,retain) UIColor * color; 
+(id)_titleFont;
+(double)preferredHeight;
+(CGSize)_sizeForLabelWithText:(id)arg1 font:(id)arg2 maximumNumberOfLines:(long long)arg3 width:(double)arg4 ;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(UIColor *)color;
-(void)layoutSubviews;
-(void)setPrimaryTitle:(NSString *)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)secondaryTitle;
-(NSString *)primaryTitle;
-(void)dealloc;
@end

