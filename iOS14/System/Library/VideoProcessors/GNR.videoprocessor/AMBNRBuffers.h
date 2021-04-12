/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@class PyramidStorage;

@interface AMBNRBuffers : NSObject {

	PyramidStorage* pyramid;
	PyramidStorage* laplacianPyramid;
	PyramidStorage* denoisedPyramid[4];

}
+(int)aliasAMBNRPyramidLevel:(id)arg1 lvl:(int)arg2 width:(int)arg3 height:(int)arg4 useHalfFloat:(BOOL)arg5 metal:(id)arg6 scratchBuffer:(id)arg7 offset:(unsigned long long*)arg8 ;
+(int)createAMBNRPyramidFromWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pyramid:(id)arg3 metal:(id)arg4 useHalfFloat:(BOOL)arg5 scratchBuffer:(id)arg6 offset:(unsigned long long*)arg7 ;
+(int)bindFP16PyramidToU8:(id)arg1 pyr_u8:(id)arg2 metal:(id)arg3 ;
-(id)init;
-(void)releaseBuffers;
-(void)releasePyramidsBottom;
@end

