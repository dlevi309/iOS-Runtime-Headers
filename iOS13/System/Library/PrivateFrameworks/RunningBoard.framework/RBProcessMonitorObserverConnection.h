/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBProcessMonitorObserverConnection.h>

@protocol RBProcessMonitorObserverConnection <NSObject>
@required
-(void)sendMessage:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3;

@end


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface RBProcessMonitorObserverConnection : NSObject <RBProcessMonitorObserverConnection> {

	NSObject*<OS_xpc_object> _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(void)sendMessage:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

