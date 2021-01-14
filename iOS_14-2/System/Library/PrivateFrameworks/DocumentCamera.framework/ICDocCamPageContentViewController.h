/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UIViewController.h>

@protocol ICDocCamPageContentViewTapDelegate;
@class UIImage, UIImageView;

@interface ICDocCamPageContentViewController : UIViewController {

	unsigned long long _pageIndex;
	UIImage* _image;
	id<ICDocCamPageContentViewTapDelegate> _tapDelegate;
	UIImageView* _imageView;

}

@property (assign,nonatomic,__weak) UIImageView * imageView;                                         //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;                                           //@synthesize pageIndex=_pageIndex - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic,__weak) id<ICDocCamPageContentViewTapDelegate> tapDelegate;              //@synthesize tapDelegate=_tapDelegate - In the implementation block
+(double)leadingTrailingOffset:(long long)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(UIImage *)image;
-(unsigned long long)pageIndex;
-(void)handleSingleTap:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(void)setTapDelegate:(id<ICDocCamPageContentViewTapDelegate>)arg1 ;
-(id<ICDocCamPageContentViewTapDelegate>)tapDelegate;
@end

