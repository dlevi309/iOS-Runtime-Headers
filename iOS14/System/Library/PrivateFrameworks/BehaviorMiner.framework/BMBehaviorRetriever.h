/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@class BMBehaviorStorage;

@interface BMBehaviorRetriever : NSObject {

	BMBehaviorStorage* _storage;
	unsigned long long _fetchLimit;

}

@property (nonatomic,retain) BMBehaviorStorage * storage;                //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;              //@synthesize fetchLimit=_fetchLimit - In the implementation block
-(void)setStorage:(BMBehaviorStorage *)arg1 ;
-(unsigned long long)fetchLimit;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(BMBehaviorStorage *)storage;
-(id)retrieveRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 error:(id*)arg4 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(id)initWithURL:(id)arg1 taskSpecificItemTypes:(id)arg2 ;
-(id)retrieveRulesWithAbsoluteSupport:(unsigned long long)arg1 support:(double)arg2 confidence:(double)arg3 conviction:(double)arg4 lift:(double)arg5 rulePowerFactor:(double)arg6 uniqueDaysLastWeek:(unsigned long long)arg7 uniqueDaysTotal:(unsigned long long)arg8 filters:(id)arg9 error:(id*)arg10 ;
-(id)retrieveRulesWithFilters:(id)arg1 ;
-(id)retrieveRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 ;
@end

