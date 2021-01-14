/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUPCCenterFillContentController.h>

@class UIImageView, UIImage;

@interface HUPCImageContentController : HUPCCenterFillContentController {

	UIImageView* _contentImageView;

}

@property (nonatomic,readonly) UIImageView * contentImageView;              //@synthesize contentImageView=_contentImageView - In the implementation block
@property (nonatomic,retain) UIImage * contentImage; 
-(UIImage *)contentImage;
-(void)viewDidLoad;
-(void)_updateContentMode;
-(double)_contentAspectRatio;
-(void)viewDidLayoutSubviews;
-(UIImageView *)contentImageView;
-(void)_viewDidUpdateContent;
-(void)setContentImage:(UIImage *)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 contentImage:(id)arg3 ;
@end

