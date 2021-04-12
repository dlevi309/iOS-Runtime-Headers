/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/

#import <WelcomeKitCore/WLSocketHandler.h>

@protocol OS_dispatch_source, OS_dispatch_queue, WLDeviceDiscoverySocketHandlerDelegate;
@class NSString, NSObject, WLSourceDevice, NSArray;

@interface WLDeviceDiscoverySocketHandler : WLSocketHandler {

	NSString* _srpPassword;
	NSObject*<OS_dispatch_source> _readSource;
	NSObject*<OS_dispatch_queue> _writeQueue;
	WLSourceDevice* _sourceDevice;
	NSArray* _priorConnectionFailureReasons;
	int _sockfd;
	id<WLDeviceDiscoverySocketHandlerDelegate> _delegate;

}

@property (nonatomic,readonly) int sockfd;                                                            //@synthesize sockfd=_sockfd - In the implementation block
@property (assign,nonatomic,__weak) id<WLDeviceDiscoverySocketHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)close;
-(id<WLDeviceDiscoverySocketHandlerDelegate>)delegate;
-(void)setDelegate:(id<WLDeviceDiscoverySocketHandlerDelegate>)arg1 ;
-(void)resume;
-(void)suspend;
-(void)invalidateWithError:(id)arg1 ;
-(void)sendData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)sockfd;
-(id)_commandStringWithData:(id)arg1 ;
-(void)_performSRPAuthenticationAndHandshake;
-(BOOL)_didReceiveHandshakeData:(id)arg1 ;
-(id)_handshakeResponseData;
-(id)initWithSocket:(int)arg1 srpPassword:(id)arg2 delegate:(id)arg3 ;
-(id)_okResponseData;
-(id)_handshakeCommandData;
@end

