/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSArray, NSIndexSet;

@interface ATXDisplayCacheIntermediateFormat : NSObject {

	NSArray* _actions;
	NSArray* _predictionChunks;
	NSIndexSet* _lockscreenPredictionIndices;

}

@property (nonatomic,readonly) NSArray * actions;                                     //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSArray * predictionChunks;                            //@synthesize predictionChunks=_predictionChunks - In the implementation block
@property (nonatomic,readonly) NSIndexSet * lockscreenPredictionIndices;              //@synthesize lockscreenPredictionIndices=_lockscreenPredictionIndices - In the implementation block
+(id)fromActions:(id)arg1 ;
-(NSArray *)actions;
-(NSIndexSet *)lockscreenPredictionIndices;
-(NSArray *)predictionChunks;
@end

