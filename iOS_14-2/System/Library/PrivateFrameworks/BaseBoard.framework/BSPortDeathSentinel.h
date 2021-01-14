/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class BSMachPortSendRight, NSObject, NSString;

@interface BSPortDeathSentinel : NSObject <BSInvalidatable> {

	BSMachPortSendRight* _sendRight;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_source> _source;
	BOOL _activated;
	BOOL _invalidated;
	NSObject*<OS_dispatch_queue> _callOutQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)monitorSendRight:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithSendRight:(id)arg1 ;
-(void)activateWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isValid;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

