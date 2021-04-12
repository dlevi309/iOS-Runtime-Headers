/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(id<_UISceneLayerHostContainerViewDataSource>)dataSource;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)window;
-(FBScene *)scene;
-(id)initWithScene:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_rebuildLayersForReason:(id)arg1 ;
-(void)_setDataSource:(id)arg1 ;
-(void)_refreshDataSource;
-(void)_adjustHostViewFrameAlignment:(id)arg1 ;
-(void)_updateRenderingMode;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(void)_setPresentationContext:(id)arg1 ;
-(void)_presentationContextChangedFrom:(id)arg1 toContext:(id)arg2 force:(BOOL)arg3 ;
-(void)_toggleClippingDisabledWithNewContext:(id)arg1 ;
-(id)_presentationContextForLayer:(id)arg1 ;
-(id)_filteredLayersToPresent;
-(id)_createHostViewForLayer:(id)arg1 ;
-(void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(NSSet *)hostedLayers;
-(NSSet *)nonHostedLayers;
-(void)pushDataSource:(id)arg1 ;
-(void)popDataSource:(id)arg1 ;
-(void)refreshDataSource:(id)arg1 ;
-(void)updateForGeometrySettingsChanges:(id)arg1 ;
@end

