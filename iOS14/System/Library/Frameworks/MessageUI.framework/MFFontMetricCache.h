/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSString, NSMutableDictionary;

@interface MFFontMetricCache : NSObject {

	NSString* _preferredSizeValidationKey;
	NSMutableDictionary* _metricCacheDictionary;
	NSMutableDictionary* _bodyLeadingDictionary;
	NSMutableDictionary* _defaultBodyLeadingDictionary;

}
+(id)sharedFontMetricCache;
-(id)init;
-(id)cachedImage:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(id)cachedPreferredFontForStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 ;
-(double)cachedScaledFloatWithValue:(double)arg1 fontStyle:(id)arg2 maximumContentSizeCategory:(id)arg3 ;
-(id)cachedFont:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)_invalidateCache;
-(void)_didReceivePreferredFontChangedNotification:(id)arg1 ;
-(id)cachedPreferredFontForStyle:(id)arg1 ;
-(double)cachedFloat:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(double)cachedScaledFloatWithValue:(double)arg1 forKey:(id)arg2 ;
-(double)cachedScaledFloatWithValue:(double)arg1 fontStyle:(id)arg2 ;
-(BOOL)ensureCacheIsValid;
-(id)metricCacheDictionary;
@end

