/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIImageView.h>

@class SKUIHorizontalLockupView, SKUIImageView;

@interface SKUIBackgroundImageWrapperForHorizontalLockup : SKUIImageView {

	SKUIHorizontalLockupView* _lockup;
	SKUIImageView* _imageView;

}

@property (assign,nonatomic,__weak) SKUIHorizontalLockupView * lockup;              //@synthesize lockup=_lockup - In the implementation block
@property (assign,nonatomic,__weak) SKUIImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
-(void)setImageView:(SKUIImageView *)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(SKUIImageView *)imageView;
-(SKUIHorizontalLockupView *)lockup;
-(void)setLockup:(SKUIHorizontalLockupView *)arg1 ;
@end

