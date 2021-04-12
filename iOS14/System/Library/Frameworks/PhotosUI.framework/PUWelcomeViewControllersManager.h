/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSArray, NSMutableSet, UIViewController;

@interface PUWelcomeViewControllersManager : NSObject {

	NSArray* __welcomeViewControllerClasses;
	NSMutableSet* __remainingWelcomeViewControllerClassesToPresent;
	UIViewController* __presentingViewController;
	Class __presentedWelcomeViewControllerClass;

}

@property (nonatomic,copy,readonly) NSArray * _welcomeViewControllerClasses;                                                          //@synthesize _welcomeViewControllerClasses=__welcomeViewControllerClasses - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * _remainingWelcomeViewControllerClassesToPresent;                                   //@synthesize _remainingWelcomeViewControllerClassesToPresent=__remainingWelcomeViewControllerClassesToPresent - In the implementation block
@property (setter=_setPresentingViewController:,nonatomic,retain) UIViewController * _presentingViewController;                       //@synthesize _presentingViewController=__presentingViewController - In the implementation block
@property (assign,setter=_setPresentedWelcomeViewControllerClass:,nonatomic) Class _presentedWelcomeViewControllerClass;              //@synthesize _presentedWelcomeViewControllerClass=__presentedWelcomeViewControllerClass - In the implementation block
+(id)defaultManager;
-(id)init;
-(UIViewController *)_presentingViewController;
-(void)_update;
-(void)_reset;
-(void)resetAllLastPresentationInfos;
-(id)_initWithWelcomeViewControllerClasses:(id)arg1 ;
-(void)presentWelcomeViewControllersIfNecessaryFromViewController:(id)arg1 ;
-(void)_handleWelcomeViewControllerCompletion;
-(NSArray *)_welcomeViewControllerClasses;
-(NSMutableSet *)_remainingWelcomeViewControllerClassesToPresent;
-(Class)_presentedWelcomeViewControllerClass;
-(void)_setPresentedWelcomeViewControllerClass:(Class)arg1 ;
-(void)_setPresentingViewController:(id)arg1 ;
@end

