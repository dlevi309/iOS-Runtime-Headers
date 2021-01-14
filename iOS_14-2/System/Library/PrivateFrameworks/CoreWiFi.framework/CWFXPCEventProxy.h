/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <libobjc.A.dylib/CWFXPCEventProtocolPrivate.h>
#import <libobjc.A.dylib/CWFXPCEventProtocolPublic.h>

@protocol OS_dispatch_queue, CWFXPCEventProxyDelegate;
@class NSObject, NSMutableDictionary;

@interface CWFXPCEventProxy : NSObject <CWFXPCEventProtocolPrivate, CWFXPCEventProtocolPublic> {

	NSObject*<OS_dispatch_queue> _mutex;
	NSMutableDictionary* _mutableEventAckMap;
	id<CWFXPCEventProxyDelegate> _delegate;

}

@property (retain) id<CWFXPCEventProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)receivedAcknowledgedXPCEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
-(id<CWFXPCEventProxyDelegate>)delegate;
-(void)setDelegate:(id<CWFXPCEventProxyDelegate>)arg1 ;
-(void)__acknowledgeEventWithUUID:(id)arg1 ;
-(void)receivedXPCEvent:(id)arg1 ;
@end

