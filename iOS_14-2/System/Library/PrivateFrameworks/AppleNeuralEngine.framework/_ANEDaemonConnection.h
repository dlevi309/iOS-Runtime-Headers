/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
*/

#import <libobjc.A.dylib/_ANEDaemonProtocol.h>

@class NSXPCConnection;

@interface _ANEDaemonConnection : NSObject <_ANEDaemonProtocol> {

	BOOL _restricted;
	NSXPCConnection* _daemonConnection;

}

@property (nonatomic,readonly) NSXPCConnection * daemonConnection;              //@synthesize daemonConnection=_daemonConnection - In the implementation block
@property (nonatomic,readonly) BOOL restricted;                                 //@synthesize restricted=_restricted - In the implementation block
+(id)daemonConnection;
+(id)daemonConnectionRestricted;
-(id)init;
-(BOOL)restricted;
-(void)dealloc;
-(NSXPCConnection *)daemonConnection;
-(id)initWithMachServiceName:(id)arg1 restricted:(BOOL)arg2 ;
-(void)beginRealTimeTaskWithReply:(/*^block*/id)arg1 ;
-(void)endRealTimeTaskWithReply:(/*^block*/id)arg1 ;
-(void)echo:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)compileModel:(id)arg1 sandboxExtension:(id)arg2 options:(id)arg3 qos:(unsigned)arg4 withReply:(/*^block*/id)arg5 ;
-(void)loadModel:(id)arg1 sandboxExtension:(id)arg2 options:(id)arg3 qos:(unsigned)arg4 withReply:(/*^block*/id)arg5 ;
-(void)unloadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 withReply:(/*^block*/id)arg4 ;
-(void)compiledModelExistsFor:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)purgeCompiledModel:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end

