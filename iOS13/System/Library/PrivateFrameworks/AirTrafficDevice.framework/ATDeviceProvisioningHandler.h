/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>

@class ATDeviceSettings, ATGrappaSession, NSString;

@interface ATDeviceProvisioningHandler : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	ATDeviceSettings* _settings;
	ATGrappaSession* _grappaSession;
	double _linkOpenTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)_sendRegisterEndpointRequestOnMessageLink:(id)arg1 ;
-(void)_handleRegisterEndpointRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_handleCreateSessionRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_handleBeginSessionRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(id)_getEndpointInfo;
-(void)_processRegisterEndpointResponse:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_sendCreateSessionRequestWithData:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_processCreateSessionResponse:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_sendBeginSessionRequestOnMessageLink:(id)arg1 ;
-(void)_processBeginSessionResponse:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_setMessageLinkAsInitialized:(id)arg1 ;
@end

