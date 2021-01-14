/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class UINavigationController, IKAppContext;

@interface VUIGDPRPresentationManager : NSObject {

	UINavigationController* _navigationController;
	IKAppContext* _appContext;

}

@property (nonatomic,retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic,__weak) IKAppContext * appContext;                           //@synthesize appContext=_appContext - In the implementation block
+(id)_sharedInstance;
+(BOOL)shouldShowWelcomeScreen;
+(void)acceptGDPRAndSyncWithServers:(/*^block*/id)arg1 ;
+(BOOL)showGDPRWelcomeScreen:(id)arg1 ;
+(void)showOfflineGDPRWelcomeScreen;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(BOOL)isShowing;
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(UINavigationController *)navigationController;
-(void)_showIOSWelcomeControllerWithAppContext:(id)arg1 offline:(BOOL)arg2 ;
-(void)_handleOfflineContinueButton;
-(void)_handleContinueButton;
-(void)_dismissAllModalsIfPresent:(id)arg1 ;
@end

