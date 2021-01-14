/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtilsUI.framework/CoreUtilsUI
*/

#import <libobjc.A.dylib/CUActivatable.h>
#import <libobjc.A.dylib/CUUIEnvironmentable.h>

@protocol OS_dispatch_queue;
@class CUUIEnvironment, NSObject, CUNavigationController, UIWindow;

@interface CUProxCardController : NSObject <CUActivatable, CUUIEnvironmentable> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_queue> _uiQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	CUUIEnvironment* _environment;
	CUNavigationController* _navigationController;
	UIWindow* _window;

}

@property (nonatomic,retain) CUNavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                          //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                       //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) CUUIEnvironment * environment;                              //@synthesize environment=_environment - In the implementation block
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setNavigationController:(CUNavigationController *)arg1 ;
-(UIWindow *)window;
-(void)setEnvironment:(CUUIEnvironment *)arg1 ;
-(void)_invalidated;
-(CUUIEnvironment *)environment;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(CUNavigationController *)navigationController;
@end

