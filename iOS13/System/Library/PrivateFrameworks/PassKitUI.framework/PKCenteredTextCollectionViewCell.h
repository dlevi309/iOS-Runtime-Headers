/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, NSString;

@interface PKCenteredTextCollectionViewCell : PKDashboardCollectionViewCell {

	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)resetFonts;
@end

