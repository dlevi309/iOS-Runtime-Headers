/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
*/

#import <libobjc.A.dylib/FudConnection.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary;

@interface FudInternalConnection : NSObject <FudConnection> {

	NSString* clientIdentifier;
	NSObject*<OS_dispatch_queue> handlerQueue;
	/*^block*/id messageHandler;
	NSMutableDictionary* pendingRequests;
	BOOL didStop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stop;
-(void)sendMessageToFud:(id)arg1 ;
-(void)sendMessageToFud:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 handlerQueue:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)handleInboundNotification:(id)arg1 ;
-(long long)getNextMessageID;
@end

