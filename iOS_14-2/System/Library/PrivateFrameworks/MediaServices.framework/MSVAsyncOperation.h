/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(void)finish;
-(void)_setExecuting:(BOOL)arg1 ;
-(void)_setFinished:(BOOL)arg1 ;
-(id)init;
-(void)start;
-(BOOL)_isFinished;
-(BOOL)isAsynchronous;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(NSError *)error;
-(BOOL)_isExecuting;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(BOOL)isExecuting;
-(void)finishWithError:(id)arg1 ;
-(BOOL)isConcurrent;
@end

