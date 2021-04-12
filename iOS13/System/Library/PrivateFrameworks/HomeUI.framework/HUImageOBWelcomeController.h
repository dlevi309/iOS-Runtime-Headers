/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUCenterFillOBWelcomeController.h>

@class UIImageView, UIImage;

@interface HUImageOBWelcomeController : HUCenterFillOBWelcomeController {

	UIImageView* _contentImageView;

}

@property (nonatomic,readonly) UIImageView * contentImageView;              //@synthesize contentImageView=_contentImageView - In the implementation block
@property (nonatomic,retain) UIImage * contentImage; 
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(UIImage *)contentImage;
-(void)setContentImage:(UIImage *)arg1 ;
-(double)_contentAspectRatio;
-(void)_updateContentMode;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4 ;
-(UIImageView *)contentImageView;
-(void)_viewDidUpdateContent;
@end

