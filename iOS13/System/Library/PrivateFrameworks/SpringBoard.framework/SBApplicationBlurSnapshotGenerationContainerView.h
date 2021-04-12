/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface SBApplicationBlurSnapshotGenerationContainerView : UIView {

	UIView* _wallpaperView;
	UIView* _realSnapshotView;
	UIView* _liveBlurView;

}

@property (nonatomic,retain) UIView * wallpaperView;                 //@synthesize wallpaperView=_wallpaperView - In the implementation block
@property (nonatomic,retain) UIView * realSnapshotView;              //@synthesize realSnapshotView=_realSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * liveBlurView;                  //@synthesize liveBlurView=_liveBlurView - In the implementation block
-(void)layoutSubviews;
-(void)setWallpaperView:(UIView *)arg1 ;
-(UIView *)wallpaperView;
-(void)setLiveBlurView:(UIView *)arg1 ;
-(void)setRealSnapshotView:(UIView *)arg1 ;
-(UIView *)realSnapshotView;
-(UIView *)liveBlurView;
@end

