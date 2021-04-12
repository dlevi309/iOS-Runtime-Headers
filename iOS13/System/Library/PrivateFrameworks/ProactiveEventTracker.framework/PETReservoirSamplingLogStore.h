/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


@protocol PETReservoirSamplingLogStore <NSObject>
@required
-(BOOL)lock;
-(void)unlock;
-(unsigned long long)currentLength;
-(/*function pointer*/void**)remap:(unsigned long long*)arg1;
-(/*function pointer*/void**)headerMap:(unsigned long long*)arg1;
-(BOOL)changeLength:(unsigned long long)arg1;
-(BOOL)appendData:(id)arg1 andReturnMapPointer:(*)arg2;
-(BOOL)attemptToRecreate;

@end

