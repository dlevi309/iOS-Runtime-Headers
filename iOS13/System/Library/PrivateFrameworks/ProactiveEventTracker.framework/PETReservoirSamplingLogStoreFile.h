/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <libobjc.A.dylib/PETReservoirSamplingLogStore.h>

@class NSString;

@interface PETReservoirSamplingLogStoreFile : NSObject <PETReservoirSamplingLogStore> {

	NSString* _path;
	void* _ptr;
	unsigned long long _mapLen;
	int _fd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)lock;
-(void)unlock;
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)currentLength;
-(SCD_Struct_PE8*)remap:(unsigned long long*)arg1 ;
-(SCD_Struct_PE8*)headerMap:(unsigned long long*)arg1 ;
-(BOOL)changeLength:(unsigned long long)arg1 ;
-(BOOL)appendData:(id)arg1 andReturnMapPointer:(/*function pointer*/void**)arg2 ;
-(BOOL)attemptToRecreate;
-(void)_unmap;
@end

