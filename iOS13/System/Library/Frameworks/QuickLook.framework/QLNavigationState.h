/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@class UINavigationController;

@interface QLNavigationState : NSObject {

	BOOL _navigationBarHidden;
	BOOL _toolBarHidden;
	BOOL _translucentNavigationBar;
	BOOL _translucentToolbar;
	UINavigationController* _navigationController;

}

@property (assign) BOOL navigationBarHidden;                                   //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (assign) BOOL toolBarHidden;                                         //@synthesize toolBarHidden=_toolBarHidden - In the implementation block
@property (assign) BOOL translucentNavigationBar;                              //@synthesize translucentNavigationBar=_translucentNavigationBar - In the implementation block
@property (assign) BOOL translucentToolbar;                                    //@synthesize translucentToolbar=_translucentToolbar - In the implementation block
@property (retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
-(UINavigationController *)navigationController;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(BOOL)navigationBarHidden;
-(BOOL)toolBarHidden;
-(void)setToolBarHidden:(BOOL)arg1 ;
-(BOOL)translucentNavigationBar;
-(void)setTranslucentNavigationBar:(BOOL)arg1 ;
-(BOOL)translucentToolbar;
-(void)setTranslucentToolbar:(BOOL)arg1 ;
@end

