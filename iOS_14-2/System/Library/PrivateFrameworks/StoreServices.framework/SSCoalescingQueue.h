/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface SSCoalescingQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)executeBlock;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)source;
@end

