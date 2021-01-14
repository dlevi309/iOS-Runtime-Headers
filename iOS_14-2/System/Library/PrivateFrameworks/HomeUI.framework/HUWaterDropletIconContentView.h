/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUIconContentView.h>

@class UIImageView, HFPrimaryStateIconDescriptor;

@interface HUWaterDropletIconContentView : HUIconContentView {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) HFPrimaryStateIconDescriptor * iconDescriptor; 
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2 ;
@end

