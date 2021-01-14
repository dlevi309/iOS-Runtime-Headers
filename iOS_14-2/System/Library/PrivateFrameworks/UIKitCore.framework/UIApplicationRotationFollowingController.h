/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>

@interface UIApplicationRotationFollowingController : UIViewController {

	BOOL _sizesWindowToScene;

}

@property (assign,nonatomic) BOOL sizesWindowToScene;              //@synthesize sizesWindowToScene=_sizesWindowToScene - In the implementation block
-(id)_topMostWindow;
-(long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1 ;
-(void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setSizesWindowToScene:(BOOL)arg1 ;
-(BOOL)sizesWindowToScene;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

