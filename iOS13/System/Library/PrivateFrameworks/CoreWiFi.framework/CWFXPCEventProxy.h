/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <libobjc.A.dylib/CWFXPCEventProtocol.h>
#import <libobjc.A.dylib/CWFPublicWiFiXPCEventProtocol.h>

@protocol OS_dispatch_queue, CWFXPCEventProxyDelegate;
@class NSObject, NSMutableDictionary;

@interface CWFXPCEventProxy : NSObject <CWFXPCEventProtocol, CWFPublicWiFiXPCEventProtocol> {

	NSObject*<OS_dispatch_queue> _mutex;
	NSMutableDictionary* _mutableEventAckMap;
	id<CWFXPCEventProxyDelegate> _delegate;

}

@property (assign) id<CWFXPCEventProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CWFXPCEventProxyDelegate>)delegate;
-(void)setDelegate:(id<CWFXPCEventProxyDelegate>)arg1 ;
-(void)__acknowledgeEventWithUUID:(id)arg1 ;
-(void)receivedXPCEvent:(id)arg1 ;
-(void)receivedAcknowledgedXPCEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

