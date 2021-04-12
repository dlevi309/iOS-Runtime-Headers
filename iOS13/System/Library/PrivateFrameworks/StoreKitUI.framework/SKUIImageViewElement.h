/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL, SKUIImageViewElementCacheKey, UIColor;

@interface SKUIImageViewElement : SKUIViewElement {

	NSString* _alt;
	NSString* _entityResourceName;
	NSURL* _entityURL;
	char _enabled;
	BOOL _hasValidEntityValues;
	SKUIImageViewElementCacheKey* _resourceCacheKey;
	NSString* _resourceName;
	CGSize _shadowOffset;
	double _shadowRadius;
	UIColor* _shadowColor;
	CGSize _size;
	SKUIImageViewElementCacheKey* _transientResourceCacheKey;
	NSURL* _url;
	float _layerShadowOpacity;
	double _layerShadowRadius;
	CGSize _layerShadowOffset;

}

@property (assign,nonatomic) float layerShadowOpacity;                    //@synthesize layerShadowOpacity=_layerShadowOpacity - In the implementation block
@property (assign,nonatomic) CGSize layerShadowOffset;                    //@synthesize layerShadowOffset=_layerShadowOffset - In the implementation block
@property (assign,nonatomic) double layerShadowRadius;                    //@synthesize layerShadowRadius=_layerShadowRadius - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                         //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowRadius;                         //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                       //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) id resourceCacheKey; 
@property (nonatomic,readonly) id transientResourceCacheKey;              //@synthesize transientResourceCacheKey=_transientResourceCacheKey - In the implementation block
@property (nonatomic,readonly) NSString * resourceName; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) NSURL * URL;                               //@synthesize url=_url - In the implementation block
-(CGSize)size;
-(NSURL *)URL;
-(BOOL)isEnabled;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)accessibilityText;
-(NSString *)resourceName;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(id)resourceCacheKey;
-(BOOL)rendersWithParallax;
-(BOOL)rendersWithPerspective;
-(long long)pageComponentType;
-(void)entityValueProviderDidChange;
-(void)_loadEntityValuesIfNeeded;
-(id)uniquingMapKey;
-(id)entityValueProperties;
-(id)transientResourceCacheKey;
-(float)layerShadowOpacity;
-(void)setLayerShadowOpacity:(float)arg1 ;
-(CGSize)layerShadowOffset;
-(void)setLayerShadowOffset:(CGSize)arg1 ;
-(double)layerShadowRadius;
-(void)setLayerShadowRadius:(double)arg1 ;
@end

