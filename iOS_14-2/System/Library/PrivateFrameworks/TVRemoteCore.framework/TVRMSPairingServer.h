/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol OS_dispatch_queue, TVRMSPairingServerDelegate;
#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSObject, NSString;

@interface TVRMSPairingServer : NSObject {

	CFDictionaryRef _HTTPServerConnections;
	CFHTTPServerRef _HTTPServer;
	NSObject*<OS_dispatch_queue> _HTTPServerQueue;
	NSString* _expectedPasscodeHash;
	NSString* _successfulPairingGUID;
	NSString* _successfulPairingServiceName;
	NSString* _advertisedDeviceName;
	NSString* _advertisedDeviceModel;
	unsigned short _port;
	id<TVRMSPairingServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRMSPairingServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned short port;                                       //@synthesize port=_port - In the implementation block
-(unsigned short)port;
-(id<TVRMSPairingServerDelegate>)delegate;
-(void)setDelegate:(id<TVRMSPairingServerDelegate>)arg1 ;
-(void)stopServer;
-(BOOL)startServerWithExpectedPasscodeHash:(id)arg1 advertisedDeviceName:(id)arg2 advertisedDeviceModel:(id)arg3 ;
-(id)_parsedQueryParametersWithQueryString:(id)arg1 ;
-(void)handleHTTPServerInvalidated;
-(void)handleHTTPServerDidReceiveError:(CFErrorRef)arg1 ;
-(void)handleHTTPServerDidOpenConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)handleHTTPServerDidCloseConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)handleHTTPServerConnectionInvalidated;
-(void)handleHTTPServerConnectionDidReceiveError:(CFErrorRef)arg1 ;
-(void)handleHTTPServerConnectionDidReceiveRequest:(CFHTTPServerRequestRef)arg1 ;
-(void)handleHTTPServerConnectionDidReplyToRequest:(CFHTTPServerRequestRef)arg1 withResponse:(CFHTTPServerResponseRef)arg2 ;
-(void)handleHTTPServerConnectionDidFailToReplyToRequest:(CFHTTPServerRequestRef)arg1 withResponse:(CFHTTPServerResponseRef)arg2 ;
@end

