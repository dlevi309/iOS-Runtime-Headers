/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol LoopbackSocketTunnelDelegate;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface LoopbackSocketTunnel : NSObject {

	unsigned short _port;
	int sockFD;
	sockaddr_in sa;
	sockaddr_in vtpSA;
	NSObject* optionalArg;
	NSObject*<LoopbackSocketTunnelDelegate> _delegate;
	BOOL foundVTPIP;

}

@property (assign) NSObject * optionalArg; 
-(id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(int)sendPacketToVTP:(id)arg1 ;
-(void)getIPPort:(tagIPPORT*)arg1 ;
-(void)getVTPIPPort:(tagIPPORT*)arg1 ;
-(void)setVTPIP:(tagIPPORT*)arg1 ;
-(void)shutdownSocket;
-(int)serverLoopProc;
-(NSObject *)optionalArg;
-(void)setOptionalArg:(NSObject *)arg1 ;
@end

