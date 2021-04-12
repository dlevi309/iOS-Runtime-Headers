/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
*/

#import <UIKitCore/UIViewController.h>

@class UIImage, UIImageView, UIView;

@interface LoadingViewController : UIViewController {

	BOOL _imageIsFullScreen;
	UIImage* _image;
	UIImageView* _imageView;
	long long _orientation;
	UIView* _statusBarView;
	long long _preferredStatusBarStyle;

}
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)preferredStatusBarStyle;
-(id)initWithWebClip:(id)arg1 orientation:(long long)arg2 ;
@end

