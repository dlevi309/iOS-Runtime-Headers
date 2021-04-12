/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)volumes:(id*)arg1 ;
-(void)listenerForVolume:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)listenerForVolume:(id)arg1 error:(id*)arg2 ;
-(id)forgetVolume:(id)arg1 ;
-(id)forgetVolume:(id)arg1 withFlags:(unsigned)arg2 ;
-(id)terminateDevice:(id)arg1 ;
@end

