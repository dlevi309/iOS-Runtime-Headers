/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(id)init;
-(id)dequeue;
-(NSMutableArray *)array;
-(unsigned long long)count;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)enqueue:(id)arg1 ;
-(void)setArray:(NSMutableArray *)arg1 ;
@end

