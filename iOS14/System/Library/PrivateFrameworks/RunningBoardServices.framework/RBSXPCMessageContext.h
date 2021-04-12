/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@protocol OS_xpc_object;
@class NSObject;

@interface RBSXPCMessageContext : NSObject {

	NSObject*<OS_xpc_object> _handoffToken;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
+(void)runWithoutContext:(/*^block*/id)arg1 ;
+(id)currentContext;
-(void)handoffToQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSObject*<OS_xpc_object>)connection;
@end

