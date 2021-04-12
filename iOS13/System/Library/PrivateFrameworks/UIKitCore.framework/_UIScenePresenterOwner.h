/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id<_UIScenePresenterOwnerDelegate>)delegate;
-(void)setDelegate:(id<_UIScenePresenterOwnerDelegate>)arg1 ;
-(id)context;
-(void)addPresenter:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBScene *)scene;
-(UIScenePresentationContext *)defaultPresentationContext;
-(void)_activatePresenter:(id)arg1 ;
-(BOOL)_isPresenterActive:(id)arg1 ;
-(void)_deactivatePresenter:(id)arg1 ;
-(void)_invalidatePresenter:(id)arg1 ;
-(BOOL)_isPresenterHosting:(id)arg1 ;
-(void)_updateActivePrioritizedPresenterIfNecessary;
-(void)_setActivePrioritizedPresenter:(id)arg1 ;
-(id)initWithScenePresentationManager:(id)arg1 context:(id)arg2 ;
-(void)enumeratePresentersUsingBlock:(/*^block*/id)arg1 ;
-(id)activePrioritizedPresenter;
-(id)presenterWithIdentifier:(id)arg1 ;
@end

