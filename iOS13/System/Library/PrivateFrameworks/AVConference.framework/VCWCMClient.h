/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)connection;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)setWcmClientDelegate:(id<WCMClientDelegate>)arg1 ;
-(void)startWCMClient;
-(void)stopWCMClient;
-(id<WCMClientDelegate>)wcmClientDelegate;
@end

