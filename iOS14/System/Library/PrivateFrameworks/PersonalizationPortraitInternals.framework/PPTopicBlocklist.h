/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASCFBurstTrie, PPTrialWrapper;

@interface PPTopicBlocklist : NSObject {

	_PASCFBurstTrie* _blocklistTrie;
	PPTrialWrapper* _trialWrapper;

}
+(id)sharedInstance;
-(id)initWithTrialWrapper:(id)arg1 ;
-(void)_loadAssetData;
-(BOOL)shouldBlock:(id)arg1 ;
-(id)indicesOfBlockedTopicsInRecordArray:(id)arg1 ;
-(id)indicesOfBlockedTopicsInScoredTopicArray:(id)arg1 ;
@end

