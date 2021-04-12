/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKitCore/_UIScenePresenterOwnerDelegate.h>
#import <libobjc.A.dylib/FBSceneObserver.h>

@protocol UIScenePresentationManagerDelegate;
@class FBScene, _UIScenePresenterOwner, NSMapTable, UIScenePresentationContext, NSString;

@interface UIScenePresentationManager : NSObject <BSDescriptionProviding, _UIScenePresenterOwnerDelegate, FBSceneObserver> {

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
-(id)init;
-(NSString *)description;
-(id<UIScenePresentationManagerDelegate>)delegate;
-(void)setDelegate:(id<UIScenePresentationManagerDelegate>)arg1 ;
-(BOOL)isInvalidated;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBScene *)scene;
-(long long)_defaultPresentationPriority;
-(id)createPresenterWithIdentifier:(id)arg1 priority:(long long)arg2 ;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(UIScenePresentationContext *)defaultPresentationContext;
-(id)snapshotContext;
-(void)ownerDidInvalidateLastPresenter:(id)arg1 ;
-(void)owner:(id)arg1 willPrioritizePresenter:(id)arg2 deactivatePresenter:(id)arg3 ;
-(BOOL)_hasPresenterWithIdentifier:(id)arg1 ;
-(id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2 priority:(long long)arg3 ;
-(void)modifyDefaultPresentationContext:(/*^block*/id)arg1 ;
-(id)_initWithScene:(id)arg1 ;
-(id)createPresenterWithIdentifier:(id)arg1 ;
-(id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2 ;
-(id)snapshotPresentationForSnapshot:(id)arg1 ;
-(id)_presenterWithIdentifier:(id)arg1 ;
@end

