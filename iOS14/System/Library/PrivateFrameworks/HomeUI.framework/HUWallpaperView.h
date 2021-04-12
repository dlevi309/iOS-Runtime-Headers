/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUBackgroundEffectViewGrouping.h>

@class UIVisualEffect, HFWallpaperSlice, UIView, UIVisualEffectView, CABackdropLayer, NSString;

@interface HUWallpaperView : UIView <HUBackgroundEffectViewGrouping> {

	HFWallpaperSlice* _wallpaperSlice;
	UIView* _wallpaperContentView;
	UIVisualEffectView* _visualEffectView;

}

@property (nonatomic,retain) UIView * wallpaperContentView;                      //@synthesize wallpaperContentView=_wallpaperContentView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,readonly) CABackdropLayer * backdropLayer; 
@property (nonatomic,retain) HFWallpaperSlice * wallpaperSlice;                  //@synthesize wallpaperSlice=_wallpaperSlice - In the implementation block
@property (nonatomic,readonly) UIVisualEffect * sharedEffect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedBlurEffect;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)updateConstraints;
-(void)setWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(CABackdropLayer *)backdropLayer;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setWallpaperContentView:(UIView *)arg1 ;
-(UIView *)wallpaperContentView;
-(void)_updateVisualEffectView;
-(HFWallpaperSlice *)wallpaperSlice;
-(void)backgroundEffectAddCaptureDependent:(id)arg1 ;
-(void)backgroundEffectRemoveCaptureDependent:(id)arg1 ;
-(UIVisualEffect *)sharedEffect;
-(CGRect)normalizedWallpaperRectForFrameInWindowSpace:(CGRect)arg1 ;
@end

