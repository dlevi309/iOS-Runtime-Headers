/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigMetalAllocatorImpl.h>

@class FigMetalUtils;

@interface FigMetalNoAliasingAllocator : NSObject <FigMetalAllocatorImpl> {

	unsigned long long _alignment;
	FigMetalUtils* _utils;
	unsigned long long _memSize;

}

@property (nonatomic,readonly) unsigned long long alignment;              //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) unsigned long long memSize;                //@synthesize memSize=_memSize - In the implementation block
@property (nonatomic,readonly) FigMetalUtils * utils;                     //@synthesize utils=_utils - In the implementation block
-(unsigned long long)alignment;
-(FigMetalUtils *)utils;
-(unsigned long long)memSize;
-(void)purgeResources;
-(id)initWithMetalUtils:(id)arg1 ;
-(int)setupWithDescriptor:(id)arg1 ;
-(SCD_Struct_Fi109)getSizeAndAlignForDescriptor:(id)arg1 ;
-(unsigned long long)textureOffset:(id)arg1 ;
-(BOOL)hasCreatedTexture:(id)arg1 ;
-(id)description;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 ;
@end

