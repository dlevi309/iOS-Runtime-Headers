/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSMutableDictionary, NSArray;

@interface WBSParsecSearchResultCache : NSObject {

	NSMutableDictionary* _resultSetCache;
	NSMutableDictionary* _resultSetsByPrefix;
	unsigned long long _cachedQueriesLimit;

}

@property (nonatomic,readonly) NSArray * allCachedQueries; 
-(BOOL)_shouldCacheResultSetForQueryMatching:(id)arg1 ;
-(BOOL)_resultSet:(id)arg1 isMatchForQuery:(id)arg2 ;
-(id)initWithCachedQueriesLimit:(unsigned long long)arg1 ;
-(void)cacheResultSetsFromSearchResponse:(id)arg1 ;
-(void)cacheResultSet:(id)arg1 ;
-(id)bestResultSetForQuery:(id)arg1 ;
-(id)resultSetWithQuery:(id)arg1 ;
-(NSArray *)allCachedQueries;
@end

