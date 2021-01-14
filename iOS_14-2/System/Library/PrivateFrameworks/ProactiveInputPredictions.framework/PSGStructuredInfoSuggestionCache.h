/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
*/


@class _PASTuple2, NSString, NSDate;

@interface PSGStructuredInfoSuggestionCache : NSObject {

	_PASTuple2* _cachedSuggestions;
	NSString* _localeIdentifier;
	NSDate* _startTime;
	double _ttlSeconds;

}
+(id)sharedInstance;
+(id)emptySuggestionsPlaceholder;
+(BOOL)_matchesPredictedValue:(id)arg1 prefixValue:(id)arg2 ;
-(id)searchWithContext:(id)arg1 localeIdentifier:(id)arg2 maxSuggestions:(unsigned long long)arg3 ;
-(void)addEmptyPlaceholderForTrigger:(id)arg1 localeIdentifier:(id)arg2 ;
-(BOOL)_maybeClearCache;
-(void)invalidate;
-(id)searchWithTrigger:(id)arg1 localeIdentifier:(id)arg2 maxSuggestions:(unsigned long long)arg3 ;
-(void)addStructuredInfoSuggestions:(id)arg1 localeIdentifier:(id)arg2 ;
-(id)initWithTTLSeconds:(double)arg1 ;
-(BOOL)_isCacheEmpty;
@end

