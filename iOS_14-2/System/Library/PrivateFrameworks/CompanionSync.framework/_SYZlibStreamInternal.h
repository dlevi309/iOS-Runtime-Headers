/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/_SYStreamGuts.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface _SYZlibStreamInternal : _SYStreamGuts <NSLocking> {

	z_stream_s* _zStream;
	unsigned long long _inputSize;
	unsigned long long _outputSize;
	char* _input;
	char* _output;
	unsigned long long _writeOffset;
	unsigned long long _readOffset;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) long long inputRoom; 
@property (nonatomic,readonly) void* inputPtr; 
@property (nonatomic,readonly) long long outputAvailable; 
@property (nonatomic,readonly) const void* outputPtr; 
-(void)unlock;
-(id)init;
-(void)lock;
-(void)setInputSize:(long long)arg1 ;
-(void*)inputPtr;
-(void)setOutputSize:(long long)arg1 ;
-(void)dealloc;
-(long long)inputRoom;
-(long long)outputAvailable;
-(const void*)outputPtr;
-(void)synchronized:(/*^block*/id)arg1 ;
-(void)setZlibError:(int)arg1 forStream:(id)arg2 ;
-(void)setStatusForStream:(id)arg1 ;
-(long long)writeInputFromBuffer:(const void*)arg1 length:(long long)arg2 ;
-(long long)writeInputFromStream:(id)arg1 ;
-(long long)readOutputToBuffer:(void*)arg1 length:(long long)arg2 ;
-(long long)readOutputToStream:(id)arg1 ;
@end

