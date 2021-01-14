/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUKeyframeSequence.h>

@interface NUKeyframeSequenceDouble4 : NUKeyframeSequence {

	 _scale;
	 _bias;
	* _values;

}
-(id)debugQuickLookObject;
-(void)dealloc;
-(id)sparseSequence;
-(void)_compressAndStoreValues:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithInterpolation:(long long)arg1 count:(unsigned long long)arg2 times:(SCD_Struct_NU6*)arg3 values:(4*)arg4 ;
-(id)initWithKeyframeSequence:(id)arg1 values:(2*)arg2 ;
-(2)valueOfKeyframeAtIndex:(long long)arg1 ;
-(2)tangentOfKeyframeAtIndex:(long long)arg1 ;
-(4)sampleAtTime:(SCD_Struct_NU6)arg1 ;
@end

