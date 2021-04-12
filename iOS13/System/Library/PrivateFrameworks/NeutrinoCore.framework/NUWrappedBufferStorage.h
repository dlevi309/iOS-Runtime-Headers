/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NUAbstractBufferStorage.h>
#import <libobjc.A.dylib/NUBuffer.h>
#import <libobjc.A.dylib/NUMutableBuffer.h>

@class NSString, NUPixelFormat;

@interface NUWrappedBufferStorage : _NUAbstractBufferStorage <NUBuffer, NUMutableBuffer> {

	long long _length;
	long long _rowBytes;
	void* _bytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@property (nonatomic,readonly) long long rowBytes;                  //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,readonly) const void* bytes;                   //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) void* mutableBytes; 
-(NSString *)description;
-(const void*)bytes;
-(void*)mutableBytes;
-(long long)sizeInBytes;
-(long long)rowBytes;
-(long long)readBufferInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)writeBufferInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)newRenderDestination;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 bytes:(void*)arg3 rowBytes:(long long)arg4 length:(long long)arg5 ;
@end

