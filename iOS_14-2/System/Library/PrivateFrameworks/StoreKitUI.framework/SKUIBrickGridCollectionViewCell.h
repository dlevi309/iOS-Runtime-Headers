/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIImageView, SKUIEditorialCellLayout, UIView, UIImage;

@interface SKUIBrickGridCollectionViewCell : UICollectionViewCell {

	NSString* _accessibilityLabel;
	UIImageView* _brickImageView;
	UIEdgeInsets _contentInsets;
	SKUIEditorialCellLayout* _editorialCellLayout;
	UIView* _editorialContainerView;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;               //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,retain) UIImage * brickImage; 
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)applyEditorialLayout:(id)arg1 orientation:(long long)arg2 ;
-(void)setBrickImage:(UIImage *)arg1 ;
-(UIImage *)brickImage;
@end

