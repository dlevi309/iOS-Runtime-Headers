/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class PSITokenizer;


@protocol PSIQueryDelegate <PSIGroupResultDelegate,PSITopAssetsResultDelegate>
@property (readonly) PSITokenizer * tokenizer; 
@property (readonly) NSObject*<OS_dispatch_queue> groupResultsQueue; 
@required
-(PSITokenizer *)tokenizer;
-(id)suggestionWhitelistedScenes;
-(id)meNodeIdentifier;
-(id)groupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;
-(const CFSetRef)groupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(BOOL)arg3;
-(NSObject*<OS_dispatch_queue>)groupResultsQueue;
-(id)groupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(/*^block*/id)arg3;
-(id)groupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2;
-(id)wordEmbeddingMatchesForToken:(id)arg1;
-(void)executeQuery:(id)arg1 resultsHandler:(/*^block*/id)arg2;

@end

