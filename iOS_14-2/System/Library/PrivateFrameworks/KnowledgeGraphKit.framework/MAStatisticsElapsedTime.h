/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@interface MAStatisticsElapsedTime : NSObject {

	double _elapsedTime;
	double _elapsedStart;
	long long _elapsedCounter;
	double _lastBeginTransactionTime;
	double _lastEndTransactionTime;

}
-(void)end;
-(void)begin;
-(id)init;
-(double)elapsedTime;
-(void)dealloc;
-(double)elapsedTimeSinceLastBeginTransaction;
-(double)elapsedTimeSinceLastEndTransaction;
-(BOOL)isTransactionPending;
@end

