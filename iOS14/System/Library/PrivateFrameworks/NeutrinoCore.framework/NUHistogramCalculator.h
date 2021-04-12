/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUHistogramCalculator : NSObject {

	long long _binCount;
	SCD_Struct_NU11 _range;
	SCD_Struct_NU13 _colorMatrix;

}

@property (assign,nonatomic) long long binCount;                       //@synthesize binCount=_binCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU11 range;                    //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU13 colorMatrix;              //@synthesize colorMatrix=_colorMatrix - In the implementation block
-(void)setRange:(SCD_Struct_NU11)arg1 ;
-(id)init;
-(SCD_Struct_NU11)range;
-(SCD_Struct_NU13)colorMatrix;
-(long long)binCount;
-(void)setColorMatrix:(SCD_Struct_NU13)arg1 ;
-(id)computeHistogramFromBuffer:(id)arg1 error:(out id*)arg2 ;
-(id)_computeHistogramForBufferBGRA8:(id)arg1 error:(out id*)arg2 ;
-(id)_computeHistogramForBufferRGBAhHLG:(id)arg1 error:(out id*)arg2 ;
-(void)setBinCount:(long long)arg1 ;
@end

