/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>

@class SKUIEmbeddedMediaView;

@interface SKUIMediaCollectionViewCell : SKUICollectionViewCell {

	UIEdgeInsets _contentInset;
	SKUIEmbeddedMediaView* _mediaView;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                        //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) SKUIEmbeddedMediaView * mediaView; 
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(SKUIEmbeddedMediaView *)mediaView;
@end

