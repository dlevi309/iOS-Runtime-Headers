/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIconZoomAnimator.h>

@class SBFloatyFolderView, SBIconView, SBHFolderZoomSettings;

@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator {

	SBFloatyFolderView* _folderView;
	SBIconView* _folderIconView;
	CGAffineTransform _folderIconViewScaleTransform;

}

@property (nonatomic,retain) SBHFolderZoomSettings * settings; 
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(double)arg1 ;
-(void)_cleanupAnimation;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(id)initWithFolderController:(id)arg1 iconView:(id)arg2 iconZoomScaleDimension:(CGPoint)arg3 ;
-(void)_applyIconCrossfadeForZoomFraction:(double)arg1 ;
-(void)_applyIconTransformForZoomFraction:(double)arg1 ;
-(void)_calculateZoomedOffset:(CGPoint*)arg1 scale:(CGPoint*)arg2 forIcon:(id)arg3 withView:(id)arg4 ;
@end

