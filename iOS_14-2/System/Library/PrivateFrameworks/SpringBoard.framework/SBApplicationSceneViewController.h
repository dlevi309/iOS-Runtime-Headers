/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSceneViewController.h>
#import <libobjc.A.dylib/SBApplicationSceneViewControlling.h>

@protocol SBApplicationSceneViewControllingStatusBarDelegate;
@class SBAppStatusBarSettings, SBApplicationSceneView, SBApplicationSceneHandle, UIView, NSString;

@interface SBApplicationSceneViewController : SBSceneViewController <SBApplicationSceneViewControlling> {

	BOOL __applicationStatusBarHidden;
	id<SBApplicationSceneViewControllingStatusBarDelegate> _applicationSceneStatusBarDelegate;
	SBAppStatusBarSettings* _overrideStatusBarSettings;

}

@property (getter=_sceneView,nonatomic,readonly) SBApplicationSceneView * sceneView; 
@property (getter=_isApplicationStatusBarHidden,nonatomic,readonly) BOOL _applicationStatusBarHidden;                                                                 //@synthesize _applicationStatusBarHidden=__applicationStatusBarHidden - In the implementation block
@property (setter=_setOverrideStatusBarSettings:,getter=_overrideStatusBarSettings,nonatomic,retain) SBAppStatusBarSettings * overrideStatusBarSettings;              //@synthesize overrideStatusBarSettings=_overrideStatusBarSettings - In the implementation block
@property (nonatomic,readonly) SBApplicationSceneHandle * sceneHandle; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;                                         //@synthesize applicationSceneStatusBarDelegate=_applicationSceneStatusBarDelegate - In the implementation block
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext; 
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setOverrideStatusBarSettings:(id)arg1 ;
-(double)statusBarAlpha;
-(void)setApplicationSceneStatusBarDelegate:(id<SBApplicationSceneViewControllingStatusBarDelegate>)arg1 ;
-(double)_applicationStatusBarAlpha;
-(id)initWithSceneHandle:(id)arg1 ;
-(long long)overrideStatusBarStyle;
-(id)_overrideStatusBarSettings;
-(id<SBApplicationSceneViewControllingStatusBarDelegate>)applicationSceneStatusBarDelegate;
-(BOOL)_isApplicationStatusBarHidden;
@end

