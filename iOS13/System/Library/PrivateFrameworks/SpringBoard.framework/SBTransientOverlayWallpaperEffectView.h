/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class SBWallpaperEffectView, _UIDirectionalRotationView;

@interface SBTransientOverlayWallpaperEffectView : UIView {

	SBWallpaperEffectView* _wallpaperEffectView;
	_UIDirectionalRotationView* _wallpaperRotationView;
	long long _containerOrientation;

}

@property (assign,nonatomic) long long containerOrientation;              //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (assign,nonatomic) long long wallpaperStyle; 
-(void)layoutSubviews;
-(void)setTransitionState:(SCD_Struct_SB30)arg1 ;
-(void)setContainerOrientation:(long long)arg1 ;
-(long long)containerOrientation;
-(long long)wallpaperStyle;
-(void)setWallpaperStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperVariant:(long long)arg2 ;
-(BOOL)prepareToAnimateToTransitionState:(inout SCD_Struct_SB30*)arg1 ;
-(void)_updateWallpaperGeometry;
-(CATransform3D)_currentWallpaperTransform;
@end

