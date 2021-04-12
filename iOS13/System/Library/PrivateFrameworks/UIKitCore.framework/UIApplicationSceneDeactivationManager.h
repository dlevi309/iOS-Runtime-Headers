/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, NSMutableSet, FBScene, NSString;

@interface UIApplicationSceneDeactivationManager : NSObject <BSDescriptionProviding> {

	NSHashTable* _assertions;
	NSMutableSet* _eligibleScenes;
	FBScene* _updatingScene;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)assertions;
-(id)newAssertionWithReason:(long long)arg1 ;
-(void)addAssertion:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)removeAssertion:(id)arg1 ;
-(BOOL)_isEligibleScene:(id)arg1 withSettings:(id)arg2 ;
-(void)_trackScene:(id)arg1 ;
-(void)_untrackScene:(id)arg1 ;
-(BOOL)_isEligibleScene:(id)arg1 ;
-(BOOL)_areEligibleSettings:(id)arg1 ;
-(unsigned long long)_deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2 ;
-(void)_setDeactivationReasons:(unsigned long long)arg1 onScene:(id)arg2 withSettings:(id)arg3 reason:(id)arg4 ;
-(void)_updateScenesWithTransitionContext:(id)arg1 reason:(id)arg2 ;
-(BOOL)_isEligibleProcess:(id)arg1 ;
-(void)beginTrackingScene:(id)arg1 ;
-(void)endTrackingScene:(id)arg1 ;
-(void)amendSceneSettings:(id)arg1 forScene:(id)arg2 ;
-(id)eligibleScenes;
@end

