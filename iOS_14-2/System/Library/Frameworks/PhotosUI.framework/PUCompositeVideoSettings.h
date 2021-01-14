/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>

@interface PUCompositeVideoSettings : PXSettings {

	BOOL _useFrameBlending;
	long long _cropMode;
	double _stitchingFadeDuration;
	double _nonStitchingFadeDuration;

}

@property (assign,nonatomic) BOOL useFrameBlending;                        //@synthesize useFrameBlending=_useFrameBlending - In the implementation block
@property (assign,nonatomic) long long cropMode;                           //@synthesize cropMode=_cropMode - In the implementation block
@property (assign,nonatomic) double stitchingFadeDuration;                 //@synthesize stitchingFadeDuration=_stitchingFadeDuration - In the implementation block
@property (assign,nonatomic) double nonStitchingFadeDuration;              //@synthesize nonStitchingFadeDuration=_nonStitchingFadeDuration - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(long long)cropMode;
-(BOOL)useFrameBlending;
-(void)setStitchingFadeDuration:(double)arg1 ;
-(void)setUseFrameBlending:(BOOL)arg1 ;
-(double)nonStitchingFadeDuration;
-(void)setNonStitchingFadeDuration:(double)arg1 ;
-(void)setCropMode:(long long)arg1 ;
-(double)stitchingFadeDuration;
@end

