/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <Foundation/NSOperation.h>

@class NSError;

@interface TPSAsyncOperation : NSOperation {

	os_unfair_lock_s _lock;
	BOOL _executing;
	BOOL _finished;
	BOOL _cancelled;
	/*^block*/id _preCompletionBlock;
	NSError* _error;

}

@property (nonatomic,copy) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id preCompletionBlock;              //@synthesize preCompletionBlock=_preCompletionBlock - In the implementation block
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(NSError *)error;
-(void)setPreCompletionBlock:(id)arg1 ;
-(void)lockExec:(/*^block*/id)arg1 ;
-(id)preCompletionBlock;
-(BOOL)isExecuting;
-(void)finishWithError:(id)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
@end

