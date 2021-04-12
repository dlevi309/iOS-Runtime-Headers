/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@class NSString, EspressoImage2Image, TwoNetsStyleTransfer;

@interface PAEStyleTransfer : PAEFilterDefaultBase {

	NSString* _modelName;
	BOOL _gpuDefaultsLoaded;
	BOOL _firstModelLoadLog;
	HGRef<HStyleTransfer_ANE::RenderContext>* _aneRenderContext;
	EspressoImage2Image* _gpuNetwork;
	TwoNetsStyleTransfer* _aneNetwork;
	long long _currentQualityLevel;
	double _currentAspectRatio;

}

@property (nonatomic,retain) EspressoImage2Image * gpuNetwork;               //@synthesize gpuNetwork=_gpuNetwork - In the implementation block
@property (nonatomic,retain) TwoNetsStyleTransfer * aneNetwork;              //@synthesize aneNetwork=_aneNetwork - In the implementation block
@property (assign,nonatomic) long long currentQualityLevel;                  //@synthesize currentQualityLevel=_currentQualityLevel - In the implementation block
@property (assign,nonatomic) double currentAspectRatio;                      //@synthesize currentAspectRatio=_currentAspectRatio - In the implementation block
+(BOOL)hasEspressoVersion;
-(id)properties;
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 ;
-(BOOL)variesOverTime;
-(id)_bundleForFilter;
-(id)pathForGPUSettings;
-(id)_modelPath:(id)arg1 ;
-(id)gpuModelPath:(id)arg1 ;
-(void)setupGPUNetwork;
-(EspressoImage2Image *)gpuNetwork;
-(long long)currentQualityLevel;
-(id)aneModelPath:(id)arg1 ;
-(TwoNetsStyleTransfer *)aneNetwork;
-(void)registerGPUDefaults;
-(PAEStyleTransferResourceTestResult)renderResourceForQuality:(long long)arg1 forModel:(id)arg2 ;
-(BOOL)buildGPURenderGraph:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 modelName:(id)arg4 qualityLevel:(long long)arg5 ;
-(BOOL)buildANERenderGraph:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA84*)arg3 modelName:(id)arg4 qualityLevel:(long long)arg5 ;
-(BOOL)loadGPUModel:(id)arg1 ;
-(void)setCurrentQualityLevel:(long long)arg1 ;
-(BOOL)loadANEModel:(id)arg1 ;
-(void)setGpuNetwork:(EspressoImage2Image *)arg1 ;
-(void)setAneNetwork:(TwoNetsStyleTransfer *)arg1 ;
-(double)currentAspectRatio;
-(void)setCurrentAspectRatio:(double)arg1 ;
@end

