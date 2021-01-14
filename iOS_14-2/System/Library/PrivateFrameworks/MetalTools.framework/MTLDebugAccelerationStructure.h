/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsAccelerationStructure.h>
#import <libobjc.A.dylib/MTLDebugResourcePurgeable.h>

@class MTLDebugBuffer;

@interface MTLDebugAccelerationStructure : MTLToolsAccelerationStructure <MTLDebugResourcePurgeable> {

	atomic<int> _purgeableStateToken;
	BOOL _purgeableStateHasBeenSet;
	MTLDebugBuffer* _debugBuffer;

}
-(id)buffer;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;
-(BOOL)purgeableStateValidForRendering;
@end

