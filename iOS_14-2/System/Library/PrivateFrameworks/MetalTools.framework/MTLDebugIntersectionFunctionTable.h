/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsIntersectionFunctionTable.h>
#import <libobjc.A.dylib/MTLDebugResourcePurgeable.h>

@class MTLDebugComputePipelineState;

@interface MTLDebugIntersectionFunctionTable : MTLToolsIntersectionFunctionTable <MTLDebugResourcePurgeable> {

	atomic<int> _purgeableStateToken;
	BOOL _purgeableStateHasBeenSet;
	unsigned long long _functionCount;
	MTLDebugComputePipelineState* _pipelineState;

}

@property (readonly) unsigned long long functionCount;              //@synthesize functionCount=_functionCount - In the implementation block
-(void)setFunction:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFunctions:(const id*)arg1 withRange:(NSRange)arg2 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)arg1 withRange:(NSRange)arg2 ;
-(void)dealloc;
-(unsigned long long)functionCount;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;
-(BOOL)purgeableStateValidForRendering;
-(id)initWithIntersectionFunctionTable:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 ;
-(id)initWithIntersectionFunctionTable:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 pipelineState:(id)arg4 ;
@end

