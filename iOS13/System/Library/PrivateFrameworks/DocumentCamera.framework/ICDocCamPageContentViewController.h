/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)didReceiveMemoryWarning;
-(void)setImageView:(UIImageView *)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(void)handleSingleTap:(id)arg1 ;
-(id<ICDocCamPageContentViewTapDelegate>)tapDelegate;
-(void)setTapDelegate:(id<ICDocCamPageContentViewTapDelegate>)arg1 ;
@end

