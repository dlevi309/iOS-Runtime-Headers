/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject {

	NSMutableArray* _recentSearchEntries;

}
+(id)_defaultsKey;
+(BOOL)_shouldTrackSearches;
+(unsigned long long)_maximumNumberOfSearchesToTrack;
-(void)clearRecentSearches;
-(id)recentSearches;
-(void)_addRecentSearchEntry:(id)arg1 ;
-(void)_saveRecentSearches;
-(void)_loadRecentSearchesIfNeeded;
-(id)recentSearchesMatchingPrefix:(id)arg1 ;
-(void)_removeLegacyRecentSearchesData;
-(void)_migrateLegacyData;
-(id)_recentSearchesDictionaries;
-(void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2 ;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1 ;
-(void)addRecentSearch:(id)arg1 ;
-(void)clearRecentSearchesAddedAfterDate:(id)arg1 ;
-(void)_addLegacySearch:(id)arg1 ;
@end

