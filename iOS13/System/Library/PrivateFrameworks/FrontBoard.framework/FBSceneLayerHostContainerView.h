/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/_FBSceneGeometryObserver.h>

@protocol FBSceneLayerHostContainerViewDataSource;
@class FBScene, NSMutableArray, NSArray, NSString;

@interface FBSceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver, _FBSceneGeometryObserver> {

	FBScene* _scene;
	id<FBSceneLayerHostContainerViewDataSource> _dataSource;
	NSMutableArray* _hostViews;
	NSMutableArray* _hostedLayers;
	BOOL _clippingDisabled;

}

@property (nonatomic,readonly) FBScene * scene;                                                          //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) NSArray * hostedLayers;                                                   //@synthesize hostedLayers=_hostedLayers - In the implementation block
@property (assign,nonatomic,__weak) id<FBSceneLayerHostContainerViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isClippingDisabled,nonatomic) BOOL clippingDisabled;                            //@synthesize clippingDisabled=_clippingDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<FBSceneLayerHostContainerViewDataSource>)dataSource;
-(void)setDataSource:(id<FBSceneLayerHostContainerViewDataSource>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)window;
-(FBScene *)scene;
-(id)initWithScene:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_updateRenderingMode;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(BOOL)isClippingDisabled;
-(id)_createHostViewForLayer:(id)arg1 ;
-(NSArray *)hostedLayers;
-(BOOL)isHosting;
-(void)setClippingDisabled:(BOOL)arg1 ;
-(BOOL)hasContent;
-(void)_rebuildLayers;
-(void)_adjustHostViewFrame:(id)arg1 ;
-(void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2 ;
-(void)rebuildLayers;
-(void)updateRenderingMode;
@end

