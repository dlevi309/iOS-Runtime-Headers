/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)setTranslucentToolbar:(BOOL)arg1 ;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(BOOL)toolBarHidden;
-(void)setToolBarHidden:(BOOL)arg1 ;
-(BOOL)translucentNavigationBar;
-(void)setTranslucentNavigationBar:(BOOL)arg1 ;
-(BOOL)translucentToolbar;
-(BOOL)navigationBarHidden;
-(UINavigationController *)navigationController;
@end

