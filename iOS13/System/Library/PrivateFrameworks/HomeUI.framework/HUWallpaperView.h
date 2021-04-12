/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HFWallpaperSlice, UIView;

@interface HUWallpaperView : UIView {

	HFWallpaperSlice* _wallpaperSlice;
	UIView* _wallpaperContentView;

}

@property (nonatomic,retain) UIView * wallpaperContentView;                  //@synthesize wallpaperContentView=_wallpaperContentView - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * wallpaperSlice;              //@synthesize wallpaperSlice=_wallpaperSlice - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setWallpaperContentView:(UIView *)arg1 ;
-(UIView *)wallpaperContentView;
-(HFWallpaperSlice *)wallpaperSlice;
-(void)setWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(CGRect)normalizedWallpaperRectForFrameInWindowSpace:(CGRect)arg1 ;
@end

