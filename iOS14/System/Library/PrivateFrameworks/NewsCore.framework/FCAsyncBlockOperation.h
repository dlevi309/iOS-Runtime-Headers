/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <Foundation/NSOperation.h>

@interface FCAsyncBlockOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) id block;              //@synthesize block=_block - In the implementation block
+(id)asyncBlockOperationWithMainThreadBlock:(/*^block*/id)arg1 ;
+(id)asyncBlockOperationWithBlock:(/*^block*/id)arg1 ;
-(id)block;
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isExecuting;
@end

