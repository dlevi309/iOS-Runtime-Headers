/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)statusBarStyle;
-(long long)modalTransitionStyle;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(NSString *)backgroundImageName;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(void)setSavedStatusBarStyle:(long long)arg1 ;
-(long long)savedStatusBarStyle;
-(void)disableControls:(BOOL)arg1 ;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldManuallyChangeStatusBarStyle;
@end

