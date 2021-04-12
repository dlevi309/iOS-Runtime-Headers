/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)sendMessageToFud:(id)arg1 ;
-(void)handleInboundNotification:(id)arg1 ;
-(void)stop;
-(id)initWithClientIdentifier:(id)arg1 handlerQueue:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)sendMessageToFud:(id)arg1 reply:(/*^block*/id)arg2 ;
-(long long)getNextMessageID;
-(void)dealloc;
@end

