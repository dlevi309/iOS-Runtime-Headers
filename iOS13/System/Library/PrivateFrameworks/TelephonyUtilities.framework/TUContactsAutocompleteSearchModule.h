/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>
#import <libobjc.A.dylib/TUSearchModuleProtocol.h>

@protocol CNCancelable, OS_dispatch_queue;
@class TUSearchController, CNAutocompleteStore, TUAutocompleteResultPartitioner, NSObject, NSString, TUSearchResults;

@interface TUContactsAutocompleteSearchModule : NSObject <CNAutocompleteFetchDelegate, TUSearchModuleProtocol> {

	BOOL _searchComplete;
	BOOL _cancelled;
	TUSearchController* _searchController;
	CNAutocompleteStore* _autocompleteStore;
	id<CNCancelable> _fetchRequest;
	TUAutocompleteResultPartitioner* _autocompleteResultPartitioner;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;

}

@property (nonatomic,retain) CNAutocompleteStore * autocompleteStore;                                      //@synthesize autocompleteStore=_autocompleteStore - In the implementation block
@property (nonatomic,retain) id<CNCancelable> fetchRequest;                                                //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) TUAutocompleteResultPartitioner * autocompleteResultPartitioner;              //@synthesize autocompleteResultPartitioner=_autocompleteResultPartitioner - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completion;                                                                  //@synthesize completion=_completion - In the implementation block
@property (assign,getter=isSearchComplete,nonatomic) BOOL searchComplete;                                  //@synthesize searchComplete=_searchComplete - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                            //@synthesize cancelled=_cancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) TUSearchResults * searchResults; 
@property (__weak) TUSearchController * searchController;                                                  //@synthesize searchController=_searchController - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isCancelled;
-(id<CNCancelable>)fetchRequest;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)_cleanup;
-(TUSearchController *)searchController;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setFetchRequest:(id<CNCancelable>)arg1 ;
-(TUSearchResults *)searchResults;
-(void)setSearchComplete:(BOOL)arg1 ;
-(void)searchForString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelSearch;
-(BOOL)isSearchComplete;
-(void)setAutocompleteStore:(CNAutocompleteStore *)arg1 ;
-(CNAutocompleteStore *)autocompleteStore;
-(TUAutocompleteResultPartitioner *)autocompleteResultPartitioner;
-(void)setAutocompleteResultPartitioner:(TUAutocompleteResultPartitioner *)arg1 ;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
@end

