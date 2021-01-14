/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@class UIViewController;

@interface ASBackgroundObserver : NSObject {

	UIViewController* _viewController;
	/*^block*/id _block;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) id block;                                              //@synthesize block=_block - In the implementation block
-(id)block;
-(void)_hostDidEnterBackground:(id)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(UIViewController *)viewController;
-(void)dealloc;
-(id)initWithViewController:(id)arg1 block:(/*^block*/id)arg2 ;
@end

