/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFUserNotificationServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSObject;

@interface AFUserNotificationProvider : NSObject <AFUserNotificationServiceDelegate> {

	NSXPCConnection* _connection;
	NSMutableDictionary* _responseHandlersByNotificationID;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)_connection;
-(void)withdrawNotificationRequestWithIdentifier:(id)arg1 ;
-(void)receivedNotificationResponse:(id)arg1 ;
-(void)postNotificationRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end

