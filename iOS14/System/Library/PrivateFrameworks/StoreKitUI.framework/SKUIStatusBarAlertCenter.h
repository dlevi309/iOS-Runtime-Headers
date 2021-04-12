/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/_SKUIStatusBarAlertViewControllerDelegate.h>

@class _SKUIClickThroughWindow, _SKUIStatusBarAlertViewController, NSString;

@interface SKUIStatusBarAlertCenter : NSObject <_SKUIStatusBarAlertViewControllerDelegate> {

	double _duration;
	/*^block*/id _actionBlock;
	_SKUIClickThroughWindow* _window;
	_SKUIStatusBarAlertViewController* _rootViewController;

}

@property (nonatomic,readonly) _SKUIClickThroughWindow * window;                                    //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) _SKUIStatusBarAlertViewController * rootViewController;              //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,nonatomic) double duration;                                                       //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (nonatomic,copy) id actionBlock;                                                          //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * message; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCenter;
-(NSString *)message;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setVisible:(BOOL)arg1 ;
-(_SKUIStatusBarAlertViewController *)rootViewController;
-(BOOL)isVisible;
-(_SKUIClickThroughWindow *)window;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(double)duration;
-(void)dismiss;
-(void)showMessage:(id)arg1 withStyle:(long long)arg2 forDuration:(double)arg3 actionBlock:(/*^block*/id)arg4 ;
-(void)unscheduleDismiss;
-(void)scheduleDismiss;
-(void)statusBarAlertViewControllerWasTapped:(id)arg1 ;
@end

