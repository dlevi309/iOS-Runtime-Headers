/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIViewController.h>

@class GKColorPalette;

@interface GKViewController : UIViewController {

	BOOL _shouldUpdateContentOnlyWhenAuthenticated;
	GKViewController* _rootViewController;
	GKColorPalette* _colorPalette;

}

@property (nonatomic,retain) GKColorPalette * colorPalette;                              //@synthesize colorPalette=_colorPalette - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateContentOnlyWhenAuthenticated;              //@synthesize shouldUpdateContentOnlyWhenAuthenticated=_shouldUpdateContentOnlyWhenAuthenticated - In the implementation block
@property (nonatomic,retain) GKViewController * rootViewController;                      //@synthesize rootViewController=_rootViewController - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setRootViewController:(GKViewController *)arg1 ;
-(void)setColorPalette:(GKColorPalette *)arg1 ;
-(BOOL)shouldUpdateContentOnlyWhenAuthenticated;
-(GKColorPalette *)colorPalette;
-(BOOL)displayUsingSplitNavigationBar;
-(void)setShouldUpdateContentOnlyWhenAuthenticated:(BOOL)arg1 ;
-(GKViewController *)rootViewController;
-(void)loadView;
-(void)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)dealloc;
@end

