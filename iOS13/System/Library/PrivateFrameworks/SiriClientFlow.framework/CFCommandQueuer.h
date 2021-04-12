/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CFCommandQueuer : NSObject {

	NSObject*<OS_dispatch_queue> _commandQueue;

}

@property (retain) NSObject*<OS_dispatch_queue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)commandQueue;
-(void)setCommandQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dispatchOneWayCommand:(id)arg1 withServiceHelper:(id)arg2 ;
-(void)dispatchCommand:(id)arg1 withServiceHelper:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dispatchBlock:(/*^block*/id)arg1 ;
-(id)initWithCommandIdentifier:(id)arg1 ;
-(void)dispatchCommand:(id)arg1 isOneWay:(BOOL)arg2 withServiceHelper:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)initQueuesWithIdentifier:(id)arg1 ;
@end

