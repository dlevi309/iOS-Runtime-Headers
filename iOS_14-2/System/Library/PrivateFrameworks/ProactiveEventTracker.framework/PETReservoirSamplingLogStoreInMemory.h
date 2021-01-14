/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <libobjc.A.dylib/PETReservoirSamplingLogStore.h>

@class NSMutableData, NSString;

@interface PETReservoirSamplingLogStoreInMemory : NSObject <PETReservoirSamplingLogStore> {

	NSMutableData* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unlock;
-(id)init;
-(SCD_Struct_PE8*)remap:(unsigned long long*)arg1 ;
-(BOOL)lock;
-(unsigned long long)currentLength;
-(SCD_Struct_PE8*)headerMap:(unsigned long long*)arg1 ;
-(BOOL)changeLength:(unsigned long long)arg1 ;
-(BOOL)appendData:(id)arg1 andReturnMapPointer:(/*function pointer*/void**)arg2 ;
-(BOOL)attemptToRecreate;
@end

