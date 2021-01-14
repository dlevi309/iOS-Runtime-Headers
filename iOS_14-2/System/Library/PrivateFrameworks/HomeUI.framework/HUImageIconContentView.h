/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUIconContentView.h>

@class UIImageView;

@interface HUImageIconContentView : HUIconContentView {

	long long _iconContentMode;
	UIImageView* _imageView;
	long long _originalImageRenderingMode;

}

@property (nonatomic,retain) UIImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long originalImageRenderingMode;              //@synthesize originalImageRenderingMode=_originalImageRenderingMode - In the implementation block
@property (assign,nonatomic) long long iconContentMode;                         //@synthesize iconContentMode=_iconContentMode - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)setIconSize:(unsigned long long)arg1 ;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2 ;
-(long long)iconContentMode;
-(void)setIconContentMode:(long long)arg1 ;
-(void)_updateIconImage;
-(id)imageForImageIconDescriptor:(id)arg1 ;
-(void)setOriginalImageRenderingMode:(long long)arg1 ;
-(long long)originalImageRenderingMode;
@end

