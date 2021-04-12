/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)description;
-(void)sendMessage:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

