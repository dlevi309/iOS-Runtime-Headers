/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBLockToAppStatusBarAnimator, SBIconZoomAnimator, SBWindowSelfHostWrapper, SBSceneManager, UIWindow, SBWallpaperController, SBFolderController, SBHUnlockSettings;

@interface SBCoverSheetAnimator : NSObject {

	BOOL _transitioning;
	SBLockToAppStatusBarAnimator* _statusBarAnimator;
	SBIconZoomAnimator* _iconAnimator;
	SBWindowSelfHostWrapper* _coverSheetWindowHostWrapper;
	SBSceneManager* _sceneManager;
	UIWindow* _hostingWindow;
	UIWindow* _switcherWindow;
	SBWallpaperController* _wallpaperController;
	SBFolderController* _folderController;
	SBHUnlockSettings* _unlockSettings;
	UIWindow* _coverSheetWindow;

}

@property (nonatomic,retain) SBLockToAppStatusBarAnimator * statusBarAnimator;                   //@synthesize statusBarAnimator=_statusBarAnimator - In the implementation block
@property (nonatomic,retain) SBIconZoomAnimator * iconAnimator;                                  //@synthesize iconAnimator=_iconAnimator - In the implementation block
@property (nonatomic,retain) SBWindowSelfHostWrapper * coverSheetWindowHostWrapper;              //@synthesize coverSheetWindowHostWrapper=_coverSheetWindowHostWrapper - In the implementation block
@property (nonatomic,retain) SBSceneManager * sceneManager;                                      //@synthesize sceneManager=_sceneManager - In the implementation block
@property (nonatomic,retain) UIWindow * hostingWindow;                                           //@synthesize hostingWindow=_hostingWindow - In the implementation block
@property (nonatomic,retain) UIWindow * switcherWindow;                                          //@synthesize switcherWindow=_switcherWindow - In the implementation block
@property (nonatomic,retain) SBWallpaperController * wallpaperController;                        //@synthesize wallpaperController=_wallpaperController - In the implementation block
@property (nonatomic,retain) SBFolderController * folderController;                              //@synthesize folderController=_folderController - In the implementation block
@property (nonatomic,retain) SBHUnlockSettings * unlockSettings;                                 //@synthesize unlockSettings=_unlockSettings - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                          //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * coverSheetWindow;                                 //@synthesize coverSheetWindow=_coverSheetWindow - In the implementation block
-(SBWallpaperController *)wallpaperController;
-(SBSceneManager *)sceneManager;
-(void)setSceneManager:(SBSceneManager *)arg1 ;
-(void)setIconAnimator:(SBIconZoomAnimator *)arg1 ;
-(UIWindow *)hostingWindow;
-(void)setHostingWindow:(UIWindow *)arg1 ;
-(SBHUnlockSettings *)unlockSettings;
-(void)setTransitioning:(BOOL)arg1 ;
-(void)setWallpaperController:(SBWallpaperController *)arg1 ;
-(SBIconZoomAnimator *)iconAnimator;
-(void)setUnlockSettings:(SBHUnlockSettings *)arg1 ;
-(UIWindow *)switcherWindow;
-(void)setCoverSheetWindow:(UIWindow *)arg1 ;
-(BOOL)isTransitioning;
-(SBFolderController *)folderController;
-(UIWindow *)coverSheetWindow;
-(void)_prepareIconAnimatorIncludingLockScreen:(BOOL)arg1 ;
-(void)_setWallpaperToLocked:(BOOL)arg1 duration:(double)arg2 ;
-(void)_updateCoverSheetHosting;
-(id)initWithCoverSheetWindow:(id)arg1 sceneManager:(id)arg2 hostingWindow:(id)arg3 switcherWindow:(id)arg4 wallpaperController:(id)arg5 folderController:(id)arg6 unlockSettings:(id)arg7 ;
-(void)animateToCoverSheet:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(SBLockToAppStatusBarAnimator *)statusBarAnimator;
-(void)setStatusBarAnimator:(SBLockToAppStatusBarAnimator *)arg1 ;
-(SBWindowSelfHostWrapper *)coverSheetWindowHostWrapper;
-(void)setCoverSheetWindowHostWrapper:(SBWindowSelfHostWrapper *)arg1 ;
-(void)setSwitcherWindow:(UIWindow *)arg1 ;
-(void)setFolderController:(SBFolderController *)arg1 ;
@end

