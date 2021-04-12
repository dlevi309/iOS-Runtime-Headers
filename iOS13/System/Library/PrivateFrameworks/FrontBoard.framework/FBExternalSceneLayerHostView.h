/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBSceneLayerHostView.h>
#import <libobjc.A.dylib/FBSceneMonitorDelegate.h>

@protocol FBSceneHostView;
@class FBScene, FBSceneMonitor, FBSceneHostManager, NSString, UIView;

@interface FBExternalSceneLayerHostView : FBSceneLayerHostView <FBSceneMonitorDelegate> {

	FBScene* _parentScene;
	FBScene* _targetScene;
	FBSceneMonitor* _monitor;
	FBSceneHostManager* _hostManager;
	NSString* _requester;
	NSString* _targetSceneID;
	UIView*<FBSceneHostView> _hostView;

}

@property (nonatomic,readonly) FBScene * targetScene;               //@synthesize targetScene=_targetScene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_updateHostingState;
-(void)_updateTargetScene;
-(id)initWithSceneLayer:(id)arg1 parentScene:(id)arg2 ;
-(FBScene *)targetScene;
-(void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2 ;
@end

