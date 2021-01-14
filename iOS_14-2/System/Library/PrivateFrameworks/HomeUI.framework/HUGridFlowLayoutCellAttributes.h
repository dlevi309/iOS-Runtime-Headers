/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@protocol HUBackgroundEffectViewGrouping;
@class HFWallpaperSlice;

@interface HUGridFlowLayoutCellAttributes : UICollectionViewLayoutAttributes {

	HFWallpaperSlice* _blurredWallpaperSlice;
	HFWallpaperSlice* _darkModeBlurredWallpaperSlice;
	id<HUBackgroundEffectViewGrouping> _backgroundEffectViewGrouper;
	CGRect _normalizedWallpaperRect;

}

@property (assign,nonatomic) CGRect normalizedWallpaperRect;                                                     //@synthesize normalizedWallpaperRect=_normalizedWallpaperRect - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                                           //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice;                                   //@synthesize darkModeBlurredWallpaperSlice=_darkModeBlurredWallpaperSlice - In the implementation block
@property (assign,nonatomic,__weak) id<HUBackgroundEffectViewGrouping> backgroundEffectViewGrouper;              //@synthesize backgroundEffectViewGrouper=_backgroundEffectViewGrouper - In the implementation block
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id<HUBackgroundEffectViewGrouping>)backgroundEffectViewGrouper;
-(CGRect)normalizedWallpaperRect;
-(void)setBackgroundEffectViewGrouper:(id<HUBackgroundEffectViewGrouping>)arg1 ;
-(void)setNormalizedWallpaperRect:(CGRect)arg1 ;
@end

