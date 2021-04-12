/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setBackgroundColor:(id)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)applyEditorialLayout:(id)arg1 orientation:(long long)arg2 ;
-(void)setBrickImage:(UIImage *)arg1 ;
-(UIImage *)brickImage;
@end

