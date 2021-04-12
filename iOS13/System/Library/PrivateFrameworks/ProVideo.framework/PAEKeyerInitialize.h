/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class PAEKeyer;

@interface PAEKeyerInitialize : NSObject {

	PAEKeyer* _keyer;
	id _apiManager;

}
+(void)setInitialSamples:(vector<Vec3f, std::__1::allocator<Vec3f> >*)arg1 autokeySetupUtil:(id)arg2 sampleBoxHalfDim:(float)arg3 ;
-(void)dealloc;
-(void)calculateInitialSamples:(ColorHisto*)arg1 percentageOfBaseColorIncluded:(float)arg2 use32x32x32:(BOOL)arg3 autokeySetupUtil:(id)arg4 samples:(vector<Vec3f, std::__1::allocator<Vec3f> >*)arg5 ;
-(BOOL)calculateInitialMatteWithInfo:(SCD_Struct_PA79*)arg1 omSamples:(OMSamples*)arg2 colorPrimaries:(int)arg3 screenColor:(int*)arg4 minGreenHueAngle:(float)arg5 maxGreenHueAngle:(float)arg6 greenChroma:(float)arg7 minBlueHueAngle:(float)arg8 maxBlueHueAngle:(float)arg9 blueChroma:(float)arg10 histoPercentageIncluded:(float)arg11 use32x32x32:(BOOL)arg12 simpleKey:(BOOL)arg13 ;
-(id)initWithAPIManager:(id)arg1 keyer:(id)arg2 ;
-(BOOL)findSampleRectsWithInfo:(SCD_Struct_PA79*)arg1 screenColor:(int*)arg2 colorPrimaries:(int)arg3 width:(int)arg4 height:(int)arg5 minGreenHueAngle:(float)arg6 maxGreenHueAngle:(float)arg7 greenChroma:(float)arg8 minBlueHueAngle:(float)arg9 maxBlueHueAngle:(float)arg10 blueChroma:(float)arg11 histoPercentageIncluded:(float)arg12 omSamples:(OMSamples*)arg13 viewingSetupMatte:(BOOL)arg14 use32x32Histogram:(BOOL)arg15 simpleKey:(BOOL)arg16 ;
@end

