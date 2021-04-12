/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
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
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 ;
@end

