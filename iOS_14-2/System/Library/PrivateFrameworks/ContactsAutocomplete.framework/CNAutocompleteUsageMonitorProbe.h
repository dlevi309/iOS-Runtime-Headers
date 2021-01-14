/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@protocol CNAutocompleteUsageMonitorProbe <CNAutocompleteProbe>
@required
-(void)recordDuetReturnedResults:(BOOL)arg1;
-(void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1;
-(void)recordUserSelectedIndex:(unsigned long long)arg1;
-(void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1;
-(void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1;
-(void)recordUserIgnoredPredictionAfterDelay:(double)arg1;
-(void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2;
-(void)recordUserSawPredictions;
-(void)recordUserSawResultsConsideredSuggestion:(unsigned long long)arg1;
-(void)recordUserSawCuratedResults:(unsigned long long)arg1;

@end

