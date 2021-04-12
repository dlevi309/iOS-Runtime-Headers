/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteLocalQueryDelegate.h>

@class NSString;

@interface CNAutocompleteLocalContactsFetcher : NSObject <CNAutocompleteLocalQueryDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resultsForSearchString:(id)arg1 terms:(id)arg2 properties:(id)arg3 contactStore:(id)arg4 error:(id*)arg5 ;
-(id)autocompleteResultsForProperties:(id)arg1 fetchResults:(id)arg2 resultFactory:(id)arg3 contactStore:(id)arg4 ;
-(/*^block*/id)transformWithProperties:(id)arg1 factory:(id)arg2 ;
-(id)contactsForPredicate:(id)arg1 properties:(id)arg2 contactStore:(id)arg3 error:(id*)arg4 ;
-(id)keysToFetchForProperties:(id)arg1 ;
-(id)autocompleteResultsForProperties:(id)arg1 contactPredicate:(id)arg2 contactStore:(id)arg3 resultFactory:(id)arg4 error:(id*)arg5 ;
@end

