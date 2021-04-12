/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


@protocol AUPBServing;
#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@class NSXPCConnection;

@interface RemoteAUPBServer : NSObject {

	NSXPCConnection* xpcConnection;
	id<AUPBServing> proxyInterface;
	OpaqueAUPBServerRef ref;
	vector<NSObject<OS_dispatch_semaphore> *, std::__1::allocator<NSObject<OS_dispatch_semaphore> *> >* replySemas;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection; 
@property (nonatomic,retain) id<AUPBServing> proxyInterface; 
@property (assign,nonatomic) OpaqueAUPBServerRef ref; 
-(void)dealloc;
-(id)description;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id<AUPBServing>)proxyInterface;
-(void)setProxyInterface:(id<AUPBServing>)arg1 ;
-(OpaqueAUPBServerRef)ref;
-(void)addSema:(id)arg1 ;
-(void)removeSema:(id)arg1 ;
-(void)signalAllSemaphores;
-(void)setRef:(OpaqueAUPBServerRef)arg1 ;
@end

