/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(NSString *)secondaryTitle;
-(void)setPrimaryTitle:(NSString *)arg1 ;
-(NSString *)primaryTitle;
@end

