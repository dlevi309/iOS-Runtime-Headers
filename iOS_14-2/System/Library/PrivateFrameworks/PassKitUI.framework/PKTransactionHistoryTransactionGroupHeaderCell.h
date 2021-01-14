/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, UIImage, UIImageView, UIView, NSString;

@interface PKTransactionHistoryTransactionGroupHeaderCell : PKDashboardCollectionViewCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	BOOL _isTemplateLayout;
	UIImage* _image;
	UIImageView* _imageView;
	UIView* _imageBackgroundView;
	BOOL _useShadows;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL useShadows;                //@synthesize useShadows=_useShadows - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)_updateImageViewDynamicColors;
-(void)setUseShadows:(BOOL)arg1 ;
-(BOOL)useShadows;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)_setupImageView;
-(NSString *)title;
@end

