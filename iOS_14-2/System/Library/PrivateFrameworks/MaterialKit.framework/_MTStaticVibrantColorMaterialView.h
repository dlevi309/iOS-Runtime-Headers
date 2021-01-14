/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
*/

#import <MaterialKit/MTMaterialView.h>
#import <libobjc.A.dylib/MTCoreMaterialVisualStylingProviderObserving.h>

@class NSMutableDictionary, MTCoreMaterialVisualStylingProvider, NSString;

@interface _MTStaticVibrantColorMaterialView : MTMaterialView <MTCoreMaterialVisualStylingProviderObserving> {

	NSMutableDictionary* _visualStyleCategoriesToCoreMaterialProviders;
	MTCoreMaterialVisualStylingProvider* _contentVisualStylingProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
-(BOOL)isZoomEnabled;
-(void)setBackdropScaleAdjustment:(/*^block*/id)arg1 ;
-(void)setIgnoresScreenClip:(BOOL)arg1 ;
-(BOOL)isCaptureOnly;
-(id)_materialLayer;
-(void)setBlurEnabled:(BOOL)arg1 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)shouldCrossfade;
-(BOOL)isBlurEnabled;
-(BOOL)isContentReplacedWithSnapshot;
-(BOOL)ignoresScreenClip;
-(void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(BOOL)arg1 ;
-(void)setRecipe:(long long)arg1 ;
-(void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(BOOL)arg1 ;
-(/*^block*/id)backdropScaleAdjustment;
-(void)setContentReplacedWithSnapshot:(BOOL)arg1 ;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
-(id)_coreMaterialVisualStylingProviderForCategory:(id)arg1 ;
-(void)setCaptureOnly:(BOOL)arg1 ;
-(void)setShouldCrossfade:(BOOL)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;
-(void)_updateCoreMaterialVisualStylingProviders;
-(void)_updateContentVisualStylingIfNecessary;
-(void)_updateContentVisualStylingWithProvider:(id)arg1 ;
@end

