/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSceneViewController.h>
#import <libobjc.A.dylib/SBApplicationSceneViewControlling.h>

@protocol SBApplicationSceneViewControllingStatusBarDelegate;
@class SBAppStatusBarSettings, SBApplicationSceneView, NSString, SBSceneHandle, UIView;

@interface SBApplicationSceneViewController : SBSceneViewController <SBApplicationSceneViewControlling> {

	BOOL __applicationStatusBarHidden;
	id<SBApplicationSceneViewControllingStatusBarDelegate> _applicationSceneStatusBarDelegate;
	SBAppStatusBarSettings* _overrideStatusBarSettings;

}

@property (getter=_sceneView,nonatomic,readonly) SBApplicationSceneView * sceneView; 
@property (getter=_isApplicationStatusBarHidden,nonatomic,readonly) BOOL _applicationStatusBarHidden;                                                                 //@synthesize _applicationStatusBarHidden=__applicationStatusBarHidden - In the implementation block
@property (setter=_setOverrideStatusBarSettings:,getter=_overrideStatusBarSettings,nonatomic,retain) SBAppStatusBarSettings * overrideStatusBarSettings;              //@synthesize overrideStatusBarSettings=_overrideStatusBarSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBSceneHandle * sceneHandle; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext; 
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;                                         //@synthesize applicationSceneStatusBarDelegate=_applicationSceneStatusBarDelegate - In the implementation block
-(double)statusBarAlpha;
-(id)initWithSceneHandle:(id)arg1 ;
-(BOOL)_isApplicationStatusBarHidden;
-(void)_setOverrideStatusBarSettings:(id)arg1 ;
-(long long)overrideStatusBarStyle;
-(id<SBApplicationSceneViewControllingStatusBarDelegate>)applicationSceneStatusBarDelegate;
-(void)setApplicationSceneStatusBarDelegate:(id<SBApplicationSceneViewControllingStatusBarDelegate>)arg1 ;
-(double)_applicationStatusBarAlpha;
-(id)_overrideStatusBarSettings;
@end

