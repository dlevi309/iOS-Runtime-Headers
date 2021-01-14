/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMTone.h>

@interface AXMFunctionTone : AXMTone {

	/*^block*/id _function;
	SCD_Struct_AX5* _xAxisDescriptor;
	SCD_Struct_AX5* _yAxisDescriptor;

}

@property (nonatomic,readonly) id function;                                  //@synthesize function=_function - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AX5* xAxisDescriptor;              //@synthesize xAxisDescriptor=_xAxisDescriptor - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AX5* yAxisDescriptor;              //@synthesize yAxisDescriptor=_yAxisDescriptor - In the implementation block
-(void)renderInBuffer:(vector<int, std::__1::allocator<int> >*)arg1 atFrame:(unsigned long long)arg2 ;
-(id)function;
-(double)_xAxisValueForNormalizedPosition:(double)arg1 ;
-(id)initWithUnivariateFunction:(/*^block*/id)arg1 sampleRate:(double)arg2 envelope:(id)arg3 xAxisDescriptor:(SCD_Struct_AX5*)arg4 yAxisDescriptor:(SCD_Struct_AX5*)arg5 ;
-(SCD_Struct_AX5*)xAxisDescriptor;
-(SCD_Struct_AX5*)yAxisDescriptor;
@end

