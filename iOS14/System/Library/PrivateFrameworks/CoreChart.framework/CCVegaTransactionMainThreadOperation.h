/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface CCVegaTransactionMainThreadOperation : NSObject {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	/*^block*/id _block;

}
-(id)init;
-(void)runBlock;
-(void)cancel;
-(void)waitForBlockReady;
-(void)provideBlock:(/*^block*/id)arg1 ;
@end

