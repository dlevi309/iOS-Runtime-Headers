/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@class NSString, RBSAssertion;

@interface _UIRootWindow : UIWindow {

	double _scale;
	os_unfair_lock_s _visibilityLock;
	BOOL _visibilityLock_enabled;
	NSString* _visibilityLock_environment;
	NSString* _visibilityLock_identifier;
	BOOL _visibilityLock_updateEnqueued;
	os_unfair_lock_s _visibilityProcessingLock;
	NSString* _visibilityProcessingLock_identifier;
	RBSAssertion* _visibilityProcessingLock_assertion;
	CGAffineTransform _additionalRootLayerAffineTransform;

}

@property (assign,setter=_setAdditionalRootLayerAffineTransform:,getter=_additionalRootLayerAffineTransform,nonatomic) CGAffineTransform additionalRootLayerAffineTransform;              //@synthesize additionalRootLayerAffineTransform=_additionalRootLayerAffineTransform - In the implementation block
@property (nonatomic,copy,readonly) NSString * visibilityEnvironment; 
-(void)_configureContextOptions:(id)arg1 ;
-(BOOL)_extendsScreenSceneLifetime;
-(BOOL)_isWindowServerHostingManaged;
-(id)_layerForCoordinateSpaceConversion;
-(void)_visibilityLock_enqueueUpdateIfNecessary;
-(BOOL)_wantsSceneAssociation;
-(void)setHidden:(BOOL)arg1 ;
-(void)_configureRootLayer:(id)arg1 sceneTransformLayer:(id)arg2 transformLayer:(id)arg3 ;
-(BOOL)_transformLayerIncludesScreenRotation;
-(id)_visibilityLock_environment;
-(void)_noteScreenDidChangeMode:(id)arg1 ;
-(NSString *)visibilityEnvironment;
-(void)setVisibilityIdentifier:(id)arg1 ;
-(void)_setAdditionalRootLayerAffineTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)_additionalRootLayerAffineTransform;
-(id)initWithScreen:(id)arg1 ;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2 ;
-(void)_visibilityLock_enqueueUpdateIfNecessary_body;
-(SCD_Struct_UI37)_bindingDescription;
-(id)initWithDisplay:(id)arg1 ;
-(id)_context;
-(void)_updateVisibility;
-(void)dealloc;
@end

