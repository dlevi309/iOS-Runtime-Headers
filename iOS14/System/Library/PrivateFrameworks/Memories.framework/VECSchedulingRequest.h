/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface VECSchedulingRequest : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	int _requestID;
	NSObject*<OS_dispatch_group> _doneOrCancelGroup;
	/*^block*/id _taskHandler;
	BOOL _queued;
	BOOL _cancelled;
	/*^block*/id _dellocHandler;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> doneOrCancelGroup;              //@synthesize doneOrCancelGroup=_doneOrCancelGroup - In the implementation block
@property (nonatomic,readonly) id taskHandler;                                              //@synthesize taskHandler=_taskHandler - In the implementation block
@property (nonatomic,readonly) id dellocHandler;                                            //@synthesize dellocHandler=_dellocHandler - In the implementation block
@property (nonatomic,readonly) int requestID;                                               //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled; 
-(int)requestID;
-(id)description;
-(BOOL)isCancelled;
-(void)dealloc;
-(id)taskHandler;
-(NSObject*<OS_dispatch_group>)doneOrCancelGroup;
-(id)initWithDoneOrCancelGroup:(id)arg1 taskHandler:(/*^block*/id)arg2 dellocHandler:(/*^block*/id)arg3 ;
-(void)markAsQueued;
-(void)markAsCompletedOrCancelled:(BOOL)arg1 ;
-(id)dellocHandler;
@end

