/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNCancelable.h>

@protocol CNAutocompleteLocalQueryDelegate;
@class CNAutocompleteFetchRequest, CNContactStore, NSString;

@interface CNAutocompleteLocalQuery : NSObject <CNCancelable> {

	CNAutocompleteFetchRequest* _request;
	CNContactStore* _contactStore;
	CNContactStore* _contactFetcherStore;
	id<CNAutocompleteLocalQueryDelegate> _delegate;

}

@property (retain) CNAutocompleteFetchRequest * request;              //@synthesize request=_request - In the implementation block
@property (retain) CNContactStore * contactStore;                     //@synthesize contactStore=_contactStore - In the implementation block
@property (retain) CNContactStore * contactFetcherStore;              //@synthesize contactFetcherStore=_contactFetcherStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryWithDelegate:(id)arg1 ;
+(id)peopleQuery;
+(id)groupsQuery;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(id)fetchResults;
-(id)run;
-(void)setRequest:(CNAutocompleteFetchRequest *)arg1 ;
-(CNAutocompleteFetchRequest *)request;
-(void)cancel;
-(id)searchableProperties;
-(id)makeResultFactory;
-(id)autocompleteResultsForFetchResults:(id)arg1 resultFactory:(id)arg2 ;
-(CNContactStore *)contactFetcherStore;
-(void)setContactFetcherStore:(CNContactStore *)arg1 ;
@end

