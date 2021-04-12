/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@protocol CNAutocompleteProbeProvider;
@interface CNAutocompleteUsageMonitor : NSObject {

	id<CNAutocompleteProbeProvider> _probeProvider;

}

@property (nonatomic,readonly) id<CNAutocompleteProbeProvider> probeProvider;              //@synthesize probeProvider=_probeProvider - In the implementation block
+(void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3 gotResultsFromDuet:(BOOL)arg4 ;
+(void)userIgnoredResultsForRequest:(id)arg1 afterDelay:(double)arg2 ;
-(id)init;
-(id)initWithProbeProvider:(id)arg1 ;
-(void)userIgnoredResultsOfBatch:(unsigned long long)arg1 forRequest:(id)arg2 afterDelay:(double)arg3 ;
-(id<CNAutocompleteProbeProvider>)probeProvider;
-(void)userSawNumberOfResults:(unsigned long long)arg1 forBatch:(unsigned long long)arg2 includingNumberOfSuggestions:(unsigned long long)arg3 forRequest:(id)arg4 ;
-(void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3 gotResultsFromDuet:(BOOL)arg4 ;
@end

