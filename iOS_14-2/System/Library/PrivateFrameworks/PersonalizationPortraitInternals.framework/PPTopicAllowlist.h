/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASCFBurstTrie, PPTrialWrapper;

@interface PPTopicAllowlist : NSObject {

	_PASCFBurstTrie* _allowlistTrie;
	PPTrialWrapper* _trialWrapper;

}
+(id)sharedInstance;
+(id)_keyFor:(id)arg1 of:(id)arg2 ;
-(id)initWithTrialWrapper:(id)arg1 ;
-(void)_loadAssetData;
-(BOOL)shouldBypassAllowlist:(id)arg1 ;
-(BOOL)_topicIsAllowedForClientProcess:(id)arg1 topic:(id)arg2 ;
-(id)indicesOfAllowedTopicsInRecordArray:(id)arg1 clientProcess:(id)arg2 ;
-(id)indicesOfAllowedTopicsInScoredTopicArray:(id)arg1 clientProcess:(id)arg2 ;
-(id)filterTopicDictionary:(id)arg1 clientProcess:(id)arg2 ;
@end

