/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@interface MAStatisticsElapsedTime : NSObject {

	double _elapsedTime;
	double _elapsedStart;
	long long _elapsedCounter;
	double _lastBeginTransactionTime;
	double _lastEndTransactionTime;

}
-(id)init;
-(void)dealloc;
-(void)end;
-(void)begin;
-(double)elapsedTime;
-(double)elapsedTimeSinceLastBeginTransaction;
-(double)elapsedTimeSinceLastEndTransaction;
-(BOOL)isTransactionPending;
@end

