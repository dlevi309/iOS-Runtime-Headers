/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_xpc_object, OS_dispatch_queue, WCMClientDelegate;
@class NSObject;

@interface VCWCMClient : NSObject {

	NSObject*<OS_xpc_object> connection;
	NSObject*<OS_dispatch_queue> connectionQueue;
	NSObject*<WCMClientDelegate> wcmClientDelegate;

}

@property (readonly) NSObject*<OS_xpc_object> connection; 
@property (readonly) NSObject*<OS_dispatch_queue> connectionQueue; 
@property (nonatomic,retain) id<WCMClientDelegate> wcmClientDelegate; 
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(id)init;
-(NSObject*<OS_xpc_object>)connection;
-(void)dealloc;
-(void)setWcmClientDelegate:(id<WCMClientDelegate>)arg1 ;
-(void)startWCMClient;
-(void)stopWCMClient;
-(id<WCMClientDelegate>)wcmClientDelegate;
@end

