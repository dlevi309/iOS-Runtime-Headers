/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NUAbstractStorage.h>

@interface _NUAbstractBufferStorage : _NUAbstractStorage {

	long long _rowBytes;
	const void* _bytes;
	void* _mutableBytes;

}

@property (readonly) long long sizeInBytes; 
@property (readonly) long long rowBytes;                 //@synthesize rowBytes=_rowBytes - In the implementation block
@property (readonly) const void* bytes;                  //@synthesize bytes=_bytes - In the implementation block
@property (readonly) void* mutableBytes;                 //@synthesize mutableBytes=_mutableBytes - In the implementation block
-(const void*)bytes;
-(void*)mutableBytes;
-(long long)sizeInBytes;
-(long long)rowBytes;
-(long long)copyFromStorage:(id)arg1 region:(id)arg2 ;
-(void*)mutableBytesAtPoint:(SCD_Struct_NU7)arg1 ;
-(const void*)bytesAtPoint:(SCD_Struct_NU7)arg1 ;
@end

