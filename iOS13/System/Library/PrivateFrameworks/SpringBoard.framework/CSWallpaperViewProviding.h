/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol CSWallpaperViewProviding <NSObject>
@required
-(void)wallpaperClientWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(void)wallpaperClientDidRotateFromInterfaceOrientation:(long long)arg1;
-(id)createCoverSheetWallpaperView;
-(id)suspendWallpaperAnimationForReason:(id)arg1;
-(id)createCoverSheetWallpaperViewWithTransformOptions:(unsigned long long)arg1;

@end

