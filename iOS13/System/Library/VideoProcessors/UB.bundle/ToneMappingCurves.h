/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLTexture, MTLBuffer;
#import <UB/UB-Structs.h>
@interface ToneMappingCurves : NSObject {

	id<MTLTexture> _ltcBinsTex;
	id<MTLTexture> _ltcGTCRatioTex;
	id<MTLTexture> _ltcGTCFinalTex;
	id<MTLBuffer> _lumaHistogram;
	id<MTLBuffer> _blackWhiteStrengthCenter;
	id<MTLTexture> _spatialCCMTex;
	BOOL _spatialCCMTexValid;
	id<MTLTexture> _ltcBinsTexD3x;
	id<MTLTexture> _ltcBinsTexD4x;

}
-(id)initWithWithContext:(id)arg1 ;
-(int)setToneCurvesWithLTC:(const ltmCurves*)arg1 GTC:(const ltmCurves*)arg2 colorCorrectionMatrix:(SCD_Struct_Wa0)arg3 dump:(id)arg4 ;
@end

