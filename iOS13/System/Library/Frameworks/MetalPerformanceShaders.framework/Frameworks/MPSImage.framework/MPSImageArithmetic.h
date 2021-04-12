/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBias:(float)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)bias;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setMinimumValue:(float)arg1 ;
-(void)setMaximumValue:(float)arg1 ;
-(float)minimumValue;
-(float)maximumValue;
-(void)setPrimaryScale:(float)arg1 ;
-(float)primaryScale;
-(void)setSecondaryScale:(float)arg1 ;
-(float)secondaryScale;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setPrimaryStrideInPixels:(SCD_Struct_MP9)arg1 ;
-(void)setSecondaryStrideInPixels:(SCD_Struct_MP9)arg1 ;
-(id)initWithDevice:(id)arg1 arithmeticType:(int)arg2 ;
-(SCD_Struct_MP9)primaryStrideInPixels;
-(SCD_Struct_MP9)secondaryStrideInPixels;
@end

