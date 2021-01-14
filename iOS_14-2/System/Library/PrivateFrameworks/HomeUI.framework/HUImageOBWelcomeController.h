/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUCenterFillOBWelcomeController.h>

@class UIImageView, UIImage;

@interface HUImageOBWelcomeController : HUCenterFillOBWelcomeController {

	UIImageView* _contentImageView;

}

@property (nonatomic,readonly) UIImageView * contentImageView;              //@synthesize contentImageView=_contentImageView - In the implementation block
@property (nonatomic,retain) UIImage * contentImage; 
-(UIImage *)contentImage;
-(void)viewDidLoad;
-(void)_updateContentMode;
-(double)_contentAspectRatio;
-(void)viewDidLayoutSubviews;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4 ;
-(UIImageView *)contentImageView;
-(void)_viewDidUpdateContent;
-(void)setContentImage:(UIImage *)arg1 ;
@end

