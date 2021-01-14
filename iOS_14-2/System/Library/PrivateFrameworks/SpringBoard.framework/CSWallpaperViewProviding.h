/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol CSWallpaperViewProviding <NSObject>
@required
-(id)suspendWallpaperAnimationForReason:(id)arg1;
-(id)createCoverSheetWallpaperViewWithTransformOptions:(unsigned long long)arg1;
-(void)wallpaperClientDidRotateFromInterfaceOrientation:(long long)arg1;
-(id)createCoverSheetWallpaperView;
-(void)wallpaperClientWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

