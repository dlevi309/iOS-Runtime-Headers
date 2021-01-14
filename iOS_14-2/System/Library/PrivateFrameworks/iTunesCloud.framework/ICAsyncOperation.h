/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <Foundation/NSOperation.h>

@class NSOperationQueue, NSError;

@interface ICAsyncOperation : NSOperation {

	os_unfair_lock_s _asyncOperationLock;
	NSOperationQueue* _childOperationQueue;
	long long _qualityOfServiceForChildOperationQueue;
	BOOL _isExecuting;
	BOOL _isFinished;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)execute;
-(void)finish;
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(void)enqueueChildOperation:(id)arg1 ;
-(BOOL)isFinished;
-(NSError *)error;
-(void)_execute;
-(BOOL)isExecuting;
-(void)finishWithError:(id)arg1 ;
-(BOOL)isConcurrent;
@end

