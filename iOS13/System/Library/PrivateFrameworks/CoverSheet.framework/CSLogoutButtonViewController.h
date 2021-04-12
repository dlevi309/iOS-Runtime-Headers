/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@protocol CSUserSessionControlling, CSWallpaperViewProviding, CSWallpaperColorProvider;
@class CSVibrantWallpaperButton;

@interface CSLogoutButtonViewController : CSCoverSheetViewControllerBase {

	id<CSUserSessionControlling> _userSessionController;
	id<CSWallpaperViewProviding> _wallpaperViewProvider;
	id<CSWallpaperColorProvider> _wallpaperColorProvider;

}

@property (nonatomic,readonly) CSVibrantWallpaperButton * button; 
@property (assign,nonatomic,__weak) id<CSUserSessionControlling> userSessionController;               //@synthesize userSessionController=_userSessionController - In the implementation block
@property (assign,nonatomic,__weak) id<CSWallpaperColorProvider> wallpaperColorProvider;              //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSWallpaperViewProviding> wallpaperViewProvider;               //@synthesize wallpaperViewProvider=_wallpaperViewProvider - In the implementation block
-(void)loadView;
-(CSVibrantWallpaperButton *)button;
-(void)_buttonPressed:(id)arg1 ;
-(void)setWallpaperViewProvider:(id<CSWallpaperViewProviding>)arg1 ;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(id<CSUserSessionControlling>)userSessionController;
-(void)setUserSessionController:(id<CSUserSessionControlling>)arg1 ;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
@end

