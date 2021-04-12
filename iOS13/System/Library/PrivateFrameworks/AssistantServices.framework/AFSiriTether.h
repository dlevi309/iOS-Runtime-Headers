/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableArray;

@interface AFSiriTether : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	BOOL _isAttached;
	/*^block*/id _attachmentStatusChangedHandler;
	NSMutableArray* _pendingEvents;
	int _notifyToken;

}
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)attach:(/*^block*/id)arg1 ;
-(void)_logEvent:(id)arg1 ;
-(void)_attach:(/*^block*/id)arg1 ;
-(void)_connectionInterrupted:(id)arg1 ;
-(void)_connectionInvalid:(id)arg1 ;
-(void)_attachmentStatusUpdate:(BOOL)arg1 ;
-(void)_listenForLaunchNotification;
-(void)waitForAttachment:(double)arg1 ;
-(void)setAttachmentStatusChangedHandler:(/*^block*/id)arg1 ;
@end

