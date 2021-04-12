/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CSVibrantWallpaperButton *)logoutButtonView;
-(id)presentationRegions;
-(BOOL)fakeWallpaperVisible;
-(UIEdgeInsets)_logoutButtonInsets;
-(void)setWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(SBWallpaperEffectView *)wallpaperEffectView;
-(void)_layoutLogoutButtonView;
-(void)updateForLegibilitySettings:(id)arg1 ;
-(void)layoutSubviews;
-(void)_layoutWallpaperEffectView;
-(void)_updateLogoutButtonForLegibilitySettings;
-(void)setLogoutButtonView:(CSVibrantWallpaperButton *)arg1 ;
-(void)setFakeWallpaperVisible:(BOOL)arg1 ;
-(void)updateForPresentation:(id)arg1 ;
@end

