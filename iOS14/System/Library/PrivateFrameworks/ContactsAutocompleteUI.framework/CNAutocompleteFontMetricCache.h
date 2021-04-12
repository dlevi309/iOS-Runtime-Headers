/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/


@class NSString, NSMutableDictionary;

@interface CNAutocompleteFontMetricCache : NSObject {

	NSString* _preferredSizeValidationKey;
	NSMutableDictionary* _metricCacheDictionary;

}
+(id)sharedFontMetricCache;
-(id)init;
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

