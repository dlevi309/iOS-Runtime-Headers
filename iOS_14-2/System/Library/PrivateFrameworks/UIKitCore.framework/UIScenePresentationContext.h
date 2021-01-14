/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class BSMutableSettings, UIMutableTransformer, NSSet, NSString, UIColor, NSDictionary, UITransformer;

@interface UIScenePresentationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	BSMutableSettings* _settings;
	UIScenePresentationContext* _defaultPresentationContext;
	UIMutableTransformer* _transformer;

}

@property (nonatomic,readonly) UIScenePresentationContext * _defaultPresentationContext;                               //@synthesize defaultPresentationContext=_defaultPresentationContext - In the implementation block
@property (nonatomic,copy,readonly) NSSet * _exclusiveLayerTargetsToInclude; 
@property (nonatomic,copy,readonly) NSSet * _layerTargetsToExclude; 
@property (getter=_isVisibilityPropagationEnabled,nonatomic,readonly) BOOL _visibilityPropagationEnabled; 
@property (nonatomic,copy,readonly) NSString * _minificationFilterName; 
@property (getter=isClippingDisabled,nonatomic,readonly) BOOL clippingDisabled; 
@property (nonatomic,readonly) unsigned long long appearanceStyle; 
@property (nonatomic,copy,readonly) UIColor * backgroundColorWhileHosting; 
@property (nonatomic,copy,readonly) UIColor * backgroundColorWhileNotHosting; 
@property (nonatomic,readonly) unsigned long long presentedLayerTypes; 
@property (nonatomic,copy,readonly) NSDictionary * layerPresentationOverrides; 
@property (nonatomic,copy,readonly) UITransformer * hostTransformer; 
@property (nonatomic,readonly) unsigned long long renderingMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)renderingMode;
-(UITransformer *)hostTransformer;
-(id)succinctDescription;
-(NSString *)_minificationFilterName;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(UIColor *)backgroundColorWhileHosting;
-(BOOL)_isVisibilityPropagationEnabled;
-(NSSet *)_layerTargetsToExclude;
-(BOOL)isClippingDisabled;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(UIScenePresentationContext *)_defaultPresentationContext;
-(unsigned long long)presentedLayerTypes;
-(NSString *)description;
-(id)_initWithPresentationContext:(id)arg1 ;
-(id)_initWithDefaultPresentationContext:(id)arg1 ;
-(unsigned long long)appearanceStyle;
-(unsigned long long)hash;
-(id)_initWithSettings:(id)arg1 defaultPresentationContext:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSSet *)_exclusiveLayerTargetsToInclude;
-(NSDictionary *)layerPresentationOverrides;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithDefaultValues;
-(UIColor *)backgroundColorWhileNotHosting;
-(BOOL)isEqual:(id)arg1 ;
@end

