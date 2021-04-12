/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/


@class NSString, NSMutableDictionary;

@interface CNAutocompleteFontMetricCache : NSObject {

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
-(double)cachedScaledFloatWithValue:(double)arg1 forKey:(id)arg2 ;
-(double)cachedScaledFloatWithValue:(double)arg1 fontStyle:(id)arg2 ;
-(id)metricCacheDictionary;
@end

