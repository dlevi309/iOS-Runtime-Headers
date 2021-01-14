/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUBuffer.h>
#import <libobjc.A.dylib/NUBufferProvider.h>

@class NUPixelFormat, NSString;

@interface NUBufferAdapter : NSObject <NUBuffer, NUBufferProvider> {

	SCD_Struct_NU7 _size;
	NUPixelFormat* _format;
	long long _rowBytes;
	const void* _bytes;
	BOOL _valid;

}

@property (nonatomic,readonly) SCD_Struct_NU7 size;                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NUPixelFormat * format;              //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) long long rowBytes;                  //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,readonly) const void* bytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NUPixelFormat *)format;
-(id)init;
-(SCD_Struct_NU7)size;
-(const void*)bytes;
-(NSString *)description;
-(void)invalidate;
-(long long)rowBytes;
-(void)provideBuffer:(/*^block*/id)arg1 ;
-(const void*)bytesAtPoint:(SCD_Struct_NU7)arg1 ;
-(id)initWithBuffer:(id)arg1 ;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 rowBytes:(long long)arg3 bytes:(const void*)arg4 ;
@end

