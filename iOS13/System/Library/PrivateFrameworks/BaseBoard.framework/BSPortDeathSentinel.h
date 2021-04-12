/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class BSMachPortSendRight, NSObject, NSString;

@interface BSPortDeathSentinel : NSObject <BSInvalidatable> {

	BSMachPortSendRight* _sendRight;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_source> _source;
	BOOL _activated;
	BOOL _invalidated;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_callOutQueue;
+(void)monitorSendRight:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isValid;
-(id)initWithSendRight:(id)arg1 ;
-(void)activateWithHandler:(/*^block*/id)arg1 ;
@end

