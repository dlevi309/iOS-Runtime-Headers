/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADGraphicFeatureCache, NSMutableDictionary;

@interface OADGraphicStyleCache : NSObject {

	OADGraphicFeatureCache* mFillCacheArray[4];
	OADGraphicFeatureCache* mStrokeCache;
	OADGraphicFeatureCache* mShadowCache;
	OADGraphicFeatureCache* mColorCache;
	OADGraphicFeatureCache* mFontFaceCache;
	OADGraphicFeatureCache* mTextStyleCache;
	OADGraphicFeatureCache* mTableIdCache;
	NSMutableDictionary* mTableStyleCache;
	OADGraphicFeatureCache* mChartIdCache;
	OADGraphicFeatureCache* mDrawableStyleCacheArray[4];

}
+(int)fillCatagory:(id)arg1 ;
-(id)strokes;
-(id)init;
-(id)shadows;
-(id)colorCache;
-(void)dealloc;
-(id)fontFaceCache;
-(unsigned long long)cacheFill:(id)arg1 returnCategory:(int*)arg2 ;
-(unsigned long long)cacheStroke:(id)arg1 ;
-(unsigned long long)cacheShadow:(id)arg1 ;
-(unsigned long long)cacheDrawablePropertiesOfCategory:(int)arg1 withFillCategory:(int)arg2 fillIndex:(unsigned long long)arg3 strokeIndex:(unsigned long long)arg4 shadowIndex:(unsigned long long)arg5 reflectionOpacity:(float)arg6 textStyleIndex:(unsigned long long)arg7 ;
-(void)cacheTableStyle:(id)arg1 ;
-(id)tableStyleForId:(id)arg1 ;
-(void)cacheChartStyleId:(int)arg1 ;
-(unsigned long long)cacheDrawablePropertiesOfCategory:(int)arg1 withGraphicProperties:(id)arg2 textBodyProperties:(id)arg3 paragraphProperties:(id)arg4 characterProperties:(id)arg5 colorContext:(id)arg6 ;
-(id)countedDrawableStyleOfCategory:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(id)fillsOfCategory:(int)arg1 ;
-(id)tableStyleIds;
-(id)chartStyleIds;
-(id)cachedDrawableStylesOfCategory:(int)arg1 ;
-(void)applyCachedDrawableStyle:(id)arg1 toGraphicProperties:(id)arg2 ;
-(void)applyCachedDrawableStyle:(id)arg1 toParagraphProperties:(id)arg2 ;
-(void)applyCachedDrawableStyle:(id)arg1 toTextBodyProperties:(id)arg2 ;
@end

