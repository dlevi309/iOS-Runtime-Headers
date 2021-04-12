/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUKeyframeSequence.h>

@interface NUKeyframeSequenceDouble4 : NUKeyframeSequence {

	 _scale;
	 _bias;
	* _values;

}
-(void)dealloc;
-(id)debugQuickLookObject;
-(4)sampleAtTime:(SCD_Struct_NU6)arg1 ;
-(id)sparseSequence;
-(void)_compressAndStoreValues:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithInterpolation:(long long)arg1 count:(unsigned long long)arg2 times:(SCD_Struct_NU6*)arg3 values:(4*)arg4 ;
-(id)initWithKeyframeSequence:(id)arg1 values:(2*)arg2 ;
-(2)valueOfKeyframeAtIndex:(long long)arg1 ;
-(2)tangentOfKeyframeAtIndex:(long long)arg1 ;
@end

