/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(OpaqueAUPBServerRef)ref;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id<AUPBServing>)proxyInterface;
-(void)setProxyInterface:(id<AUPBServing>)arg1 ;
-(void)setRef:(OpaqueAUPBServerRef)arg1 ;
-(id)description;
-(void)addSema:(id)arg1 ;
-(void)removeSema:(id)arg1 ;
-(void)signalAllSemaphores;
-(void)dealloc;
@end

