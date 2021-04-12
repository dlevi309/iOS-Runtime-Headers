/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class UITransformer, NSString;

@interface UISceneLayerPresentationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	UITransformer* _transformer;
	double _alpha;
	BOOL _hidden;
	BOOL _clippingDisabled;
	unsigned long long _renderingMode;
	NSString* _minificationFilterName;

}

@property (nonatomic,retain) UITransformer * transformer;                                                      //@synthesize transformer=_transformer - In the implementation block
@property (assign,nonatomic) double alpha;                                                                     //@synthesize alpha=_alpha - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                      //@synthesize hidden=_hidden - In the implementation block
@property (assign,getter=isClippingDisabled,nonatomic) BOOL clippingDisabled;                                  //@synthesize clippingDisabled=_clippingDisabled - In the implementation block
@property (assign,nonatomic) unsigned long long renderingMode;                                                 //@synthesize renderingMode=_renderingMode - In the implementation block
@property (setter=_setMinificationFilterName:,nonatomic,copy) NSString * _minificationFilterName;              //@synthesize minificationFilterName=_minificationFilterName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)renderingMode;
-(id)succinctDescription;
-(void)setTransformer:(UITransformer *)arg1 ;
-(NSString *)_minificationFilterName;
-(UITransformer *)transformer;
-(BOOL)isHidden;
-(id)init;
-(BOOL)_isEqualToDefaultContext;
-(double)alpha;
-(void)setHidden:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setRenderingMode:(unsigned long long)arg1 ;
-(BOOL)isClippingDisabled;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)_setMinificationFilterName:(id)arg1 ;
-(NSString *)description;
-(void)setClippingDisabled:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setAlpha:(double)arg1 ;
-(id)_initWithSceneLayerPresentationContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

