/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)available;
-(id)initWithConnection:(id)arg1 ;
-(void)setTag:(NSString *)arg1 ;
-(id<_RWIRelayConnectionToApplicationDelegate>)delegate;
-(void)close;
-(NSString *)tag;
-(void)setDelegate:(id<_RWIRelayConnectionToApplicationDelegate>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)_handleEvent:(id)arg1 ;
-(void)dealloc;
-(id)_deserializeMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 userInfo:(id)arg2 ;
@end

