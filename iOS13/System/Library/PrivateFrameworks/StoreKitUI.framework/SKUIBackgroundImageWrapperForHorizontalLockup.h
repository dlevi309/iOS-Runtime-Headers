/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(SKUIImageView *)imageView;
-(void)setImageView:(SKUIImageView *)arg1 ;
-(SKUIHorizontalLockupView *)lockup;
-(void)setLockup:(SKUIHorizontalLockupView *)arg1 ;
@end

