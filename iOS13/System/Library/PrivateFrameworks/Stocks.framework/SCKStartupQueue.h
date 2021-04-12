/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class SCKAsyncSerialQueue;

@interface SCKStartupQueue : NSObject {

	SCKAsyncSerialQueue* _startupTaskQueue;

}

@property (nonatomic,retain) SCKAsyncSerialQueue * startupTaskQueue;              //@synthesize startupTaskQueue=_startupTaskQueue - In the implementation block
-(id)initWithDeferredStartup:(BOOL)arg1 ;
-(void)executeAfterStartup:(/*^block*/id)arg1 ;
-(void)enqueueStartupBlock:(/*^block*/id)arg1 ;
-(SCKAsyncSerialQueue *)startupTaskQueue;
-(void)setStartupTaskQueue:(SCKAsyncSerialQueue *)arg1 ;
@end

