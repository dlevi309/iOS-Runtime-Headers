/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/


@protocol _DKKnowledgeQuerying, OS_dispatch_queue;
@class NSObject, NSDate;

@interface ARPCorrelationTaskScheduler : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _bookmark;

}

@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (copy) NSDate * bookmark;                                                  //@synthesize bookmark=_bookmark - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(NSDate *)bookmark;
-(void)setBookmark:(NSDate *)arg1 ;
-(void)nowPlayingEventInserted:(id)arg1 ;
-(void)_executeCorrelationTask;
-(void)executeCorrelationTask;
@end

