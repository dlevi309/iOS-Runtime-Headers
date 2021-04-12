/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSError, NSObject;

@interface MSVAsyncOperation : NSOperation {

	BOOL __executing;
	BOOL __finished;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,copy) NSError * error;                                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,setter=_setExecuting:,getter=_isExecuting,nonatomic) BOOL _executing;              //@synthesize _executing=__executing - In the implementation block
@property (assign,setter=_setFinished:,getter=_isFinished,nonatomic) BOOL _finished;                 //@synthesize _finished=__finished - In the implementation block
-(id)init;
-(NSError *)error;
-(void)start;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(void)finish;
-(BOOL)_isFinished;
-(BOOL)_isExecuting;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)_setExecuting:(BOOL)arg1 ;
-(void)_setFinished:(BOOL)arg1 ;
@end

