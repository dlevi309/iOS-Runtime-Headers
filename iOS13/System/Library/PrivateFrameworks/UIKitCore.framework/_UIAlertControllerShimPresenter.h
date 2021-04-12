/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol UIPopoverControllerDelegate;
@class UIPopoverController, UIViewController, _UIAlertControllerShimPresenterWindow, UIAlertController, UIAlertView, NSString;

@interface _UIAlertControllerShimPresenter : NSObject <UIPopoverControllerDelegate> {

	UIPopoverController* _popoverController;
	id<UIPopoverControllerDelegate> _popoverDelegate;
	UIViewController* _inPopoverViewController;
	_UIAlertControllerShimPresenterWindow* _window;
	UIAlertController* _alertController;
	UIAlertView* _legacyAlert;

}

@property (assign,nonatomic,__weak) UIAlertController * alertController;                          //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic) UIAlertView * legacyAlert;                                           //@synthesize legacyAlert=_legacyAlert - In the implementation block
@property (nonatomic,readonly) _UIAlertControllerShimPresenterWindow * window;                    //@synthesize window=_window - In the implementation block
@property (assign,nonatomic,__weak) id<UIPopoverControllerDelegate> popoverDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_cancelPendingTouchesIfAppropriateForWindow:(id)arg1 ;
+(void)_addPresenter:(id)arg1 ;
+(BOOL)_shouldPresentActionSheetsFullscreen;
+(void)_removePresenter:(id)arg1 ;
+(id)_currentFullScreenAlertPresenters;
-(void)dealloc;
-(_UIAlertControllerShimPresenterWindow *)window;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)setPopoverDelegate:(id<UIPopoverControllerDelegate>)arg1 ;
-(void)_presentAlertControllerFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentAlertControllerFromRect:(CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_dismissAlertControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createWindowIfNecessaryWithScene:(id)arg1 ;
-(UIAlertController *)alertController;
-(void)_presentAlertControllerAnimated:(BOOL)arg1 hostingScene:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentAlertControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_popoverController;
-(void)_tearDownInPopoverViewController;
-(id<UIPopoverControllerDelegate>)popoverDelegate;
-(UIAlertView *)legacyAlert;
-(void)setLegacyAlert:(UIAlertView *)arg1 ;
@end

