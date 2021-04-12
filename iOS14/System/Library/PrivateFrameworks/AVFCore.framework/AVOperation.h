/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError;

@interface AVOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	long long _status;
	NSError* _error;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
+(void)initialize;
+(long long)statusOfOperations:(id)arg1 error:(id*)arg2 ;
-(void)markAsFailedWithError:(id)arg1 ;
-(void)markAsCompleted;
-(id)init;
-(void)markAsCancelled;
-(BOOL)evaluateDependenciesAndMarkAsExecuting;
-(BOOL)_setStatus:(long long)arg1 error:(id)arg2 resultingStatus:(long long*)arg3 failureReason:(id*)arg4 ;
-(BOOL)isFinished;
-(NSError *)error;
-(void)didEnterTerminalState;
-(BOOL)isReady;
-(BOOL)isExecuting;
-(long long)status;
-(void)dealloc;
@end

