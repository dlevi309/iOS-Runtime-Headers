/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
*/


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface AXUIClientMessenger : NSObject {

	NSString* _clientIdentifier;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,copy) NSString * clientIdentifier;                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
+(id)clientMessengerWithIdentifier:(id)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)init;
-(void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completionRequiresWritingBlock:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)description;
-(NSObject*<OS_xpc_object>)connection;
-(id)initWithClientIdentifier:(id)arg1 connection:(id)arg2 ;
-(id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSString *)clientIdentifier;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

