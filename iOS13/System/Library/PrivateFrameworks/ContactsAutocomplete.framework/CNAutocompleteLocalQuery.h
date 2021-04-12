/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)run;
-(void)cancel;
-(void)setRequest:(CNAutocompleteFetchRequest *)arg1 ;
-(CNAutocompleteFetchRequest *)request;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)fetchResults;
-(id)searchableProperties;
-(id)makeResultFactory;
-(id)autocompleteResultsForFetchResults:(id)arg1 resultFactory:(id)arg2 ;
-(CNContactStore *)contactFetcherStore;
-(void)setContactFetcherStore:(CNContactStore *)arg1 ;
@end

