/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject {

	NSMutableArray* _recentSearchEntries;

}
+(unsigned long long)_maximumNumberOfSearchesToTrack;
+(id)_defaultsKey;
+(BOOL)_shouldTrackSearches;
-(void)_addLegacySearch:(id)arg1 ;
-(void)_removeLegacyRecentSearchesData;
-(void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2 ;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1 ;
-(void)_migrateLegacyData;
-(void)clearRecentSearches;
-(id)recentSearches;
-(void)_addRecentSearchEntry:(id)arg1 ;
-(void)_saveRecentSearches;
-(void)_loadRecentSearchesIfNeeded;
-(id)recentSearchesMatchingPrefix:(id)arg1 ;
-(id)_recentSearchesDictionaries;
-(void)addRecentSearch:(id)arg1 ;
-(void)clearRecentSearchesAddedAfterDate:(id)arg1 ;
@end

