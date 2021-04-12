/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


@protocol _RWIRelayConnectionToApplicationDelegate, OS_xpc_object;
@class NSObject, NSString;

@interface _RWIRelayConnectionToApplication : NSObject {

	id<_RWIRelayConnectionToApplicationDelegate> _delegate;
	NSObject*<OS_xpc_object> _connection;
	NSString* _tag;

}

@property (assign,nonatomic,__weak) id<_RWIRelayConnectionToApplicationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;                                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL available; 
@property (nonatomic,copy) NSString * tag;                                                              //@synthesize tag=_tag - In the implementation block
-(void)dealloc;
-(void)close;
-(id<_RWIRelayConnectionToApplicationDelegate>)delegate;
-(void)setDelegate:(id<_RWIRelayConnectionToApplicationDelegate>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(BOOL)available;
-(void)_handleEvent:(id)arg1 ;
-(id)_deserializeMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 userInfo:(id)arg2 ;
@end

