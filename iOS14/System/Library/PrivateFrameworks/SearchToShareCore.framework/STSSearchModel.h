/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <libobjc.A.dylib/PARSessionDelegate.h>

@protocol STSSearchModelDelegate, STSRecentsDelegate, STSSearchModelQuerySuggestionsDelegate, OS_dispatch_queue;
@class NSString, NSArray, PARSession, PARTask, NSObject, NSMutableDictionary, NSMutableArray;

@interface STSSearchModel : NSObject <PARSessionDelegate> {

	NSString* _currentQuery;
	NSArray* _sections;
	NSArray* _querySuggestions;
	NSArray* _predictedSuggestions;
	id<STSSearchModelDelegate> _delegate;
	id<STSRecentsDelegate> _recentsDelegate;
	id<STSSearchModelQuerySuggestionsDelegate> _querySuggestionsDelegate;
	PARSession* _parsecSession;
	NSArray* _categoryList;
	NSArray* _recentResults;
	unsigned long long _categoryListRequestQueryId;
	NSString* _conversationID;
	PARTask* _currentTask;
	NSObject*<OS_dispatch_queue> _mutableSectionsQueue;
	NSObject*<OS_dispatch_queue> _queryQueue;
	NSMutableDictionary* _zkwResultStore;
	NSMutableDictionary* _searchResultStore;
	NSArray* _searchResults;
	NSMutableArray* _recentsToDedup;

}

@property (nonatomic,retain) PARTask * currentTask;                                                                   //@synthesize currentTask=_currentTask - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mutableSectionsQueue;                                       //@synthesize mutableSectionsQueue=_mutableSectionsQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queryQueue;                                                 //@synthesize queryQueue=_queryQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zkwResultStore;                                                    //@synthesize zkwResultStore=_zkwResultStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * searchResultStore;                                                 //@synthesize searchResultStore=_searchResultStore - In the implementation block
@property (nonatomic,retain) NSArray * searchResults;                                                                 //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * recentsToDedup;                                                         //@synthesize recentsToDedup=_recentsToDedup - In the implementation block
@property (nonatomic,readonly) NSString * currentQuery;                                                               //@synthesize currentQuery=_currentQuery - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * querySuggestions;                                                              //@synthesize querySuggestions=_querySuggestions - In the implementation block
@property (nonatomic,retain) NSArray * predictedSuggestions;                                                          //@synthesize predictedSuggestions=_predictedSuggestions - In the implementation block
@property (assign,nonatomic,__weak) id<STSSearchModelDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<STSRecentsDelegate> recentsDelegate;                                           //@synthesize recentsDelegate=_recentsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<STSSearchModelQuerySuggestionsDelegate> querySuggestionsDelegate;              //@synthesize querySuggestionsDelegate=_querySuggestionsDelegate - In the implementation block
@property (nonatomic,retain) PARSession * parsecSession;                                                              //@synthesize parsecSession=_parsecSession - In the implementation block
@property (nonatomic,retain) NSArray * categoryList;                                                                  //@synthesize categoryList=_categoryList - In the implementation block
@property (nonatomic,retain) NSArray * recentResults;                                                                 //@synthesize recentResults=_recentResults - In the implementation block
@property (assign) unsigned long long categoryListRequestQueryId;                                                     //@synthesize categoryListRequestQueryId=_categoryListRequestQueryId - In the implementation block
@property (nonatomic,retain) NSString * conversationID;                                                               //@synthesize conversationID=_conversationID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)clientQueryId;
+(id)serverURLString;
+(void)incrementClientQueryId;
-(void)setSections:(NSArray *)arg1 ;
-(NSString *)currentQuery;
-(NSArray *)querySuggestions;
-(void)setQuerySuggestions:(NSArray *)arg1 ;
-(void)setCategoryList:(NSArray *)arg1 ;
-(id)init;
-(id<STSSearchModelDelegate>)delegate;
-(NSArray *)categoryList;
-(NSArray *)sections;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(void)removeAllSections;
-(void)setDelegate:(id<STSSearchModelDelegate>)arg1 ;
-(void)setQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCurrentTask:(PARTask *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queryQueue;
-(void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3 ;
-(PARTask *)currentTask;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(unsigned long long)categoryListRequestQueryId;
-(void)performZKWSearchQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)performSearchWithQueryString:(id)arg1 requestType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchMoreResults;
-(NSArray *)predictedSuggestions;
-(void)removeQuerySuggestions;
-(void)setQuerySuggestionsDelegate:(id<STSSearchModelQuerySuggestionsDelegate>)arg1 ;
-(void)performCategoryListRequest:(/*^block*/id)arg1 ;
-(id)defaultCategoryList;
-(void)_clearSectionsAndNotifyDelegate;
-(void)_updateSearchProviderImageForResult:(id)arg1 ;
-(void)_performParsecdSearchQuery:(id)arg1 requestType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)prefetchRecentsWithCompletion:(/*^block*/id)arg1 ;
-(void)appendQueryItemsForRequest:(id)arg1 type:(long long)arg2 ;
-(PARSession *)parsecSession;
-(id)createQuerySession;
-(void)_clearQuerySuggestionsAndNotifyDelegate;
-(id)mockQuerySuggestions;
-(void)setPredictedSuggestions:(NSArray *)arg1 ;
-(id<STSRecentsDelegate>)recentsDelegate;
-(void)setRecentsDelegate:(id<STSRecentsDelegate>)arg1 ;
-(id<STSSearchModelQuerySuggestionsDelegate>)querySuggestionsDelegate;
-(void)setParsecSession:(PARSession *)arg1 ;
-(NSArray *)recentResults;
-(void)setRecentResults:(NSArray *)arg1 ;
-(void)setCategoryListRequestQueryId:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)mutableSectionsQueue;
-(void)setMutableSectionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)zkwResultStore;
-(void)setZkwResultStore:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)searchResultStore;
-(void)setSearchResultStore:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)recentsToDedup;
-(void)setRecentsToDedup:(NSMutableArray *)arg1 ;
@end

