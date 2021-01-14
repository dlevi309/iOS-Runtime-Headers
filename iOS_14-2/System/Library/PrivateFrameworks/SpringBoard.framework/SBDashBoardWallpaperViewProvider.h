/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSWallpaperViewProviding.h>

@class NSString;

@interface SBDashBoardWallpaperViewProvider : NSObject <CSWallpaperViewProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)suspendWallpaperAnimationForReason:(id)arg1 ;
-(id)createCoverSheetWallpaperViewWithTransformOptions:(unsigned long long)arg1 ;
-(void)wallpaperClientDidRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)createCoverSheetWallpaperView;
-(void)wallpaperClientWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
@end

