/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSceneManager.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionSceneEntityFrameProvider.h>

@class NSString;

@interface SBSecureMainDisplaySceneManager : SBSceneManager <SBLayoutStateTransitionSceneEntityFrameProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_applicationSceneHandleClass;
-(id)_sceneIdentifierForBundleIdentifier:(id)arg1 ;
-(CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(BOOL)_shouldAutoHostScene:(id)arg1 ;
-(id)sceneLayoutViewController;
-(id)newSceneIdentityForApplication:(id)arg1 ;
-(void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(BOOL)arg2 forScene:(id)arg3 ;
-(void)_setupLayoutStateTransitionCoordinator:(id)arg1 ;
-(id)_createRootWindowScenePresentationBinder;
-(BOOL)_shouldTrackScenesForDeactivation;
-(id)window;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 ;
-(id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 ;
@end

