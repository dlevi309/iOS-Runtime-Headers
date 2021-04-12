/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <MPSCore/MPSKernelDAGObject.h>

@interface StitchedRegionDAG : MPSKernelDAGObject {

	unordered_map<mlir::Operation *, int, std::__1::hash<mlir::Operation *>, std::__1::equal_to<mlir::Operation *>, std::__1::allocator<std::__1::pair<mlir::Operation *const, int> > >* _placeholderOpToUsesInStitchedRegionMap;
	vector<mlir::Operation *, std::__1::allocator<mlir::Operation *> >* _placeholdersInDAG;

}
-(void)dealloc;
@end

