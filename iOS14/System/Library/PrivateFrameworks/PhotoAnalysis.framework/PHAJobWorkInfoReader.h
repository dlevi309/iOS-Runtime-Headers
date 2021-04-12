/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSMutableArray;

@interface PHAJobWorkInfoReader : NSObject {

	NSMutableArray* _workInfosQueue;
	unsigned long long _fetchLimit;

}

@property (assign,nonatomic) unsigned long long fetchLimit;                //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long queueCount; 
-(unsigned long long)fetchLimit;
-(id)init;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(id)workInfoWithCount:(unsigned long long)arg1 fetchBlock:(/*^block*/id)arg2 ;
-(unsigned long long)queueCount;
@end

