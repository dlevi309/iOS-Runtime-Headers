/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSItemScoringContext.h>

@class NSString;

@interface CLSPHAssetScoringContext : NSObject <CLSItemScoringContext> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)viewCountThreshold;
-(void)setViewCountThreshold:(double)arg1 ;
-(double)playCountThreshold;
-(void)setPlayCountThreshold:(double)arg1 ;
-(BOOL)shouldEmphasizeShared;
-(void)setShouldEmphasizeShared:(BOOL)arg1 ;
-(BOOL)shouldEmphasizeAdjusted;
-(void)setShouldEmphasizeAdjusted:(BOOL)arg1 ;
-(BOOL)shouldEmphasizePanorama;
-(void)setShouldEmphasizePanorama:(BOOL)arg1 ;
-(BOOL)shouldEmphasizeLive;
-(void)setShouldEmphasizeLive:(BOOL)arg1 ;
-(BOOL)shouldEmphasizeBurst;
-(void)setShouldEmphasizeBurst:(BOOL)arg1 ;
-(BOOL)shouldEmphasizeSDOF;
-(void)setShouldEmphasizeSDOF:(BOOL)arg1 ;
-(BOOL)shouldEmphasizeReframe;
-(void)setShouldEmphasizeReframe:(BOOL)arg1 ;
-(short)audioClassificationsToEmphasize;
-(void)setAudioClassificationsToEmphasize:(short)arg1 ;
-(double)aestheticScoreThresholdToBeAwesome;
-(void)setAestheticScoreThresholdToBeAwesome:(double)arg1 ;
@end

