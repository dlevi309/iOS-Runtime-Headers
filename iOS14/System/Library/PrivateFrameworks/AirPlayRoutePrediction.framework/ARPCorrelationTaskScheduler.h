/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBookmark:(NSDate *)arg1 ;
-(NSDate *)bookmark;
-(void)executeCorrelationTask;
-(void)microLocationEventInserted:(id)arg1 ;
-(void)homeKitEventInserted:(id)arg1 ;
-(void)_executeCorrelationTask;
-(void)nowPlayingEventInserted:(id)arg1 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(void)_executeHomeControlNextActionCorrelationTask;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_executeHomeControlMicrolocationCorrelationTask;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(void)dealloc;
@end

