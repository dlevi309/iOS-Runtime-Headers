/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class PyramidStorage;

@interface AMBNRBuffers : NSObject {

	PyramidStorage* pyramid;
	PyramidStorage* denoisedPyramid;
	PyramidStorage* noiseMapPyramid;
	PyramidStorage* sharpeningPyramid;

}
+(unsigned long long)calculateBytesRequiredForAMBNRPyramidWithWidth:(int)arg1 height:(int)arg2 startingLevel:(int)arg3 ;
+(int)aliasAMBNRPyramidLevel:(id)arg1 lvl:(int)arg2 width:(int)arg3 height:(int)arg4 metal:(id)arg5 scratchBuffer:(id)arg6 offset:(unsigned long long*)arg7 ;
+(int)createAMBNRPyramidForWidth:(int)arg1 height:(int)arg2 startingLevel:(int)arg3 pyramid:(id)arg4 metal:(id)arg5 scratchBuffer:(id)arg6 offset:(unsigned long long*)arg7 ;
+(unsigned long long)calculateBytesRequiredForAMBNRPyramidWithWidth:(int)arg1 height:(int)arg2 ;
+(int)createAMBNRPyramidForWidth:(int)arg1 height:(int)arg2 pyramid:(id)arg3 metal:(id)arg4 scratchBuffer:(id)arg5 offset:(unsigned long long*)arg6 ;
-(id)init;
-(void)releaseBuffers;
-(void)releasePyramidsBottom;
@end

