/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBApplicationSceneStatusBarDescriberProviding <NSObject>
@property (nonatomic,readonly) id<SBApplicationSceneStatusBarDescribing> statusBarDescriber; 
@property (assign,nonatomic,__weak) id<SBDeviceApplicationSceneStatusBarStateObserver> statusBarDelegate; 
@required
-(void)setStatusBarDelegate:(id)arg1;
-(id<SBDeviceApplicationSceneStatusBarStateObserver>)statusBarDelegate;
-(id<SBApplicationSceneStatusBarDescribing>)statusBarDescriber;

@end

