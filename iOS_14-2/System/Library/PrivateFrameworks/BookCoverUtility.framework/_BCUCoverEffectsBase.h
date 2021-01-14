/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/

#import <BookCoverUtility/BookCoverUtility-Structs.h>
#import <libobjc.A.dylib/BCUBookCoverEffectsFilter.h>
#import <libobjc.A.dylib/BCUImageFilter.h>

@class NSString, _BCUCoverEffectsAssets, _BCUCoverEffectsShadow, BCULayerRenderer;

@interface _BCUCoverEffectsBase : NSObject <BCUBookCoverEffectsFilter, BCUImageFilter> {

	_BCUCoverEffectsAssets* _assets;
	_BCUCoverEffectsShadow* _shadow;
	_BCUCoverEffectsShadow* _seriesShadow;
	BOOL _shadowOnly;
	BOOL _restricted;
	NSString* _identifier;
	BCULayerRenderer* _renderer;

}

@property (nonatomic,retain) BCULayerRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)cornerRadius;
-(BCULayerRenderer *)renderer;
-(void)setRenderer:(BCULayerRenderer *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 renderer:(id)arg2 assets:(id)arg3 shadow:(id)arg4 seriesShadow:(id)arg5 shadowOnly:(BOOL)arg6 restricted:(BOOL)arg7 ;
-(id)_shadowLayerWithImage:(CGImageRef)arg1 size:(CGSize)arg2 tint:(BOOL)arg3 shadow:(id)arg4 ;
-(id)_coverLayerWithImage:(CGImageRef)arg1 size:(CGSize)arg2 ;
-(double)_assetsScale;
-(BOOL)includeBinding;
-(id)_layerWithImage:(CGImageRef)arg1 size:(CGSize)arg2 scale:(double)arg3 shadow:(id)arg4 ;
-(id)newOperationWithImage:(CGImageRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(id)arg5 waitForCPUSynchronization:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(id)coverLayerWithImage:(CGImageRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 ;
-(id)shadowLayerWithImage:(CGImageRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 kind:(unsigned long long)arg4 ;
-(id)initWithIdentifier:(id)arg1 renderer:(id)arg2 assets:(id)arg3 shadow:(id)arg4 seriesShadow:(id)arg5 shadowOnly:(BOOL)arg6 ;
-(double)tintBlurRadius;
@end

