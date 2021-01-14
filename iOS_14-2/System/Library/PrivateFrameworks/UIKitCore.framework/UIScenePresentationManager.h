/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKitCore/_UIScenePresenterOwnerDelegate.h>
#import <libobjc.A.dylib/FBSceneObserver.h>

@protocol UIScenePresentationManagerDelegate;
@class _UISceneKeyboardProxyLayerForwardingManager, FBScene, _UIScenePresenterOwner, NSMapTable, UIScenePresentationContext, NSString;

@interface UIScenePresentationManager : NSObject <BSDescriptionProviding, _UIScenePresenterOwnerDelegate, FBSceneObserver> {

	_UISceneKeyboardProxyLayerForwardingManager* _keyboardProxyLayerManager;
	FBScene* _scene;
	_UIScenePresenterOwner* _scenePresenterOwner;
	NSMapTable* _mapLayersToPresenterOwners;
	BOOL _invalidated;
	UIScenePresentationContext* _defaultScenePresentationContext;
	id<UIScenePresentationManagerDelegate> _delegate;
	struct {
		BOOL defaultPriorityBand;
	}  _delegateFlags;

}

@property (nonatomic,__weak,readonly) FBScene * scene;                                                    //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic,__weak) id<UIScenePresentationManagerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (nonatomic,copy,readonly) UIScenePresentationContext * defaultPresentationContext;              //@synthesize defaultScenePresentationContext=_defaultScenePresentationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBScene *)scene;
-(id)_initWithScene:(id)arg1 ;
-(id)succinctDescription;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(void)owner:(id)arg1 willPrioritizePresenter:(id)arg2 deactivatePresenter:(id)arg3 ;
-(BOOL)isInvalidated;
-(id)init;
-(id<UIScenePresentationManagerDelegate>)delegate;
-(void)modifyDefaultPresentationContext:(/*^block*/id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2 ;
-(id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2 priority:(long long)arg3 ;
-(void)setDelegate:(id<UIScenePresentationManagerDelegate>)arg1 ;
-(long long)_defaultPresentationPriority;
-(NSString *)description;
-(void)ownerDidInvalidateLastPresenter:(id)arg1 ;
-(UIScenePresentationContext *)defaultPresentationContext;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)_presenterWithIdentifier:(id)arg1 ;
-(id)createPresenterWithIdentifier:(id)arg1 ;
-(id)createPresenterWithIdentifier:(id)arg1 priority:(long long)arg2 ;
-(id)snapshotPresentationForSnapshot:(id)arg1 ;
-(id)_initWithScene:(id)arg1 keyboardProxyLayerManager:(id)arg2 ;
-(id)snapshotContext;
-(BOOL)_hasPresenterWithIdentifier:(id)arg1 ;
@end

