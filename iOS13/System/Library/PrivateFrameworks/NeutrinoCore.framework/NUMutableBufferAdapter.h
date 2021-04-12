/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUBufferAdapter.h>
#import <libobjc.A.dylib/NUMutableBuffer.h>
#import <libobjc.A.dylib/NUMutableBufferProvider.h>

@class NSString, NUPixelFormat;

@interface NUMutableBufferAdapter : NUBufferAdapter <NUMutableBuffer, NUMutableBufferProvider> {

	void* _mutableBytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@property (nonatomic,readonly) long long rowBytes; 
@property (nonatomic,readonly) const void* bytes; 
@property (nonatomic,readonly) void* mutableBytes; 
-(void*)mutableBytes;
-(void)provideMutableBuffer:(/*^block*/id)arg1 ;
-(void*)mutableBytesAtPoint:(SCD_Struct_NU7)arg1 ;
-(id)newRenderDestination;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 rowBytes:(long long)arg3 bytes:(const void*)arg4 ;
-(id)initWithMutableBuffer:(id)arg1 ;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 rowBytes:(long long)arg3 mutableBytes:(void*)arg4 ;
@end

