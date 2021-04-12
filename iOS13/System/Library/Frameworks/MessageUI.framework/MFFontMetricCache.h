/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSString, NSMutableDictionary;

@interface MFFontMetricCache : NSObject {

	NSString* _preferredSizeValidationKey;
	NSMutableDictionary* _metricCacheDictionary;

}
+(id)sharedFontMetricCache;
-(id)init;
-(void)_invalidateCache;
-(BOOL)ensureCacheIsValid;
-(id)cachedFont:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(double)cachedFloat:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)_didReceivePreferredFontChangedNotification:(id)arg1 ;
-(id)cachedPreferredFontForStyle:(id)arg1 ;
-(id)cachedPreferredFontForStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 ;
-(double)cachedScaledFloatWithValue:(double)arg1 forKey:(id)arg2 ;
-(double)cachedScaledFloatWithValue:(double)arg1 fontStyle:(id)arg2 ;
-(double)cachedScaledFloatWithValue:(double)arg1 fontStyle:(id)arg2 maximumContentSizeCategory:(id)arg3 ;
-(id)cachedImage:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(id)metricCacheDictionary;
@end

