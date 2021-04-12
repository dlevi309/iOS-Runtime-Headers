/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBWallpaperObserver.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate;
@class SBWallpaperController, _UILegibilitySettings, NSString;

@interface SBSpotlightLegibilityProvider : NSObject <SBWallpaperObserver, SBFLegibilitySettingsProvider> {

	long long _variant;
	SBWallpaperController* _wallpaperController;
	_UILegibilitySettings* _currentLegibilitySettings;
	id<SBFLegibilitySettingsProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBFLegibilitySettingsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(void)setDelegate:(id<SBFLegibilitySettingsProviderDelegate>)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)initWithVariant:(long long)arg1 ;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(id)initWithVariant:(long long)arg1 wallpaperController:(id)arg2 ;
-(void)_calculateLegibilitySettings;
-(CGRect)_rectForSpotlightHeader;
-(void)wallpaperGeometryDidChangeForVariant:(long long)arg1 ;
@end

