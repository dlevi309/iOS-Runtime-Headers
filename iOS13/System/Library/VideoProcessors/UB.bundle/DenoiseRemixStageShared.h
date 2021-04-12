/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


#import <UB/UB-Structs.h>
@class NSMutableArray;

@interface DenoiseRemixStageShared : NSObject {

	SCD_Struct_De22 _cache;
	NSMutableArray* _denoiseShaders;

}
+(id)sharedInstance;
+(void)releaseSharedInstance;
+(id)getSharedInstanceOrRelease:(BOOL)arg1 ;
-(id)init;
-(id)getShaders:(id)arg1 lumaFP16:(BOOL)arg2 chromaFP16:(BOOL)arg3 options:(const DenoiseRemixStageOptions*)arg4 ;
@end

