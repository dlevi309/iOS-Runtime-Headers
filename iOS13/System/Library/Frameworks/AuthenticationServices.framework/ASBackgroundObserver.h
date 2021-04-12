/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@class UIViewController;

@interface ASBackgroundObserver : NSObject {

	UIViewController* _viewController;
	/*^block*/id _block;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) id block;                                              //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(id)block;
-(UIViewController *)viewController;
-(void)_hostDidEnterBackground:(id)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(id)initWithViewController:(id)arg1 block:(/*^block*/id)arg2 ;
@end

