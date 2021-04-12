/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSData, NSIndexSet;

@interface ATXActionCacheClientReader : NSObject {

	NSData* _scoredActionsChunk;
	NSIndexSet* _lockscreenPredictionIndices;

}

@property (nonatomic,readonly) NSIndexSet * lockscreenPredictionIndices;              //@synthesize lockscreenPredictionIndices=_lockscreenPredictionIndices - In the implementation block
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithChunks:(id)arg1 ;
-(unsigned long long)chunkCount;
-(id)actionsWithConsumerSubType:(unsigned char)arg1 limit:(long long)arg2 ;
-(id)_predicateForInstalledAndNonEngagedPredictions:(id)arg1 ;
-(id)actionsWithLimit:(long long)arg1 shouldFilterRestrictedAppsAndRecentEngagements:(BOOL)arg2 ;
-(id)_getLockScreenPredictionIndices:(id)arg1 ;
-(NSIndexSet *)lockscreenPredictionIndices;
@end

