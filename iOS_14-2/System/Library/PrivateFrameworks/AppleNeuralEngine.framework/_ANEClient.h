/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
*/


@class _ANEDaemonConnection, NSArray;

@interface _ANEClient : NSObject {

	_ANEDaemonConnection* _conn;
	NSArray* _queues;

}

@property (nonatomic,readonly) _ANEDaemonConnection * conn;              //@synthesize conn=_conn - In the implementation block
@property (nonatomic,readonly) NSArray * queues;                         //@synthesize queues=_queues - In the implementation block
+(void)initialize;
+(id)sharedConnection;
+(id)sharedPrivateConnection;
+(id)sandboxExtensionForModel:(id)arg1 ;
-(NSArray *)queues;
-(BOOL)echo:(id)arg1 ;
-(_ANEDaemonConnection *)conn;
-(BOOL)compiledModelExistsFor:(id)arg1 ;
-(void)purgeCompiledModel:(id)arg1 ;
-(BOOL)loadRealTimeModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)loadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)unloadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)unloadRealTimeModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)evaluateRealTimeWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 error:(id*)arg4 ;
-(BOOL)evaluateWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 qos:(unsigned)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(BOOL)compileModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(id)initWithRestrictedAccessAllowed:(BOOL)arg1 ;
-(BOOL)doLoadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)doEvaluateDirectWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 qos:(unsigned)arg4 error:(id*)arg5 ;
-(BOOL)doUnloadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)beginRealTimeTask;
-(BOOL)endRealTimeTask;
@end

