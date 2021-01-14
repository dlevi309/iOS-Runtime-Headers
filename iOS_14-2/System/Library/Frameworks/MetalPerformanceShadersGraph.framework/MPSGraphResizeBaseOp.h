/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <MetalPerformanceShadersGraph/MPSGraphOperation.h>

@interface MPSGraphResizeBaseOp : MPSGraphOperation {

	unsigned long long _mode;
	BOOL _centerResult;
	BOOL _alignCorners;
	unsigned long long _layout;
	MLIRContext* _context;

}
-(id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 mode:(unsigned long long)arg4 centerResult:(BOOL)arg5 alignCorners:(BOOL)arg6 layout:(unsigned long long)arg7 name:(id)arg8 context:(MLIRContext*)arg9 ;
@end

