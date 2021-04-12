/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_FBSceneGeometryObserver.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/FBSceneLayerHostContainerViewDataSource.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSceneHostView.h>

@protocol FBSceneHostViewDelegate;
@class FBScene, NSString, FBSceneLayerManager, FBSceneHostManager, FBSceneLayerHostContainerView, NSMapTable, NSMutableSet, UIColor, NSSet;

@interface FBSceneHostWrapperView : UIView <_FBSceneGeometryObserver, FBSceneLayerManagerObserver, FBSceneLayerHostContainerViewDataSource, BSDescriptionProviding, FBSceneHostView> {

	FBScene* _scene;
	NSString* _requester;
	FBSceneLayerManager* _layerManager;
	FBSceneHostManager* _manager;
	FBSceneLayerHostContainerView* _hostContainerView;
	NSMapTable* _layerAlphaMapTable;
	NSMutableSet* _hiddenLayers;
	unsigned long long _appearanceStyle;
	BOOL _usingDefaultClippingDisabled;
	BOOL _usingDefaultHostViewTransform;
	UIColor* _backgroundColorWhileNotHosting;
	UIColor* _backgroundColorWhileHosting;
	unsigned long long _hostedLayerTypes;
	BOOL _usingDefaultLayerTypes;
	unsigned long long _renderingMode;
	BOOL _usingDefaultRenderingMode;
	NSString* _minificationFilterName;
	BOOL _usingDefaultMinificationFilterName;
	BOOL _clippingDisabled;
	id<FBSceneHostViewDelegate> _delegate;
	CGAffineTransform _hostViewTransform;

}

@property (nonatomic,readonly) FBScene * scene;                                              //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy,readonly) NSString * requester;                                    //@synthesize requester=_requester - In the implementation block
@property (nonatomic,readonly) NSSet * hiddenLayers;                                         //@synthesize hiddenLayers=_hiddenLayers - In the implementation block
@property (nonatomic,readonly) NSSet * hostingDisabledLayers; 
@property (nonatomic,retain) FBSceneLayerHostContainerView * hostContainerView;              //@synthesize hostContainerView=_hostContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isClippingDisabled,nonatomic) BOOL clippingDisabled;                //@synthesize clippingDisabled=_clippingDisabled - In the implementation block
@property (assign,nonatomic) CGAffineTransform hostViewTransform;                            //@synthesize hostViewTransform=_hostViewTransform - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorWhileHosting; 
@property (nonatomic,retain) UIColor * backgroundColorWhileNotHosting; 
@property (assign,nonatomic) unsigned long long hostedLayerTypes;                            //@synthesize hostedLayerTypes=_hostedLayerTypes - In the implementation block
@property (assign,nonatomic) unsigned long long renderingMode;                               //@synthesize renderingMode=_renderingMode - In the implementation block
@property (nonatomic,copy) NSString * minificationFilterName;                                //@synthesize minificationFilterName=_minificationFilterName - In the implementation block
@property (assign,nonatomic) unsigned long long appearanceStyle;                             //@synthesize appearanceStyle=_appearanceStyle - In the implementation block
@property (getter=isHosting,nonatomic,readonly) BOOL hosting; 
@property (nonatomic,readonly) CGRect referenceFrame; 
@property (nonatomic,readonly) double level; 
@property (assign,nonatomic) id<FBSceneHostViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(id<FBSceneHostViewDelegate>)delegate;
-(void)setDelegate:(id<FBSceneHostViewDelegate>)arg1 ;
-(double)level;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGRect)referenceFrame;
-(unsigned long long)renderingMode;
-(id)window;
-(FBScene *)scene;
-(FBSceneLayerHostContainerView *)hostContainerView;
-(void)setHostContainerView:(FBSceneLayerHostContainerView *)arg1 ;
-(unsigned long long)appearanceStyle;
-(void)setAppearanceStyle:(unsigned long long)arg1 ;
-(void)setRenderingMode:(unsigned long long)arg1 ;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(BOOL)isClippingDisabled;
-(void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(void)_updateFrameAndTransform;
-(UIColor *)backgroundColorWhileHosting;
-(UIColor *)backgroundColorWhileNotHosting;
-(BOOL)isHosting;
-(void)setClippingDisabled:(BOOL)arg1 ;
-(void)setBackgroundColorWhileHosting:(UIColor *)arg1 ;
-(void)setBackgroundColorWhileNotHosting:(UIColor *)arg1 ;
-(void)updateBackgroundColor;
-(void)setDefaultClippingDisabled:(BOOL)arg1 ;
-(void)setDefaultHostViewTransform:(CGAffineTransform)arg1 ;
-(void)setDefaultHostedLayerTypes:(unsigned long long)arg1 ;
-(void)setDefaultRenderingMode:(unsigned long long)arg1 ;
-(void)setDefaultMinificationFilterName:(id)arg1 ;
-(void)setLayer:(id)arg1 alpha:(double)arg2 ;
-(void)setLayer:(id)arg1 hidden:(BOOL)arg2 ;
-(NSSet *)hiddenLayers;
-(NSSet *)hostingDisabledLayers;
-(id)initWithScene:(id)arg1 requester:(id)arg2 ;
-(NSString *)requester;
-(id)layersForHostContainerView:(id)arg1 ;
-(double)hostContainerView:(id)arg1 alphaForLayer:(id)arg2 ;
-(unsigned long long)contextHostRenderingModeForHostContainerView:(id)arg1 ;
-(id)layerMinificationFilterNameForHostContainerView:(id)arg1 ;
-(void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2 ;
-(void)_setAppearanceStyle:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(void)_hostingStatusChanged;
-(void)_toggleBackgroundColorIfNecessary;
-(BOOL)_isReallyHosting;
-(id)_backgroundColorWhileHosting;
-(id)_backgroundColorWhileNotHosting;
-(id)_stringForAppearanceStyle;
-(CGAffineTransform)hostViewTransform;
-(void)setHostViewTransform:(CGAffineTransform)arg1 ;
-(unsigned long long)hostedLayerTypes;
-(void)setHostedLayerTypes:(unsigned long long)arg1 ;
-(NSString *)minificationFilterName;
-(void)setMinificationFilterName:(NSString *)arg1 ;
@end

