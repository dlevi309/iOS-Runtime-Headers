/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(long long)status;
-(void)markAsFailedWithError:(id)arg1 ;
-(void)markAsCompleted;
-(BOOL)evaluateDependenciesAndMarkAsExecuting;
-(void)markAsCancelled;
-(void)didEnterTerminalState;
-(BOOL)_setStatus:(long long)arg1 error:(id)arg2 resultingStatus:(long long*)arg3 failureReason:(id*)arg4 ;
@end

