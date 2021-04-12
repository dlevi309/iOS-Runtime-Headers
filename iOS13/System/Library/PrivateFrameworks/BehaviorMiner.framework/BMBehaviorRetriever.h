/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@class BMBehaviorStorage;

@interface BMBehaviorRetriever : NSObject {

	BMBehaviorStorage* _storage;
	unsigned long long _fetchLimit;

}

@property (nonatomic,retain) BMBehaviorStorage * storage;                //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;              //@synthesize fetchLimit=_fetchLimit - In the implementation block
-(id)init;
-(BMBehaviorStorage *)storage;
-(id)initWithURL:(id)arg1 ;
-(void)setStorage:(BMBehaviorStorage *)arg1 ;
-(unsigned long long)fetchLimit;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(id)retrieveRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 ;
-(id)retrieveRulesWithFilters:(id)arg1 ;
-(id)retrieveRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 error:(id*)arg4 ;
@end

