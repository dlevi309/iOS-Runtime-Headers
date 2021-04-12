/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>

@protocol _UISceneLayerHostContainerViewDataSource;
@class FBScene, NSMutableOrderedSet, NSMutableSet, FBSSceneSettings, UIScenePresentationContext, NSSet, NSString;

@interface _UISceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver> {

	FBScene* _scene;
	id<_UISceneLayerHostContainerViewDataSource> _dataSource;
	NSMutableOrderedSet* _hostViews;
	NSMutableOrderedSet* _hostedLayers;
	NSMutableSet* _hiddenLayers;
	FBSSceneSettings* _effectiveSceneSettings;
	UIScenePresentationContext* _presentationContext;

}

@property (nonatomic,__weak,readonly) FBScene * scene;                                                      //@synthesize scene=_scene - In the implementation block
@property (nonatomic,__weak,readonly) id<_UISceneLayerHostContainerViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSSet * hostedLayers; 
@property (nonatomic,readonly) NSSet * nonHostedLayers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sceneLayerManagerDidUpdateLayers:(id)arg1 ;
-(FBScene *)scene;
-(id)_createHostViewForLayer:(id)arg1 ;
-(id)succinctDescription;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(void)refreshDataSource:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)init;
-(id)_filteredLayersToPresent;
-(id)initWithScene:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_setPresentationContext:(id)arg1 ;
-(NSString *)debugDescription;
-(id<_UISceneLayerHostContainerViewDataSource>)dataSource;
-(void)_rebuildLayersForReason:(id)arg1 ;
-(void)_adjustHostViewFrameAlignment:(id)arg1 ;
-(void)_setDataSource:(id)arg1 ;
-(BOOL)_canShowKeyboardLayer;
-(void)popDataSource:(id)arg1 ;
-(NSString *)description;
-(void)_presentationContextChangedFrom:(id)arg1 toContext:(id)arg2 force:(BOOL)arg3 ;
-(id)window;
-(NSSet *)nonHostedLayers;
-(void)_refreshDataSource;
-(id)_presentationContextForLayer:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateForGeometrySettingsChanges:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSSet *)hostedLayers;
-(id)succinctDescriptionBuilder;
-(void)_updateRenderingMode;
-(void)_toggleClippingDisabledWithNewContext:(id)arg1 ;
-(void)dealloc;
-(void)pushDataSource:(id)arg1 ;
@end

