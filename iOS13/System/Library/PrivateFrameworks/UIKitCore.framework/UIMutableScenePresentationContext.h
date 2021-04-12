/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScenePresentationContext.h>

@class UIScenePresentationContext, NSSet, NSString, UIColor, UITransformer;

@interface UIMutableScenePresentationContext : UIScenePresentationContext

@property (setter=_setDefaultPresentationContext:,nonatomic,retain) UIScenePresentationContext * _defaultPresentationContext; 
@property (setter=_setExclusiveLayerTargetsToInclude:,nonatomic,copy) NSSet * _exclusiveLayerTargetsToInclude; 
@property (setter=_setLayerTargetsToExclude:,nonatomic,copy) NSSet * _layerTargetsToExclude; 
@property (assign,setter=_setVisibilityPropagationEnabled:,getter=_isVisibilityPropagationEnabled,nonatomic) BOOL _visibilityPropagationEnabled; 
@property (setter=_setMinificationFilterName:,nonatomic,copy) NSString * _minificationFilterName; 
@property (assign,getter=isClippingDisabled,nonatomic) BOOL clippingDisabled; 
@property (assign,nonatomic) unsigned long long appearanceStyle; 
@property (nonatomic,copy) UIColor * backgroundColorWhileHosting; 
@property (nonatomic,copy) UIColor * backgroundColorWhileNotHosting; 
@property (assign,nonatomic) unsigned long long presentedLayerTypes; 
@property (nonatomic,copy) UITransformer * hostTransformer; 
@property (assign,nonatomic) unsigned long long renderingMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAppearanceStyle:(unsigned long long)arg1 ;
-(void)setRenderingMode:(unsigned long long)arg1 ;
-(void)_setVisibilityPropagationEnabled:(BOOL)arg1 ;
-(void)setPresentedLayerTypes:(unsigned long long)arg1 ;
-(UIScenePresentationContext *)_defaultPresentationContext;
-(void)setClippingDisabled:(BOOL)arg1 ;
-(void)_setMinificationFilterName:(id)arg1 ;
-(void)setBackgroundColorWhileHosting:(UIColor *)arg1 ;
-(void)setBackgroundColorWhileNotHosting:(UIColor *)arg1 ;
-(id)_existingLayerPresentationContextCreatingIfNecessary:(BOOL)arg1 ;
-(void)setHostTransformer:(UITransformer *)arg1 ;
-(void)modifyLayerPresentationOverrideContextForLayerTarget:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)removeLayerPresentationOverrideForLayerTarget:(id)arg1 ;
-(void)removeAllLayerPresentationOverrides;
-(void)resetToDefaults;
-(void)_setDefaultPresentationContext:(id)arg1 ;
-(void)_setExclusiveLayerTargetsToInclude:(id)arg1 ;
-(void)_setLayerTargetsToExclude:(id)arg1 ;
@end

