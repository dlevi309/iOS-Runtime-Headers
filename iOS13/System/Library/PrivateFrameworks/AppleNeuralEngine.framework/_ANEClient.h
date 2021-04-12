/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sandboxExtensionForModel:(id)arg1 ;
+(id)sharedPrivateConnection;
-(void)dealloc;
-(_ANEDaemonConnection *)conn;
-(NSArray *)queues;
-(id)initWithRestrictedAccessAllowed:(BOOL)arg1 ;
-(BOOL)doLoadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)doEvaluateDirectWithModel:(id)arg1 request:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)doUnloadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)compileModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)loadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)evaluateWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 qos:(unsigned)arg4 error:(id*)arg5 ;
-(BOOL)unloadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)compiledModelExistsFor:(id)arg1 ;
-(void)purgeCompiledModel:(id)arg1 ;
-(BOOL)beginRealTimeTask;
-(BOOL)endRealTimeTask;
-(BOOL)loadRealTimeModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)evaluateRealTimeWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 error:(id*)arg4 ;
-(BOOL)unloadRealTimeModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)echo:(id)arg1 ;
@end

