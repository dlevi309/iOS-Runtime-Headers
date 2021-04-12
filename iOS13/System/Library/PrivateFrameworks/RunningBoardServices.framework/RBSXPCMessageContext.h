/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@protocol OS_xpc_object;
@class NSObject;

@interface RBSXPCMessageContext : NSObject {

	NSObject*<OS_xpc_object> _handoffToken;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
+(id)currentContext;
-(NSObject*<OS_xpc_object>)connection;
-(void)_unset;
-(void)_set;
-(id)_initWithHandoffToken:(id)arg1 ;
-(void)handoffToQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end

