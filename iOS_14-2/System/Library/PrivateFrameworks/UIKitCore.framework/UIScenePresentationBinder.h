/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol UIScenePresentationBinderDelegate;
@class NSString, UIView, NSMutableSet, NSMutableDictionary, FBSSceneSettingsDiffInspector, NSSet;

@interface UIScenePresentationBinder : NSObject <FBSceneLayerManagerObserver, FBSceneObserver, BSDescriptionProviding, BSInvalidatable> {

	NSString* _identifier;
	UIView* _rootView;
	NSMutableSet* _scenes;
	long long _priority;
	unsigned long long _appearanceStyle;
	id<UIScenePresentationBinderDelegate> _delegate;
	BOOL _invalidated;
	NSMutableDictionary* _mapSceneIDToPresenter;
	FBSSceneSettingsDiffInspector* _settingsDiffInspector;
	SCD_Struct_UI62 _delegateFlags;

}

@property (assign,nonatomic,__weak) id<UIScenePresentationBinderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * scenes;                                                   //@synthesize scenes=_scenes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2 ;
-(NSSet *)scenes;
-(id)succinctDescription;
-(void)sceneDidInvalidate:(id)arg1 ;
-(id<UIScenePresentationBinderDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_rootView;
-(void)setDelegate:(id<UIScenePresentationBinderDelegate>)arg1 ;
-(NSString *)description;
-(void)addScene:(id)arg1 ;
-(void)invalidate;
-(void)removeScene:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)sceneLayerManagerDidStartTrackingLayers:(id)arg1 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 priority:(long long)arg2 rootView:(id)arg3 appearanceStyle:(unsigned long long)arg4 ;
-(BOOL)_delegateShouldPresentSceneOnlyWhenLayersExist;
-(void)_noteWillStartPresentingScene:(id)arg1 ;
-(void)_removeScene:(id)arg1 forReason:(id)arg2 ;
-(void)_noteDidStopPresentingScene:(id)arg1 ;
-(void)_evaluateSceneForHosting:(id)arg1 forReason:(id)arg2 ;
-(void)_noteSceneChangedLevel:(id)arg1 ;
-(void)_noteSceneMovedToForeground:(id)arg1 ;
-(void)_noteSceneMovedToBackground:(id)arg1 ;
-(void)_deactivatePresenter:(id)arg1 scene:(id)arg2 reason:(id)arg3 ;
-(void)_activatePresenter:(id)arg1 scene:(id)arg2 reason:(id)arg3 ;
-(void)_positionPresentationViewInRootViewOrderedCorrectly:(id)arg1 ;
-(void)_delegateDidStartPresentingScene:(id)arg1 ;
-(void)_delegateDidStopPresentingScene:(id)arg1 ;
-(void)dealloc;
@end

