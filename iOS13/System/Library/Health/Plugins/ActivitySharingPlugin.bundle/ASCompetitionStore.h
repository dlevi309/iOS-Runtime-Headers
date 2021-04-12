/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSMutableDictionary;

@interface ASCompetitionStore : NSObject {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _currentCompetitionListCache;
	NSMutableDictionary* _archivedCompetitionListCache;
	NSMutableDictionary* _remoteCompetitionListCache;

}
-(id)initWithProfile:(id)arg1 ;
-(void)deleteCachedCompetitions;
-(id)archivedCompetitionListForFriendWithUUID:(id)arg1 ;
-(id)currentRemoteCompetitionForContact:(id)arg1 ;
-(id)currentCompetitionListForFriendWithUUID:(id)arg1 ;
-(BOOL)saveCompetitionLists:(id)arg1 ;
-(BOOL)saveRemoteCompetitionList:(id)arg1 ;
-(BOOL)loadCachedCompetitions;
-(void)_queue_saveCompetitionListsToCache:(id)arg1 owner:(long long)arg2 ;
-(id)_cachedCompetitionListForFriendWithUUID:(id)arg1 type:(long long)arg2 owner:(long long)arg3 ;
-(BOOL)_saveCompetitionLists:(id)arg1 owner:(long long)arg2 ;
-(BOOL)_saveCompetitionListToDatabase:(id)arg1 owner:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_removeCompetitionsWithFriendFromDatabase:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_saveCompetitionsToDatabase:(id)arg1 friendUUID:(id)arg2 type:(long long)arg3 error:(id*)arg4 ;
-(id)_queue_competitionListCacheForType:(long long)arg1 owner:(long long)arg2 ;
@end

