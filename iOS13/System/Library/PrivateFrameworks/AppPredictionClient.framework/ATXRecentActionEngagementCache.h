/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface ATXRecentActionEngagementCache : NSObject {

	NSString* _recentMLEngagementCachePath;
	NSString* _recentHeuristicEngagementCachePath;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(id)initWithCacheDirectory:(id)arg1 ;
-(id)recentActions;
-(void)addEngagedAction:(id)arg1 ;
-(void)clearRecentEngagements;
-(void)clearRecentMLEngagementsExceptForActions:(id)arg1 ;
-(void)clearRecentHeuristicEngagementsExceptForActions:(id)arg1 ;
-(id)_getAllCachedActionsNoSync;
-(id)_recentActionsNoSyncForCacheAtPath:(id)arg1 ;
-(void)_addEngagedActionSetNoSync:(id)arg1 toCacheAtPath:(id)arg2 ;
-(void)_addEngagedActionNoSync:(id)arg1 toCacheAtPath:(id)arg2 ;
-(void)_serializeAndWriteNoSyncActionSet:(id)arg1 toCacheAtPath:(id)arg2 ;
-(id)exceptionsFoundInCacheAtPath:(id)arg1 forCandidateExceptions:(id)arg2 ;
-(void)clearRecentEngagementsFromCacheAtPath:(id)arg1 withExceptionActions:(id)arg2 ;
@end

