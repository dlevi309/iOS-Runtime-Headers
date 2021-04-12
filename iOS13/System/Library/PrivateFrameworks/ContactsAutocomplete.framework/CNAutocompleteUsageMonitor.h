/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

