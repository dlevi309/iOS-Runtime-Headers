/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject {

	SCD_Struct_PX38 _needsUpdateFlags;
	NSMutableArray* __referenceValuesByMetrics;
	double __cachedMetric;
	NSValue* __cachedValue;

}

@property (nonatomic,readonly) NSMutableArray * _referenceValuesByMetrics;                //@synthesize _referenceValuesByMetrics=__referenceValuesByMetrics - In the implementation block
@property (assign,setter=_setCachedMetric:,nonatomic) double _cachedMetric;               //@synthesize _cachedMetric=__cachedMetric - In the implementation block
@property (setter=_setCachedValue:,nonatomic,retain) NSValue * _cachedValue;              //@synthesize _cachedValue=__cachedValue - In the implementation block
+(id)memoriesFeedPortraitEdgeInsetsInterpolator;
+(id)memoriesItemWidthInterpolator;
+(id)gadgetColumnWidthSpanSingleSetAInterpolator;
+(id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+(id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+(id)memoriesFeedInteritemSpacingInterpolator;
+(id)legacyLayoutMarginWidthInterpolator;
+(CGSize)bestItemSizeForAvailableWidth:(double)arg1 screenScale:(double)arg2 columns:(unsigned long long)arg3 bestSpacing:(double*)arg4 bestInset:(double*)arg5 ;
+(CGSize)zoomableGridLayoutSmallItemSizeForWidth:(double)arg1 ;
+(id)allLayoutMetricConfigurationSizes;
+(id)_gridItemWidthInterpolatorWithGridEdgeInsetsInterpolator:(id)arg1 ;
+(id)albumsGridEdgeInsetsInterpolator;
+(id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+(id)_sharedGridEdgeInsetsInterpolator;
+(long long)photosGridSizeSubclassForScreenSize:(CGSize)arg1 ;
+(id)_sharedGridItemWidthInterpolator;
+(id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+(id)albumsGridItemWidthInterpolator;
+(id)layoutMarginWidthInterpolator;
+(id)memoriesDetailsEdgeInsetsInterpolator;
+(id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+(id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+(unsigned long long)photosGridLayoutColumnsForWidth:(double)arg1 ;
-(double)_cachedMetric;
-(void)_invalidateReferenceValuesByMetricsOrder;
-(id)init;
-(void)_updateReferenceValuesByMetricsOrderIfNeeded;
-(void)_setCachedMetric:(double)arg1 ;
-(id)description;
-(double)valueForMetric:(double)arg1 ;
-(void)_getReferenceValueForMetric:(double)arg1 exactMatch:(id*)arg2 closestBeforeMatch:(id*)arg3 closestAfterMatch:(id*)arg4 ;
-(void)setReferenceValue:(double)arg1 forMetric:(double)arg2 ;
-(NSMutableArray *)_referenceValuesByMetrics;
-(NSValue *)_cachedValue;
-(void)_setNeedsUpdate;
-(id)_valueForMetric:(double)arg1 fromInterpolationBetweenValue:(id)arg2 secondValue:(id)arg3 ;
-(void)_setCachedValue:(id)arg1 ;
@end

