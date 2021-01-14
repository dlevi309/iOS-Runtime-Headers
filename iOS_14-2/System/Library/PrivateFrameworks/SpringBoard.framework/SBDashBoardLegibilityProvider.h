/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SBWallpaperController *)wallpaperController;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(id)init;
-(id)initWithWallpaperController:(id)arg1 ;
-(void)setWallpaperController:(SBWallpaperController *)arg1 ;
-(id)currentLegibilitySettings;
-(void)_notifyDelegate;
-(id<CSLegibilityProviderDelegate>)legibilityProviderDelegate;
-(void)setLegibilityProviderDelegate:(id<CSLegibilityProviderDelegate>)arg1 ;
-(id)_wallpaperLegibilitySettings;
@end

