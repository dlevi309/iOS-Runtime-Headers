/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSBinaryImageKernel.h>

@interface MPSImageArithmetic : MPSBinaryImageKernel {

	float _primaryScale;
	float _secondaryScale;
	float _bias;
	float _minimumValue;
	float _maximumValue;
	SCD_Struct_MP9 _primaryStrideInPixels;
	SCD_Struct_MP9 _secondaryStrideInPixels;
	int _arithmeticType;

}

@property (assign,nonatomic) float primaryScale;                                  //@synthesize primaryScale=_primaryScale - In the implementation block
@property (assign,nonatomic) float secondaryScale;                                //@synthesize secondaryScale=_secondaryScale - In the implementation block
@property (assign,nonatomic) float bias;                                          //@synthesize bias=_bias - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP9 primaryStrideInPixels;                //@synthesize primaryStrideInPixels=_primaryStrideInPixels - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP9 secondaryStrideInPixels;              //@synthesize secondaryStrideInPixels=_secondaryStrideInPixels - In the implementation block
@property (assign,nonatomic) float minimumValue;                                  //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) float maximumValue;                                  //@synthesize maximumValue=_maximumValue - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)bias;
-(float)maximumValue;
-(void)setMinimumValue:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(float)primaryScale;
-(id)initWithDevice:(id)arg1 arithmeticType:(int)arg2 ;
-(void)setPrimaryScale:(float)arg1 ;
-(float)secondaryScale;
-(void)setSecondaryScale:(float)arg1 ;
-(void)setBias:(float)arg1 ;
-(float)minimumValue;
-(void)setMaximumValue:(float)arg1 ;
-(SCD_Struct_MP9)primaryStrideInPixels;
-(SCD_Struct_MP9)secondaryStrideInPixels;
-(void)dealloc;
-(void)setPrimaryStrideInPixels:(SCD_Struct_MP9)arg1 ;
-(void)setSecondaryStrideInPixels:(SCD_Struct_MP9)arg1 ;
@end

