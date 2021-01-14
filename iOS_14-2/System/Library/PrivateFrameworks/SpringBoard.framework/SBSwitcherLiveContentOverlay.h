/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class UIView;


@protocol SBSwitcherLiveContentOverlay <NSObject>
@property (nonatomic,readonly) UIView * contentOverlayView; 
@optional
-(void)noteNeedsLayoutUpdateFor180DegreeRotation;

@required
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(long long)rasterizationStyle;
-(UIView *)contentOverlayView;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3;

@end

