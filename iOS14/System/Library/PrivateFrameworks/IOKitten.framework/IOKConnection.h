/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
*/


@class IOKService;

@interface IOKConnection : NSObject {

	unsigned _connection;

}

@property (nonatomic,readonly) unsigned connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) IOKService * service; 
-(BOOL)callMethodWithSelector:(unsigned)arg1 structInput:(const void*)arg2 structInputSize:(unsigned long long)arg3 structOutput:(void*)arg4 structOutputSize:(unsigned long long*)arg5 error:(id*)arg6 ;
-(id)init;
-(BOOL)unmapMemory64OfType:(unsigned)arg1 atAddress:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)callAsyncMethodWithSelector:(unsigned)arg1 wakePort:(unsigned)arg2 reference:(unsigned long long*)arg3 referenceCount:(unsigned)arg4 structInput:(const void*)arg5 structInputSize:(unsigned long long)arg6 structOutput:(void*)arg7 structOutputSize:(unsigned long long*)arg8 error:(id*)arg9 ;
-(BOOL)setNotificationPort:(id)arg1 ofType:(unsigned)arg2 withReference:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)trap:(unsigned)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)callMethodWithSelector:(unsigned)arg1 scalarInputs:(const unsigned long long*)arg2 scalarInputCount:(unsigned)arg3 structInput:(const void*)arg4 structInputSize:(unsigned long long)arg5 scalarOutputs:(unsigned long long*)arg6 scalarOutputCount:(unsigned*)arg7 structOutput:(void*)arg8 structOutputSize:(unsigned long long*)arg9 error:(id*)arg10 ;
-(BOOL)mapMemory64OfType:(unsigned)arg1 withOptions:(unsigned)arg2 atAddress:(unsigned long long*)arg3 ofSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)setProperties:(id)arg1 error:(id*)arg2 ;
-(id)initWithService:(id)arg1 ;
-(BOOL)trap:(unsigned)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)trap:(unsigned)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 error:(id*)arg6 ;
-(BOOL)trap:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)callAsyncMethodWithSelector:(unsigned)arg1 wakePort:(unsigned)arg2 reference:(unsigned long long*)arg3 referenceCount:(unsigned)arg4 scalarInputs:(const unsigned long long*)arg5 scalarInputCount:(unsigned)arg6 structInput:(const void*)arg7 structInputSize:(unsigned long long)arg8 scalarOutputs:(unsigned long long*)arg9 scalarOutputCount:(unsigned*)arg10 structOutput:(void*)arg11 structOutputSize:(unsigned long long*)arg12 error:(id*)arg13 ;
-(unsigned)connection;
-(BOOL)trap:(unsigned)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 p5:(unsigned long long)arg6 error:(id*)arg7 ;
-(BOOL)callMethodWithSelector:(unsigned)arg1 scalarInputs:(const unsigned long long*)arg2 scalarInputCount:(unsigned)arg3 scalarOutputs:(unsigned long long*)arg4 scalarOutputCount:(unsigned*)arg5 error:(id*)arg6 ;
-(BOOL)trap:(unsigned)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 p5:(unsigned long long)arg6 p6:(unsigned long long)arg7 error:(id*)arg8 ;
-(unsigned long long)hash;
-(BOOL)callAsyncMethodWithSelector:(unsigned)arg1 wakePort:(unsigned)arg2 reference:(unsigned long long*)arg3 referenceCount:(unsigned)arg4 scalarInputs:(const unsigned long long*)arg5 scalarInputCount:(unsigned)arg6 scalarOutputs:(unsigned long long*)arg7 scalarOutputCount:(unsigned*)arg8 error:(id*)arg9 ;
-(id)initWithService:(id)arg1 andType:(unsigned)arg2 ;
-(BOOL)setProperty:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)trap:(unsigned)arg1 p1:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(IOKService *)service;
-(void)dealloc;
@end

