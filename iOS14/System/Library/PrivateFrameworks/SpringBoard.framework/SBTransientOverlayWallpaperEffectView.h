/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)containerOrientation;
-(void)setContainerOrientation:(long long)arg1 ;
-(BOOL)prepareToAnimateToTransitionState:(inout SCD_Struct_SB20*)arg1 ;
-(void)setTransitionState:(SCD_Struct_SB20)arg1 ;
-(long long)wallpaperStyle;
-(void)setWallpaperStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 wallpaperVariant:(long long)arg2 ;
-(void)_updateWallpaperGeometry;
-(CATransform3D)_currentWallpaperTransform;
@end

