/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithAVItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setViewControllerForOrientation:(UIViewController *)arg1 ;
-(UIViewController *)viewControllerForOrientation;
@end

