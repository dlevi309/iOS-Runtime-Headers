/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUBufferImage.h>

@protocol NUBufferProvider;
@class NUImageLayout, NURegion, NUColorSpace, NSString, NUPixelFormat;

@interface NUBufferImageAdapter : NSObject <NUBufferImage> {

	NUImageLayout* _layout;
	id<NUBufferProvider> _bufferProvider;
	NURegion* _validRegion;
	NUColorSpace* _colorSpace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NUImageLayout * layout;                        //@synthesize layout=_layout - In the implementation block
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace;                     //@synthesize colorSpace=_colorSpace - In the implementation block
@property (readonly) SCD_Struct_NU7 size; 
@property (copy,readonly) NURegion * validRegion;                   //@synthesize validRegion=_validRegion - In the implementation block
-(id)init;
-(SCD_Struct_NU7)size;
-(NUPixelFormat *)format;
-(NUColorSpace *)colorSpace;
-(id)debugQuickLookObject;
-(NUImageLayout *)layout;
-(NURegion *)validRegion;
-(void)readBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)immutableImageCopy;
-(id)mutableImageCopy;
-(id)purgeableImageCopy;
-(id)mutablePurgeableImageCopy;
-(id)initWithBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
-(id)initWithBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
@end

