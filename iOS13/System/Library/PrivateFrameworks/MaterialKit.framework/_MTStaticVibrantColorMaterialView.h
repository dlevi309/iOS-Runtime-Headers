/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(BOOL)shouldCrossfade;
-(void)setShouldCrossfade:(BOOL)arg1 ;
-(void)setCaptureOnly:(BOOL)arg1 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)isZoomEnabled;
-(id)_materialLayer;
-(void)setRecipe:(long long)arg1 ;
-(BOOL)ignoresScreenClip;
-(void)setIgnoresScreenClip:(BOOL)arg1 ;
-(BOOL)isCaptureOnly;
-(BOOL)isBlurEnabled;
-(void)setBlurEnabled:(BOOL)arg1 ;
-(/*^block*/id)backdropScaleAdjustment;
-(void)setBackdropScaleAdjustment:(/*^block*/id)arg1 ;
-(BOOL)isContentReplacedWithSnapshot;
-(void)setContentReplacedWithSnapshot:(BOOL)arg1 ;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(void)_updateContentVisualStylingIfNecessary;
-(void)_updateCoreMaterialVisualStylingProviders;
-(void)_updateContentVisualStylingWithProvider:(id)arg1 ;
-(BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
-(void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(BOOL)arg1 ;
-(BOOL)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
-(void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(BOOL)arg1 ;
-(id)_coreMaterialVisualStylingProviderForCategory:(id)arg1 ;
@end

