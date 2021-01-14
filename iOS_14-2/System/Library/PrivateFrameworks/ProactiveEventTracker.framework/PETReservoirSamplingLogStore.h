/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


@protocol PETReservoirSamplingLogStore <NSObject>
@required
-(void)unlock;
-(/*function pointer*/void**)remap:(unsigned long long*)arg1;
-(BOOL)lock;
-(unsigned long long)currentLength;
-(/*function pointer*/void**)headerMap:(unsigned long long*)arg1;
-(BOOL)changeLength:(unsigned long long)arg1;
-(BOOL)appendData:(id)arg1 andReturnMapPointer:(*)arg2;
-(BOOL)attemptToRecreate;

@end

