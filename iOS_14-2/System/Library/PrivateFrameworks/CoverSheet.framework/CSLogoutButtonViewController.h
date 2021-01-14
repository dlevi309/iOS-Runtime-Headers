/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(id<CSUserSessionControlling>)userSessionController;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(CSVibrantWallpaperButton *)button;
-(void)setWallpaperViewProvider:(id<CSWallpaperViewProviding>)arg1 ;
-(void)loadView;
-(void)setUserSessionController:(id<CSUserSessionControlling>)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
@end

