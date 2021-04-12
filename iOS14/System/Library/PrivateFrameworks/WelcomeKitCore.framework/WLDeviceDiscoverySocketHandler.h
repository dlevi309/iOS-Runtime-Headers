/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)sockfd;
-(void)suspend;
-(id<WLDeviceDiscoverySocketHandlerDelegate>)delegate;
-(void)close;
-(void)sendData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<WLDeviceDiscoverySocketHandlerDelegate>)arg1 ;
-(void)invalidateWithError:(id)arg1 ;
-(void)resume;
-(id)_commandStringWithData:(id)arg1 ;
-(void)_performSRPAuthenticationAndHandshake;
-(BOOL)_didReceiveHandshakeData:(id)arg1 ;
-(id)_handshakeResponseData;
-(id)initWithSocket:(int)arg1 srpPassword:(id)arg2 delegate:(id)arg3 ;
-(id)_okResponseData;
-(id)_handshakeCommandData;
@end

