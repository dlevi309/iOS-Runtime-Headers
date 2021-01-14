/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImage *)logo;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(double)_height;
-(void)setLogo:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)_imageViewFrame;
-(CGSize)preferredImageSize;
-(double)marginLength;
@end

