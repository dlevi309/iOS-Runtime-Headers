/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CNContactStore, NSString;

@interface CNAutocompleteLocalSearch : NSObject <CNAutocompleteSearch> {

	CNContactStore* _contactStore;
	CNContactStore* _contactFetcherStore;

}

@property (nonatomic,retain) CNContactStore * contactStore;                     //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactFetcherStore;              //@synthesize contactFetcherStore=_contactFetcherStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(id)init;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CNContactStore *)contactFetcherStore;
-(void)setContactFetcherStore:(CNContactStore *)arg1 ;
-(id)initWithContactStore:(id)arg1 contactFetcherStore:(id)arg2 ;
-(id)groupsForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3 ;
-(id)peopleForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3 ;
@end

