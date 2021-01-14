/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUBuffer.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol NUBuffer;
@class NUBufferStorage, NUPixelFormat, NSString;

@interface NUPixelBuffer : NSObject <NUBuffer, NSCopying, NSMutableCopying> {

	NUBufferStorage* _storage;
	id<NUBuffer> _buffer;

}

@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@property (nonatomic,readonly) long long rowBytes; 
@property (nonatomic,readonly) const void* bytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)debugQuickLookObject;
-(NUPixelFormat *)format;
-(SCD_Struct_NU7)size;
-(const void*)bytes;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)rowBytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(const void*)bytesAtPoint:(SCD_Struct_NU7)arg1 ;
-(id)privateInit;
@end

