/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSPageViewBase.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class _UILegibilitySettings, CSVibrantWallpaperButton, SBWallpaperEffectView, NSString;

@interface CSMainPageView : CSPageViewBase <CAAnimationDelegate> {

	_UILegibilitySettings* _legibilitySettings;
	BOOL _logoutHugCorner;
	BOOL _fakeWallpaperVisible;
	CSVibrantWallpaperButton* _logoutButtonView;
	SBWallpaperEffectView* _wallpaperEffectView;

}

@property (nonatomic,retain) CSVibrantWallpaperButton * logoutButtonView;              //@synthesize logoutButtonView=_logoutButtonView - In the implementation block
@property (nonatomic,retain) SBWallpaperEffectView * wallpaperEffectView;              //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (assign,nonatomic) BOOL fakeWallpaperVisible;                                //@synthesize fakeWallpaperVisible=_fakeWallpaperVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)updateForPresentation:(id)arg1 ;
-(void)_updateLogoutButtonForLegibilitySettings;
-(void)_layoutLogoutButtonView;
-(void)_layoutWallpaperEffectView;
-(UIEdgeInsets)_logoutButtonInsets;
-(void)setLogoutButtonView:(CSVibrantWallpaperButton *)arg1 ;
-(void)setWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(void)setFakeWallpaperVisible:(BOOL)arg1 ;
-(void)updateForLegibilitySettings:(id)arg1 ;
-(id)presentationRegions;
-(CSVibrantWallpaperButton *)logoutButtonView;
-(SBWallpaperEffectView *)wallpaperEffectView;
-(BOOL)fakeWallpaperVisible;
@end

