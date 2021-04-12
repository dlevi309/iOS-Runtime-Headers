/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CNContactStore, NSString;

@interface CNAutocompleteDuetSearch : NSObject <CNAutocompleteSearch> {

	/*^block*/id _peopleSuggesterFactory;
	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) id peopleSuggesterFactory;                  //@synthesize peopleSuggesterFactory=_peopleSuggesterFactory - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureContext:(id)arg1 withFetchRequest:(id)arg2 ;
+(void)configureSettings:(id)arg1 withFetchRequest:(id)arg2 ;
+(id)constrainMechanismsForSearchType:(unsigned long long)arg1 ;
+(unsigned long long)predictedResultLimit;
-(id)init;
-(id)peopleSuggester;
-(CNContactStore *)contactStore;
-(id)initWithPeopleSuggesterFactory:(/*^block*/id)arg1 ;
-(id)initWithPeopleSuggesterFactory:(/*^block*/id)arg1 contactStore:(id)arg2 ;
-(id)peopleSuggesterFactory;
-(id)suggesterContextForFetchRequest:(id)arg1 ;
-(id)suggesterSettingsForFetchRequest:(id)arg1 ;
-(id)querySuggester:(id)arg1 withContext:(id)arg2 settings:(id)arg3 ;
-(id)autocompleteResultsFromSuggesterResults:(id)arg1 factory:(id)arg2 ;
-(id)resultValueForCDContact:(id)arg1 ;
-(long long)addressTypeForCDContact:(id)arg1 ;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

