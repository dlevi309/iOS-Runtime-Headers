/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface AdQueue : NSObject {

	NSMutableArray* _array;
	NSObject*<OS_dispatch_queue> _concurrentQueue;

}

@property (nonatomic,retain) NSMutableArray * array;                                    //@synthesize array=_array - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
-(id)init;
-(unsigned long long)count;
-(NSMutableArray *)array;
-(void)setArray:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(id)dequeue;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)enqueue:(id)arg1 ;
@end

