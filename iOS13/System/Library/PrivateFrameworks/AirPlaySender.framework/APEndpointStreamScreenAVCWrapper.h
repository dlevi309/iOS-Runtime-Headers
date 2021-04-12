/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
*/

#import <AirPlaySender/AirPlaySender-Structs.h>
#import <libobjc.A.dylib/AVCVideoStreamDelegate.h>

@class AVCVideoStream, NSString;

@interface APEndpointStreamScreenAVCWrapper : NSObject <AVCVideoStreamDelegate> {

	int _clientPID;
	AVCVideoStream* _avcVideoStream;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stop;
-(void)streamDidStop:(id)arg1 ;
-(void)streamDidServerDie:(id)arg1 ;
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithClientPID:(CFNumberRef)arg1 ;
-(id)socketDictionaryWithLocalAddress:(OpaqueAPSNetworkAddressRef)arg1 remoteAddress:(OpaqueAPSNetworkAddressRef)arg2 rtpSourcePort:(unsigned short)arg3 isSharedSocket:(BOOL)arg4 ;
-(id)createVideoStreamConfigWithDirection:(long long)arg1 localAddress:(OpaqueAPSNetworkAddressRef)arg2 remoteAddress:(OpaqueAPSNetworkAddressRef)arg3 localAddrString:(id)arg4 remoteAddrString:(id)arg5 ;
-(int)createSocketWithAddress:(OpaqueAPSNetworkAddressRef)arg1 remoteAddress:(OpaqueAPSNetworkAddressRef)arg2 port:(unsigned short)arg3 socket:(int*)arg4 ;
-(int)startWithIPAddress:(OpaqueAPSNetworkAddressRef)arg1 remoteAddress:(OpaqueAPSNetworkAddressRef)arg2 ;
@end

