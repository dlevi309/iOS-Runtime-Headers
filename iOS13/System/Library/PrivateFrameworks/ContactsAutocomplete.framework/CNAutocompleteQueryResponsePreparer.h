/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@protocol CNAutocompleteFetchDelegate, CNFuture, CNPromise;
@class NSMutableOrderedSet, CNAutocompleteFetchRequest;

@interface CNAutocompleteQueryResponsePreparer : NSObject {

	NSMutableOrderedSet* _previouslyReturnedResults;
	id<CNAutocompleteFetchDelegate> _delegate;
	CNAutocompleteFetchRequest* _fetchRequest;
	id<CNFuture> _priorityResultsFuture;
	id<CNPromise> _matchingPriorityResultsPromise;

}

@property (nonatomic,__weak,readonly) id<CNAutocompleteFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNAutocompleteFetchRequest * fetchRequest;                    //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) id<CNFuture> priorityResultsFuture;                             //@synthesize priorityResultsFuture=_priorityResultsFuture - In the implementation block
@property (nonatomic,retain) id<CNPromise> matchingPriorityResultsPromise;                   //@synthesize matchingPriorityResultsPromise=_matchingPriorityResultsPromise - In the implementation block
+(id)bundleIdentifierOfCurrentProcess;
+(id)makeBundleIdentifierOfCurrentProcess;
-(id)init;
-(id<CNAutocompleteFetchDelegate>)delegate;
-(CNAutocompleteFetchRequest *)fetchRequest;
-(id)initWithDelegate:(id)arg1 ;
-(id)sortResults;
-(id)initWithDelegate:(id)arg1 fetchRequest:(id)arg2 ;
-(id)addDiagnosticLog:(/*^block*/id)arg1 ;
-(id)askDelegateToAdjustResults;
-(id)suppressResultsWithAddresses:(id)arg1 ;
-(id)prepareResults:(id)arg1 ;
-(void)setPriorityResultsFuture:(id<CNFuture>)arg1 ;
-(void)setMatchingPriorityResultsPromise:(id<CNPromise>)arg1 ;
-(id)findUniqueResults:(id)arg1 ;
-(id)resultsNotPreviouslyReturned:(id)arg1 ;
-(id)applyPriorityResultsOrder:(id)arg1 ;
-(id)partitionCandidatesForRanking:(id)arg1 ;
-(BOOL)resultIdentifierIsValidMessagesChatGuid:(id)arg1 ;
-(id<CNPromise>)matchingPriorityResultsPromise;
-(BOOL)resultMatchesPrefix:(id)arg1 inNameComponentsOfResult:(id)arg2 ;
-(id<CNFuture>)priorityResultsFuture;
@end

