/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
*/


@protocol OS_dispatch_queue, OS_xpc_object;
#import <SyncedDefaults/SyncedDefaults-Structs.h>
@class NSObject, NSString;

@interface SYDClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	NSString* _bundleIdentifier;
	NSString* _storeIdentifier;
	BOOL _additionalSource;

}
-(void)shutdown;
-(id)_newMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)sendMessageWithName:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)sendMessageWithName:(id)arg1 ;
-(void)sendMessageWithName:(id)arg1 userInfo:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(id)sendMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithQueue:(id)arg1 bundleIdentifier:(CFStringRef)arg2 storeIdentifier:(CFStringRef)arg3 additionalSource:(BOOL)arg4 ;
-(void)_createConnectionIfNecessary;
-(void)_resetConnection;
-(void)_sendMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_sendMessageNoReply:(id)arg1 ;
-(id)initWithQueue:(id)arg1 bundleIdentifier:(CFStringRef)arg2 storeIdentifier:(CFStringRef)arg3 ;
-(id)_sendMessageWithReplySync:(id)arg1 ;
@end

