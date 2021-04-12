/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSData, NSIndexSet;

@interface ATXActionCacheClientReader : NSObject {

	NSData* _scoredActionsChunk;
	NSIndexSet* _lockscreenPredictionIndices;

}

@property (nonatomic,readonly) NSIndexSet * lockscreenPredictionIndices;              //@synthesize lockscreenPredictionIndices=_lockscreenPredictionIndices - In the implementation block
-(unsigned long long)chunkCount;
-(id)init;
-(id)actionsWithConsumerSubType:(unsigned char)arg1 limit:(long long)arg2 ;
-(id)initWithChunks:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSIndexSet *)lockscreenPredictionIndices;
-(id)_predicateForInstalledAndNonEngagedPredictions:(id)arg1 ;
-(id)actionsWithLimit:(long long)arg1 shouldFilterRestrictedAppsAndRecentEngagements:(BOOL)arg2 ;
-(id)_getLockScreenPredictionIndices:(id)arg1 ;
-(id)lockscreenPredictionIndicesUpToLimit:(long long)arg1 ;
@end

