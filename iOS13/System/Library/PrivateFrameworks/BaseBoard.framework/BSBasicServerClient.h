/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSXPCServerClient.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface BSBasicServerClient : NSObject <BSXPCServerClient> {

	NSObject*<OS_xpc_object> _connection;
	int _resumed;
	int _cancelled;
	BOOL _managingResumeState;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperWithConnection:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(NSObject*<OS_xpc_object>)connection;
-(void)sendMessage:(id)arg1 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)sendMessageWithPacker:(/*^block*/id)arg1 replyHandler:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)sendMessageWithPacker:(/*^block*/id)arg1 ;
@end

