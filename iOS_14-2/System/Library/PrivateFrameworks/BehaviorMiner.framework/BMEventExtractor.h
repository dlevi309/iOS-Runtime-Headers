/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@class BMMiningTaskConfig;

@interface BMEventExtractor : NSObject {

	BOOL _shouldStop;
	BMMiningTaskConfig* _bmMiningTaskConfig;

}

@property (assign) BOOL shouldStop;                                      //@synthesize shouldStop=_shouldStop - In the implementation block
@property (retain) BMMiningTaskConfig * bmMiningTaskConfig;              //@synthesize bmMiningTaskConfig=_bmMiningTaskConfig - In the implementation block
-(id)init;
-(void)terminateEarly;
-(BOOL)shouldStop;
-(void)setShouldStop:(BOOL)arg1 ;
-(BMMiningTaskConfig *)bmMiningTaskConfig;
-(id)initWithBMMiningTaskConfig:(id)arg1 ;
-(id)extractEventsFilteredByTypes:(id)arg1 taskSpecificEventProviders:(id)arg2 error:(id*)arg3 ;
-(void)setBmMiningTaskConfig:(BMMiningTaskConfig *)arg1 ;
@end

