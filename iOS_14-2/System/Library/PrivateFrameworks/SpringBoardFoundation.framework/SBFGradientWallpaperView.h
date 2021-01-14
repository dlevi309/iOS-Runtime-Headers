/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class SBFGradient;

@interface SBFGradientWallpaperView : SBFWallpaperView {

	SBFGradient* _wallpaperGradient;

}

@property (nonatomic,copy,readonly) SBFGradient * wallpaperGradient;              //@synthesize wallpaperGradient=_wallpaperGradient - In the implementation block
+(Class)layerClass;
-(SBFGradient *)wallpaperGradient;
-(id)averageColorInRect:(CGRect)arg1 withSmudgeRadius:(double)arg2 ;
-(id)_computeAverageColor;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(long long)wallpaperType;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
@end

