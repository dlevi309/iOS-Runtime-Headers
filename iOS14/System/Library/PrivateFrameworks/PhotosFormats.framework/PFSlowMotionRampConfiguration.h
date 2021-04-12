/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@interface PFSlowMotionRampConfiguration : NSObject {

	float _playbackRampCurveExponent;
	float _exportRampCurveExponent;
	double _rampTime;
	double _introTime;
	double _outroTime;
	double _volumeSuppressionIntroTime;
	double _volumeSuppressionOutroTime;
	unsigned long long _playbackNumIntermediateSteps;
	unsigned long long _exportNumIntermediateSteps;

}

@property (nonatomic,readonly) double rampTime;                                              //@synthesize rampTime=_rampTime - In the implementation block
@property (nonatomic,readonly) double introTime;                                             //@synthesize introTime=_introTime - In the implementation block
@property (nonatomic,readonly) double outroTime;                                             //@synthesize outroTime=_outroTime - In the implementation block
@property (nonatomic,readonly) double volumeSuppressionIntroTime;                            //@synthesize volumeSuppressionIntroTime=_volumeSuppressionIntroTime - In the implementation block
@property (nonatomic,readonly) double volumeSuppressionOutroTime;                            //@synthesize volumeSuppressionOutroTime=_volumeSuppressionOutroTime - In the implementation block
@property (nonatomic,readonly) unsigned long long playbackNumIntermediateSteps;              //@synthesize playbackNumIntermediateSteps=_playbackNumIntermediateSteps - In the implementation block
@property (nonatomic,readonly) unsigned long long exportNumIntermediateSteps;                //@synthesize exportNumIntermediateSteps=_exportNumIntermediateSteps - In the implementation block
@property (nonatomic,readonly) float playbackRampCurveExponent;                              //@synthesize playbackRampCurveExponent=_playbackRampCurveExponent - In the implementation block
@property (nonatomic,readonly) float exportRampCurveExponent;                                //@synthesize exportRampCurveExponent=_exportRampCurveExponent - In the implementation block
-(id)init;
-(void)computeRampToTargetRate:(float)arg1 forExport:(BOOL)arg2 outTimeSteps:(id*)arg3 outIntermediateRates:(id*)arg4 ;
-(id)initForRampDown:(BOOL)arg1 ;
-(double)rampTime;
-(double)introTime;
-(double)outroTime;
-(double)volumeSuppressionIntroTime;
-(double)volumeSuppressionOutroTime;
-(unsigned long long)playbackNumIntermediateSteps;
-(unsigned long long)exportNumIntermediateSteps;
-(float)playbackRampCurveExponent;
-(float)exportRampCurveExponent;
@end

