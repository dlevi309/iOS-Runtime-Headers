/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString, SBDeviceApplicationSceneHandle;


@protocol SBApplicationSceneStatusBarDescribing <NSObject>
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long statusBarOrientation; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@property (nonatomic,readonly) CGRect statusBarAvoidanceFrame; 
@property (nonatomic,readonly) NSString * statusBarSceneIdentifier; 
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * statusBarControllingSceneHandle; 
@required
-(long long)statusBarStyle;
-(BOOL)statusBarHidden;
-(double)statusBarAlpha;
-(CGRect)statusBarAvoidanceFrame;
-(int)statusBarStyleOverridesToSuppress;
-(long long)statusBarOrientation;
-(NSString *)statusBarSceneIdentifier;
-(long long)statusBarStyleForPartWithIdentifier:(id)arg1;
-(SBDeviceApplicationSceneHandle *)statusBarControllingSceneHandle;

@end

