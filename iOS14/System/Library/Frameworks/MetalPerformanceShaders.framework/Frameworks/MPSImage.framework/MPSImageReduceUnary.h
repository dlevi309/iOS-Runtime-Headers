/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageReduceUnary : MPSUnaryImageKernel {

	SCD_Struct_MP10 _clipRectSource;
	int _reduceOp;

}

@property (assign,nonatomic) SCD_Struct_MP10 clipRectSource;              //@synthesize clipRectSource=_clipRectSource - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setClipRectSource:(SCD_Struct_MP10)arg1 ;
-(SCD_Struct_MP10)clipRectSource;
-(id)initWithDevice:(id)arg1 reduceOperation:(int)arg2 ;
@end

