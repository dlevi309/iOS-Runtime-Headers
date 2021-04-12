/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUBuffer.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol NUBuffer;
@class NUBufferStorage, NSString, NUPixelFormat;

@interface NUPixelBuffer : NSObject <NUBuffer, NSCopying, NSMutableCopying> {

	NUBufferStorage* _storage;
	id<NUBuffer> _buffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@property (nonatomic,readonly) long long rowBytes; 
@property (nonatomic,readonly) const void* bytes; 
-(void)dealloc;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_NU7)size;
-(NUPixelFormat *)format;
-(id)debugQuickLookObject;
-(long long)rowBytes;
-(const void*)bytesAtPoint:(SCD_Struct_NU7)arg1 ;
-(id)privateInit;
@end

