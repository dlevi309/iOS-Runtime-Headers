/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <UIKitCore/UIViewController.h>

@class NSString;

@interface ACMDialog : UIViewController {

	long long _savedStatusBarStyle;

}

@property (readonly) long long statusBarStyle; 
@property (assign) long long savedStatusBarStyle;                 //@synthesize savedStatusBarStyle=_savedStatusBarStyle - In the implementation block
@property (readonly) NSString * backgroundImageName; 
+(id)dialog;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(id)init;
-(long long)modalTransitionStyle;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)backgroundImageName;
-(void)applicationWillResignActive;
-(void)applicationDidBecomeActive;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)statusBarStyle;
-(void)loadView;
-(void)dealloc;
-(void)setSavedStatusBarStyle:(long long)arg1 ;
-(long long)savedStatusBarStyle;
-(void)disableControls:(BOOL)arg1 ;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldManuallyChangeStatusBarStyle;
@end

