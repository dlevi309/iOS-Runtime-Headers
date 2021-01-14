/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/FBSceneObserver.h>

@class NSMapTable, FBSSceneClientSettingsDiffInspector, NSString;

@interface _UISceneKeyboardProxyLayerForwardingManager : NSObject <FBSceneObserver> {

	NSMapTable* _mapSceneToKeyboardForwardingStateMachine;
	FBSSceneClientSettingsDiffInspector* _layersChangedClientSettingsDiffInspector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)sharedInstance;
+(BOOL)supportsForwardingKeyboardLayers;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)succinctDescription;
-(void)sceneDidInvalidate:(id)arg1 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)trackScene:(id)arg1 ;
-(id)_init;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_newStateMachineWithScene:(id)arg1 ;
-(void)_updateKeyboardLayersForScene:(id)arg1 ;
-(void)scene:(id)arg1 willPrioritizePresenter:(id)arg2 ;
-(id)_stateMachineForScene:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

