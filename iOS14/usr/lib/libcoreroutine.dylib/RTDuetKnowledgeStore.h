/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol _DKKnowledgeQuerying, OS_dispatch_queue;
@class NSObject;

@interface RTDuetKnowledgeStore : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;                //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(id)init;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)resume;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)executeQuery:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

