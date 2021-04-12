/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class UIView;


@protocol SBSwitcherLiveContentOverlay <NSObject>
@property (nonatomic,readonly) UIView * contentOverlayView; 
@optional
-(void)noteNeedsLayoutUpdateFor180DegreeRotation;

@required
-(UIView *)contentOverlayView;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
-(long long)rasterizationStyle;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2;

@end

