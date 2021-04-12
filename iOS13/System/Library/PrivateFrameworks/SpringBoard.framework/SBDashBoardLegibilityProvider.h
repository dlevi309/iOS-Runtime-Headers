/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBWallpaperObserver.h>
#import <libobjc.A.dylib/CSLegibilityProviding.h>

@protocol CSLegibilityProviderDelegate;
@class SBWallpaperController, NSString;

@interface SBDashBoardLegibilityProvider : NSObject <SBWallpaperObserver, CSLegibilityProviding> {

	id<CSLegibilityProviderDelegate> _legibilityProviderDelegate;
	SBWallpaperController* _wallpaperController;

}

@property (nonatomic,retain) SBWallpaperController * wallpaperController;                                     //@synthesize wallpaperController=_wallpaperController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CSLegibilityProviderDelegate> legibilityProviderDelegate;              //@synthesize legibilityProviderDelegate=_legibilityProviderDelegate - In the implementation block
-(id)init;
-(void)_notifyDelegate;
-(void)setLegibilityProviderDelegate:(id<CSLegibilityProviderDelegate>)arg1 ;
-(id)currentLegibilitySettings;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(id)initWithWallpaperController:(id)arg1 ;
-(id)_wallpaperLegibilitySettings;
-(id<CSLegibilityProviderDelegate>)legibilityProviderDelegate;
-(SBWallpaperController *)wallpaperController;
-(void)setWallpaperController:(SBWallpaperController *)arg1 ;
@end

