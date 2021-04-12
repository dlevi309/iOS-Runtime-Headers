/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Foundation/NSOperation.h>

@interface SCKAsyncBlockOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) id block;              //@synthesize block=_block - In the implementation block
-(void)start;
-(id)block;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

