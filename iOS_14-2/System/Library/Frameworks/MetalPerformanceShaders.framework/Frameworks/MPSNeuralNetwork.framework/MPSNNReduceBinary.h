/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSNNReduceBinary : MPSCNNBinaryKernel {

	SCD_Struct_MP4 _clipRectPrimarySource;
	SCD_Struct_MP4 _secondarySourceClipRect;
	int _reduceOp;
	SCD_Struct_MP4 _primarySourceClipRect;

}

@property (assign,nonatomic) SCD_Struct_MP4 primarySourceClipRect;                //@synthesize primarySourceClipRect=_primarySourceClipRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP4 secondarySourceClipRect;              //@synthesize secondarySourceClipRect=_secondarySourceClipRect - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(int)reduceOp;
-(id)initWithDevice:(id)arg1 reduceOperation:(int)arg2 ;
-(SCD_Struct_MP4)primarySourceClipRect;
-(void)setPrimarySourceClipRect:(SCD_Struct_MP4)arg1 ;
-(SCD_Struct_MP4)secondarySourceClipRect;
-(void)setSecondarySourceClipRect:(SCD_Struct_MP4)arg1 ;
@end

