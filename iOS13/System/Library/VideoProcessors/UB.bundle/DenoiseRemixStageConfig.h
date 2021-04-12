/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@interface DenoiseRemixStageConfig : NSObject {

	BOOL _enableBandZeroDenoising;
	BOOL _enableNoiseMap;
	int _lgaAlgorithm;

}

@property (assign,nonatomic) int lgaAlgorithm;                          //@synthesize lgaAlgorithm=_lgaAlgorithm - In the implementation block
@property (assign,nonatomic) BOOL enableBandZeroDenoising;              //@synthesize enableBandZeroDenoising=_enableBandZeroDenoising - In the implementation block
@property (assign,nonatomic) BOOL enableNoiseMap;                       //@synthesize enableNoiseMap=_enableNoiseMap - In the implementation block
+(id)releaseSharedInstance;
+(id)getSharedInstance;
+(id)getOrRelease:(BOOL)arg1 ;
-(int)lgaAlgorithm;
-(BOOL)enableBandZeroDenoising;
-(BOOL)enableNoiseMap;
-(id)_initWithLGAAlgorithm:(int)arg1 enableBandZeroDenoising:(BOOL)arg2 enableNoiseMap:(BOOL)arg3 ;
-(void)setLgaAlgorithm:(int)arg1 ;
-(void)setEnableBandZeroDenoising:(BOOL)arg1 ;
-(void)setEnableNoiseMap:(BOOL)arg1 ;
@end

