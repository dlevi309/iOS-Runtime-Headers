/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, UIImageView, NSString;

@interface PKTransactionHistoryTransactionGroupHeaderCell : PKDashboardCollectionViewCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	BOOL _isTemplateLayout;
	UIImageView* _imageView;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)_updateImageViewDynamicColors;
@end

