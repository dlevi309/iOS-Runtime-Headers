/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)initWithWebClip:(id)arg1 orientation:(long long)arg2 ;
@end

