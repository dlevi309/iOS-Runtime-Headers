/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSOperationQueue;

@interface SCKAsyncSerialQueue : NSObject {

	NSOperationQueue* _serialOperationQueue;

}

@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;              //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
@property (getter=isSuspended) BOOL suspended; 
-(BOOL)isSuspended;
-(id)init;
-(void)waitUntilEmpty;
-(void)setSuspended:(BOOL)arg1 ;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)serialOperationQueue;
@end

