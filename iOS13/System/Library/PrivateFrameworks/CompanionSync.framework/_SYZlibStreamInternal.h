/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)setInputSize:(long long)arg1 ;
-(void)setOutputSize:(long long)arg1 ;
-(long long)inputRoom;
-(void*)inputPtr;
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

