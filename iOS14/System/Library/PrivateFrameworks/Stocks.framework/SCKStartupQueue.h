/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class SCKAsyncSerialQueue;

@interface SCKStartupQueue : NSObject {

	SCKAsyncSerialQueue* _startupTaskQueue;

}

@property (nonatomic,retain) SCKAsyncSerialQueue * startupTaskQueue;              //@synthesize startupTaskQueue=_startupTaskQueue - In the implementation block
-(void)setStartupTaskQueue:(SCKAsyncSerialQueue *)arg1 ;
-(void)enqueueStartupBlock:(/*^block*/id)arg1 ;
-(SCKAsyncSerialQueue *)startupTaskQueue;
-(id)initWithDeferredStartup:(BOOL)arg1 ;
-(void)executeAfterStartup:(/*^block*/id)arg1 ;
@end

