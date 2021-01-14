/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol _UIScenePresenterOwnerDelegate;
@class UIScenePresentationManager, _UISceneLayerHostContainerView, NSMutableOrderedSet, NSMutableSet, _UIScenePresenter, FBScene, UIScenePresentationContext, NSString;

@interface _UIScenePresenterOwner : NSObject <BSDescriptionProviding, BSInvalidatable> {

	id _context;
	UIScenePresentationManager* _scenePresentationManager;
	_UISceneLayerHostContainerView* _realSceneHostViewsContainer;
	NSMutableOrderedSet* _activePresentersByPriority;
	NSMutableSet* _inactivePresentersByPriority;
	_UIScenePresenter* _prioritizedPresenter;
	BOOL _invalidated;
	id<_UIScenePresenterOwnerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_UIScenePresenterOwnerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id context;                                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) FBScene * scene; 
@property (nonatomic,copy,readonly) UIScenePresentationContext * defaultPresentationContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBScene *)scene;
-(id)succinctDescription;
-(void)_activatePresenter:(id)arg1 ;
-(id)activePrioritizedPresenter;
-(id<_UIScenePresenterOwnerDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)enumeratePresentersUsingBlock:(/*^block*/id)arg1 ;
-(id)presenterWithIdentifier:(id)arg1 ;
-(void)_invalidatePresenter:(id)arg1 ;
-(id)context;
-(void)_updateActivePrioritizedPresenterIfNecessary;
-(BOOL)_isPresenterHosting:(id)arg1 ;
-(void)setDelegate:(id<_UIScenePresenterOwnerDelegate>)arg1 ;
-(NSString *)description;
-(void)_setActivePrioritizedPresenter:(id)arg1 ;
-(void)invalidate;
-(BOOL)_isPresenterActive:(id)arg1 ;
-(id)initWithScenePresentationManager:(id)arg1 context:(id)arg2 ;
-(UIScenePresentationContext *)defaultPresentationContext;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_deactivatePresenter:(id)arg1 ;
-(void)addPresenter:(id)arg1 ;
-(void)dealloc;
@end

