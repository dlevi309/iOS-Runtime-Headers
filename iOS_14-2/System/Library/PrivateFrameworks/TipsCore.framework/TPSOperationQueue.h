/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <Foundation/NSOperationQueue.h>

@class TPSOperationQueueCountObserver;

@interface TPSOperationQueue : NSOperationQueue {

	TPSOperationQueueCountObserver* _observer;

}

@property (nonatomic,retain) TPSOperationQueueCountObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) id completionBlock; 
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setObserver:(TPSOperationQueueCountObserver *)arg1 ;
-(TPSOperationQueueCountObserver *)observer;
-(void)addOperationWithAsyncBlock:(/*^block*/id)arg1 ;
@end

