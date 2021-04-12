/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSearchProvider.h>

@protocol CNFuture;
@class NSString;

@interface _CNAutocompleteCachingSearchProvider : NSObject <CNAutocompleteSearchProvider> {

	id<CNFuture> _localSearchFuture;
	id<CNFuture> _recentsSearchFuture;
	id<CNFuture> _suggestionsSearchFuture;
	id<CNFuture> _duetSearchFuture;
	id<CNFuture> _localExtensionSearchesFuture;
	id<CNFuture> _directoryServerSearchFuture;
	id<CNFuture> _calendarServerSearchFuture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localSearch;
-(id)initWithSearchProvider:(id)arg1 ;
-(id)recentsSearch;
-(id)suggestionsSearch;
-(id)duetSearch;
-(id)localExtensionSearches;
-(id)directoryServerSearch;
-(id)calendarServerSearch;
@end

