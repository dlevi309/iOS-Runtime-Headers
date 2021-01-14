/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBAppSwitcherPageContentView.h>

@class SBOrientationTransformWrapperView, SBWallpaperEffectView, NSString;

@interface SBSwitcherWallpaperPageContentView : UIView <SBAppSwitcherPageContentView> {

	SBOrientationTransformWrapperView* _wallpaperWrapperView;
	BOOL _active;
	BOOL _visible;
	double _cornerRadius;
	long long _orientation;
	long long _desiredWallpaperOrientation;
	long long _wallpaperStyle;
	SBWallpaperEffectView* _wallpaperEffectView;

}

@property (assign,nonatomic) long long desiredWallpaperOrientation;                      //@synthesize desiredWallpaperOrientation=_desiredWallpaperOrientation - In the implementation block
@property (assign,nonatomic) long long wallpaperStyle;                                   //@synthesize wallpaperStyle=_wallpaperStyle - In the implementation block
@property (nonatomic,readonly) SBWallpaperEffectView * wallpaperEffectView;              //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) long long orientation;                                      //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) BOOL contentRequiresGroupOpacity; 
@property (assign,getter=isActive,nonatomic) BOOL active;                                //@synthesize active=_active - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                              //@synthesize visible=_visible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDesiredWallpaperOrientation:(long long)arg1 ;
-(long long)wallpaperStyle;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_viewForWallpaperWrapper;
-(void)_updateWallpaperOrientation;
-(CGRect)_wallpaperFrame;
-(void)_updateCornerRadius;
-(BOOL)contentRequiresGroupOpacity;
-(void)setWallpaperStyle:(long long)arg1 ;
-(BOOL)isActive;
-(void)setVisible:(BOOL)arg1 ;
-(SBWallpaperEffectView *)wallpaperEffectView;
-(BOOL)_deviceSupportsEdgeAntiAliasing;
-(double)cornerRadius;
-(long long)desiredWallpaperOrientation;
-(void)layoutSubviews;
-(BOOL)isVisible;
-(long long)orientation;
-(void)invalidate;
-(void)setCornerRadius:(double)arg1 ;
-(void)setOrientation:(long long)arg1 ;
@end

