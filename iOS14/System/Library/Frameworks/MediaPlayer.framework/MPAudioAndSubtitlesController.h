/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <UIKitCore/UIViewController.h>

@class _MPAudioAndSubtitlesController, UINavigationController, UIViewController;

@interface MPAudioAndSubtitlesController : UIViewController {

	_MPAudioAndSubtitlesController* _viewController;
	UINavigationController* _navController;
	UIViewController* _viewControllerForOrientation;

}

@property (assign,nonatomic,__weak) UIViewController * viewControllerForOrientation;              //@synthesize viewControllerForOrientation=_viewControllerForOrientation - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(id)initWithAVItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setViewControllerForOrientation:(UIViewController *)arg1 ;
-(UIViewController *)viewControllerForOrientation;
@end

