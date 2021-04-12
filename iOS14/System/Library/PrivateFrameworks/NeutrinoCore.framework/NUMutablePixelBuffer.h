/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUMutableBuffer.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol NUMutableBuffer;
@class NUBufferStorage, NUPixelFormat, NSString;

@interface NUMutablePixelBuffer : NSObject <NUMutableBuffer, NSCopying, NSMutableCopying> {

	NUBufferStorage* _storage;
	id<NUMutableBuffer> _buffer;

}

@property (nonatomic,readonly) void* mutableBytes; 
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@property (nonatomic,readonly) long long rowBytes; 
@property (nonatomic,readonly) const void* bytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)debugQuickLookObject;
-(void*)mutableBytes;
-(NUPixelFormat *)format;
-(SCD_Struct_NU7)size;
-(const void*)bytes;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)rowBytes;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void*)mutableBytesAtPoint:(SCD_Struct_NU7)arg1 ;
-(id)newRenderDestination;
-(const void*)bytesAtPoint:(SCD_Struct_NU7)arg1 ;
-(id)privateInit;
@end

