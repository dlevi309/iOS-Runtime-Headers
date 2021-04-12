/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@interface CLSAssetScoringContext : NSObject {

	BOOL _shouldEmphasizeShared;
	BOOL _shouldEmphasizeAdjusted;
	BOOL _shouldEmphasizePanorama;
	BOOL _shouldEmphasizeLive;
	BOOL _shouldEmphasizeBurst;
	BOOL _shouldEmphasizeSDOF;
	BOOL _shouldEmphasizeReframe;
	short _audioClassificationsToEmphasize;
	double _viewCountThreshold;
	double _playCountThreshold;
	double _aestheticScoreThresholdToBeAwesome;

}

@property (assign,nonatomic) double viewCountThreshold;                              //@synthesize viewCountThreshold=_viewCountThreshold - In the implementation block
@property (assign,nonatomic) double playCountThreshold;                              //@synthesize playCountThreshold=_playCountThreshold - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizeShared;                             //@synthesize shouldEmphasizeShared=_shouldEmphasizeShared - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizeAdjusted;                           //@synthesize shouldEmphasizeAdjusted=_shouldEmphasizeAdjusted - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizePanorama;                           //@synthesize shouldEmphasizePanorama=_shouldEmphasizePanorama - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizeLive;                               //@synthesize shouldEmphasizeLive=_shouldEmphasizeLive - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizeBurst;                              //@synthesize shouldEmphasizeBurst=_shouldEmphasizeBurst - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizeSDOF;                               //@synthesize shouldEmphasizeSDOF=_shouldEmphasizeSDOF - In the implementation block
@property (assign,nonatomic) BOOL shouldEmphasizeReframe;                            //@synthesize shouldEmphasizeReframe=_shouldEmphasizeReframe - In the implementation block
@property (assign,nonatomic) short audioClassificationsToEmphasize;                  //@synthesize audioClassificationsToEmphasize=_audioClassificationsToEmphasize - In the implementation block
@property (assign,nonatomic) double aestheticScoreThresholdToBeAwesome;              //@synthesize aestheticScoreThresholdToBeAwesome=_aestheticScoreThresholdToBeAwesome - In the implementation block
-(double)playCountThreshold;
-(void)setShouldEmphasizeAdjusted:(BOOL)arg1 ;
-(void)setViewCountThreshold:(double)arg1 ;
-(void)setShouldEmphasizeBurst:(BOOL)arg1 ;
-(void)setShouldEmphasizePanorama:(BOOL)arg1 ;
-(double)viewCountThreshold;
-(void)setAestheticScoreThresholdToBeAwesome:(double)arg1 ;
-(short)audioClassificationsToEmphasize;
-(void)setAudioClassificationsToEmphasize:(short)arg1 ;
-(void)setShouldEmphasizeReframe:(BOOL)arg1 ;
-(BOOL)shouldEmphasizeShared;
-(double)aestheticScoreThresholdToBeAwesome;
-(BOOL)shouldEmphasizeReframe;
-(BOOL)shouldEmphasizeAdjusted;
-(BOOL)shouldEmphasizeLive;
-(BOOL)shouldEmphasizePanorama;
-(void)setPlayCountThreshold:(double)arg1 ;
-(void)setShouldEmphasizeSDOF:(BOOL)arg1 ;
-(BOOL)shouldEmphasizeSDOF;
-(void)setShouldEmphasizeLive:(BOOL)arg1 ;
-(BOOL)shouldEmphasizeBurst;
-(void)setShouldEmphasizeShared:(BOOL)arg1 ;
@end

