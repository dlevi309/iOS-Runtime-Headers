/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/

#import <AddressBookLegacy/ABPredicate.h>
#import <libobjc.A.dylib/DASearchQueryConsumer.h>

@protocol ABPredicateDelegate;
@class DADConnection, DAContactsSearchQuery, NSMutableArray, NSConditionLock, NSString;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer> {

	void* _source;
	DADConnection* _connection;
	DAContactsSearchQuery* _searchQuery;
	NSMutableArray* _searchResults;
	NSConditionLock* _doneLock;
	int _error;
	BOOL _includeSourceInResults;
	BOOL _includePhotosInResults;
	NSString* _accountIdentifier;
	NSString* _searchString;
	id<ABPredicateDelegate> _delegate;

}

@property (nonatomic,retain) DADConnection * connection; 
@property (assign,nonatomic) void* source; 
@property (nonatomic,copy) NSString * accountIdentifier;                    //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) BOOL includeSourceInResults;                   //@synthesize includeSourceInResults=_includeSourceInResults - In the implementation block
@property (assign,nonatomic) BOOL includePhotosInResults;                   //@synthesize includePhotosInResults=_includePhotosInResults - In the implementation block
@property (assign,nonatomic) id<ABPredicateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int error; 
-(void)dealloc;
-(id<ABPredicateDelegate>)delegate;
-(void)setDelegate:(id<ABPredicateDelegate>)arg1 ;
-(void)setSource:(void*)arg1 ;
-(void*)source;
-(int)error;
-(DADConnection *)connection;
-(void)setConnection:(DADConnection *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(id)querySerializationIdentifier;
-(id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(BOOL)arg4 includePhotosInResults:(BOOL)arg5 ;
-(void)ab_runPredicateWithSortOrder:(unsigned)arg1 ranked:(BOOL)arg2 inAddressBook:(void*)arg3 withDelegate:(id)arg4 ;
-(void)setIncludeSourceInResults:(BOOL)arg1 ;
-(void)setIncludePhotosInResults:(BOOL)arg1 ;
-(id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(BOOL)arg4 ;
-(BOOL)includePhotosInResults;
-(int)_errorForDAStatusCode:(long long)arg1 ;
-(void)runPredicate;
-(void)runPredicateWithDelegate:(id)arg1 ;
-(BOOL)includeSourceInResults;
-(void)_searchQueryIsDone;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 ;
@end

