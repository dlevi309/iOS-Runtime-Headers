/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <Foundation/NSOperation.h>

@interface FCAsyncBlockOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) id block;              //@synthesize block=_block - In the implementation block
+(id)asyncBlockOperationWithBlock:(/*^block*/id)arg1 ;
+(id)asyncBlockOperationWithMainThreadBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)start;
-(id)block;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

