/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class UIWindowScene, UIWindow, UIAlertController;

@interface MFAlertOverlayController : NSObject {

	UIWindowScene* _scene;
	UIWindow* _overlayWindow;

}

@property (nonatomic,retain) UIWindow * overlayWindow;                                 //@synthesize overlayWindow=_overlayWindow - In the implementation block
@property (nonatomic,__weak,readonly) UIWindowScene * scene;                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) BOOL isPresentingAlert; 
@property (nonatomic,readonly) UIAlertController * topmostPresentedAlert; 
+(id)log;
-(UIWindowScene *)scene;
-(void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_teardownOverlayWindow;
-(id)_topmostViewController;
-(UIWindow *)overlayWindow;
-(id)initWithWindowScene:(id)arg1 ;
-(void)_setupOverlayWindowWithScene:(id)arg1 ;
-(void)_handlePresentationDismissalNotification:(id)arg1 ;
-(id)_bottomPresentedAlert;
-(void)setOverlayWindow:(UIWindow *)arg1 ;
-(BOOL)isPresentingAlert;
-(UIAlertController *)topmostPresentedAlert;
-(void)dealloc;
@end

