/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSMutableArray;

@interface PHAJobWorkInfoReader : NSObject {

	NSMutableArray* _workInfosQueue;
	unsigned long long _fetchLimit;

}

@property (assign,nonatomic) unsigned long long fetchLimit;                //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long queueCount; 
-(id)init;
-(unsigned long long)fetchLimit;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(unsigned long long)queueCount;
-(id)workInfoWithCount:(unsigned long long)arg1 fetchBlock:(/*^block*/id)arg2 ;
@end

