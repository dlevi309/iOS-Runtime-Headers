/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_addEngagedActionNoSync:(id)arg1 toCacheAtPath:(id)arg2 ;
-(id)init;
-(void)_serializeAndWriteNoSyncActionSet:(id)arg1 toCacheAtPath:(id)arg2 ;
-(void)addEngagedAction:(id)arg1 ;
-(id)initWithCacheDirectory:(id)arg1 ;
-(void)clearRecentHeuristicEngagementsExceptForActions:(id)arg1 ;
-(id)_getAllCachedActionsNoSync;
-(void)clearRecentMLEngagementsExceptForActions:(id)arg1 ;
-(id)_recentActionsNoSyncForCacheAtPath:(id)arg1 ;
-(void)_addEngagedActionSetNoSync:(id)arg1 toCacheAtPath:(id)arg2 ;
-(void)clearRecentEngagements;
-(id)recentActions;
-(id)exceptionsFoundInCacheAtPath:(id)arg1 forCandidateExceptions:(id)arg2 ;
-(void)clearRecentEngagementsFromCacheAtPath:(id)arg1 withExceptionActions:(id)arg2 ;
@end

