/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CNContactStore, NSString;

@interface CNAutocompleteSuggestionsSearch : NSObject <CNAutocompleteSearch> {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)charactersThreshold;
-(id)init;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)suggestedContactsForRequest:(id)arg1 error:(id*)arg2 ;
-(id)convertContacts:(id)arg1 request:(id)arg2 ;
-(/*^block*/id)resultTransformWithRequest:(id)arg1 ;
-(/*^block*/id)resultTransformWithFactory:(id)arg1 properties:(id)arg2 ;
@end

