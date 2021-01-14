/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface SNFileSystem : NSObject {

	NSMutableArray* _requests;
	NSMutableDictionary* _taskCompletionMap;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * requests;                            //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * taskCompletionMap;              //@synthesize taskCompletionMap=_taskCompletionMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)removeRequest:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_removeRequest:(id)arg1 error:(id)arg2 ;
-(NSMutableDictionary *)taskCompletionMap;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)setTaskCompletionMap:(NSMutableDictionary *)arg1 ;
@end

