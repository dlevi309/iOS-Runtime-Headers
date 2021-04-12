/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError;

@interface ICAsyncOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _isExecuting;
	BOOL _isFinished;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)init;
-(NSError *)error;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(void)finish;
-(void)_execute;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
@end

