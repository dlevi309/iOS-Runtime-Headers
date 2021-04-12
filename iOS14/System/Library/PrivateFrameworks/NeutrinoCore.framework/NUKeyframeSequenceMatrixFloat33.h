/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUKeyframeSequence.h>

@interface NUKeyframeSequenceMatrixFloat33 : NUKeyframeSequence {

	SCD_Struct_NU17* _values;

}
-(void)dealloc;
-(SCD_Struct_NU17)valueOfKeyframeAtIndex:(long long)arg1 ;
-(SCD_Struct_NU17)sampleAtTime:(SCD_Struct_NU6)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 times:(SCD_Struct_NU6*)arg2 values:(SCD_Struct_NU17*)arg3 ;
@end

