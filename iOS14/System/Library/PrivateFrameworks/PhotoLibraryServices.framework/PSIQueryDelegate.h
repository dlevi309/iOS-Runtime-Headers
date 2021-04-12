/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class PSITokenizer;


@protocol PSIQueryDelegate <PSIGroupResultDelegate,PSITopAssetsResultDelegate>
@property (readonly) PSITokenizer * tokenizer; 
@property (readonly) NSObject*<OS_dispatch_queue> groupResultsQueue; 
@required
-(id)meNodeIdentifier;
-(const CFSetRef)groupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(BOOL)arg3;
-(NSObject*<OS_dispatch_queue>)groupResultsQueue;
-(id)wordEmbeddingMatchesForToken:(id)arg1;
-(PSITokenizer *)tokenizer;
-(id)groupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2;
-(id)groupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;
-(id)suggestionWhitelistedScenes;
-(void)executeQuery:(id)arg1 resultsHandler:(/*^block*/id)arg2;
-(id)groupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(/*^block*/id)arg3;

@end

