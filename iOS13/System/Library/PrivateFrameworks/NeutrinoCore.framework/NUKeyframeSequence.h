/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUKeyframeSequence : NSObject {

	unsigned long long _count;
	SCD_Struct_NU6* _times;
	BOOL _ownsTimes;
	long long _interpolation;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) long long interpolation;               //@synthesize interpolation=_interpolation - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(long long)interpolation;
-(id)initWithInterpolation:(long long)arg1 count:(unsigned long long)arg2 times:(SCD_Struct_NU6*)arg3 ;
-(id)initWithKeyframeSequence:(id)arg1 ;
-(long long)indexOfKeyframeAtOrBeforeTime:(SCD_Struct_NU6)arg1 ;
-(SCD_Struct_NU6)timeOfKeyframeAtIndex:(long long)arg1 ;
-(4)interpolantAtTime:(SCD_Struct_NU6)arg1 ;
-(id)sparseSequence;
@end

