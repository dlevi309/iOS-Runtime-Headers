/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUKeyframeSequence.h>

@interface NUKeyframeSequenceMatrixFloat33 : NUKeyframeSequence {

	SCD_Struct_NU15* _values;

}
-(void)dealloc;
-(SCD_Struct_NU15)sampleAtTime:(SCD_Struct_NU6)arg1 ;
-(SCD_Struct_NU15)valueOfKeyframeAtIndex:(long long)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 times:(SCD_Struct_NU6*)arg2 values:(SCD_Struct_NU15*)arg3 ;
@end

