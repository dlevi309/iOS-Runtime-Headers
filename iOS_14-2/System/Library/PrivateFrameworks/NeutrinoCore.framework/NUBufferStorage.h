/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NUAbstractBufferStorage.h>
#import <libobjc.A.dylib/NUBuffer.h>
#import <libobjc.A.dylib/NUMutableBuffer.h>
#import <libobjc.A.dylib/NUPurgeableStorage.h>

@class NUPixelFormat, NSString, NURegion;

@interface NUBufferStorage : _NUAbstractBufferStorage <NUBuffer, NUMutableBuffer, NUPurgeableStorage> {

	long long _purgeLevel;
	long long _length;
	long long _rowBytes;
	void* _bytes;
	BOOL _purgeable;
	Ai _useCount;

}

@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@property (nonatomic,readonly) long long rowBytes;                  //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,readonly) const void* bytes;                   //@synthesize bytes=_bytes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* mutableBytes; 
@property (readonly) long long sizeInBytes; 
@property (readonly) NURegion * validRegion; 
-(BOOL)isPurged;
-(void*)mutableBytes;
-(void)incrementUseCount;
-(BOOL)decrementUseCount;
-(const void*)bytes;
-(BOOL)isInUse;
-(NSString *)description;
-(long long)sizeInBytes;
-(int)useCount;
-(long long)rowBytes;
-(BOOL)isShared;
-(BOOL)isPurgeable;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(void)dealloc;
-(BOOL)makeNonPurgeable;
-(void)makePurgeable;
-(long long)purgeLevel;
-(void)adjustPurgeLevel:(long long)arg1 ;
-(long long)readBufferInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)writeBufferInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(/*^block*/id)arg3 ;
-(long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)newRenderDestination;
-(void*)_allocateMemory:(long long)arg1 ;
-(void)_deallocateMemory;
-(int)_fetchPurgeState:(int*)arg1 ;
-(id)_purgeStateDescription;
-(int)_purgeLevelToOSValue:(long long)arg1 ;
@end

