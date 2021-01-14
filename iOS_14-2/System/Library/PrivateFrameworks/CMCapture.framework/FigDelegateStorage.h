/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface FigDelegateStorage : NSObject {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _delegate;
	os_unfair_lock_s _lock;

}

@property (readonly) id delegate; 
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
+(void)initialize;
-(id)init;
-(id)delegate;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)dealloc;
@end

