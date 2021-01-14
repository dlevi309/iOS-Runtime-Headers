/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@protocol CNAutocompletePerformanceProbe <CNAutocompleteProbe>
@required
-(void)recordNumberOfResultsReturned:(unsigned long long)arg1 inTimeInterval:(double)arg2 forBatch:(unsigned long long)arg3 includesServers:(BOOL)arg4;
-(void)recordNumberOfContactResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfRecentResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfSuggestionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfPredictionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfSupplementalResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfDirectoryServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfCalendarServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;

@end

