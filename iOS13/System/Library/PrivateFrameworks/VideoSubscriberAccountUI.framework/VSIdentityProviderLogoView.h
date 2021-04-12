/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage;

@interface VSIdentityProviderLogoView : UIView {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * logo; 
@property (nonatomic,readonly) double marginLength; 
@property (nonatomic,readonly) CGSize preferredImageSize; 
-(id)initWithCoder:(id)arg1 ;
-(double)_height;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImage *)logo;
-(void)setLogo:(UIImage *)arg1 ;
-(CGSize)preferredImageSize;
-(CGRect)_imageViewFrame;
-(double)marginLength;
@end

