/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/


@class NSXPCConnection;

@interface LiveFSClient : NSObject {

	NSXPCConnection* conn;

}
+(id)newConnectionForService:(id)arg1 ;
+(id)interfaceForListeners;
+(id)supportDirURL:(unsigned long long)arg1 forURL:(id)arg2 daemonPrefName:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(id)initConnectionForService:(id)arg1 ;
-(void)unlockVolume:(id)arg1 password:(id)arg2 saveToKeychain:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)volumes:(id*)arg1 ;
-(void)listenerForVolume:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)listenerForVolume:(id)arg1 error:(id*)arg2 ;
-(id)forgetVolume:(id)arg1 ;
-(id)forgetVolume:(id)arg1 withFlags:(unsigned)arg2 ;
-(id)terminateDevice:(id)arg1 ;
@end

