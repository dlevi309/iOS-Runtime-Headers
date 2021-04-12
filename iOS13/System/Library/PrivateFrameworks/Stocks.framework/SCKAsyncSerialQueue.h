/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSOperationQueue;

@interface SCKAsyncSerialQueue : NSObject {

	NSOperationQueue* _serialOperationQueue;

}

@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;              //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
@property (getter=isSuspended) BOOL suspended; 
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(NSOperationQueue *)serialOperationQueue;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(void)waitUntilEmpty;
@end

