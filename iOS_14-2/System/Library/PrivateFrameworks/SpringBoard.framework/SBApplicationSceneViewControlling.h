/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBApplicationSceneHandle;


@protocol SBApplicationSceneViewControlling <SBSceneViewControlling>
@property (nonatomic,readonly) SBApplicationSceneHandle * sceneHandle; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; 
@required
-(double)statusBarAlpha;
-(void)setApplicationSceneStatusBarDelegate:(id)arg1;
-(long long)overrideStatusBarStyle;
-(id<SBApplicationSceneViewControllingStatusBarDelegate>)applicationSceneStatusBarDelegate;
-(SBApplicationSceneHandle *)sceneHandle;

@end

