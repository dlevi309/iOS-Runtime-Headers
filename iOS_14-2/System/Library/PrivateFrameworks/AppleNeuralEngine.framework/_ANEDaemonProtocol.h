/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
*/


@protocol _ANEDaemonProtocol
@required
-(void)compileModel:(id)arg1 sandboxExtension:(id)arg2 options:(id)arg3 qos:(unsigned)arg4 withReply:(/*^block*/id)arg5;
-(void)loadModel:(id)arg1 sandboxExtension:(id)arg2 options:(id)arg3 qos:(unsigned)arg4 withReply:(/*^block*/id)arg5;
-(void)unloadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 withReply:(/*^block*/id)arg4;
-(void)compiledModelExistsFor:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)purgeCompiledModel:(id)arg1 withReply:(/*^block*/id)arg2;

@end

