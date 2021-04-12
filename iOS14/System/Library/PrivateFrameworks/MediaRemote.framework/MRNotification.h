/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSDictionary, NSObject;

@interface MRNotification : NSObject {

	NSString* _notification;
	NSDictionary* _userInfo;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _xpcMessage;

}

@property (nonatomic,readonly) NSString * notification;                         //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcMessage;               //@synthesize xpcMessage=_xpcMessage - In the implementation block
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)notification;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithNotification:(id)arg1 userInfo:(id)arg2 queue:(id)arg3 ;
-(NSObject*<OS_xpc_object>)xpcMessage;
@end

