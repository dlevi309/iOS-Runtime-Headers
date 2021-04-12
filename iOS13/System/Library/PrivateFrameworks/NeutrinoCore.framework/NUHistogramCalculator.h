/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUHistogramCalculator : NSObject {

	long long _binCount;
	SCD_Struct_NU10 _range;
	SCD_Struct_NU12 _colorMatrix;

}

@property (assign,nonatomic) long long binCount;                       //@synthesize binCount=_binCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU10 range;                    //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU12 colorMatrix;              //@synthesize colorMatrix=_colorMatrix - In the implementation block
-(id)init;
-(SCD_Struct_NU10)range;
-(void)setRange:(SCD_Struct_NU10)arg1 ;
-(SCD_Struct_NU12)colorMatrix;
-(void)setColorMatrix:(SCD_Struct_NU12)arg1 ;
-(id)computeHistogramFromBuffer:(id)arg1 error:(out id*)arg2 ;
-(id)_computeHistogramForBufferBGRA8:(id)arg1 error:(out id*)arg2 ;
-(long long)binCount;
-(void)setBinCount:(long long)arg1 ;
@end

