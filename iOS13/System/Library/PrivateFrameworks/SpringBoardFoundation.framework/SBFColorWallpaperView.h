/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class UIImage, UIColor;

@interface SBFColorWallpaperView : SBFWallpaperView {

	UIImage* _cachedSnapshotImage;

}

@property (nonatomic,retain) UIImage * cachedSnapshotImage;              //@synthesize cachedSnapshotImage=_cachedSnapshotImage - In the implementation block
@property (nonatomic,readonly) UIColor * wallpaperColor; 
-(long long)wallpaperType;
-(UIColor *)wallpaperColor;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(UIImage *)cachedSnapshotImage;
-(void)setCachedSnapshotImage:(UIImage *)arg1 ;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(id)_computeAverageColor;
-(id)averageColorInRect:(CGRect)arg1 withSmudgeRadius:(double)arg2 ;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(id)snapshotImage;
@end

