/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class Project, MiroMemory, NSMutableArray, MiroAutoEditTransitionController, MiroAutoEditMultiUpController, MiroAutoEditController, MiroAutoEditLogger;

@interface MiroAutoEditProjectPolish : NSObject {

	Project* _project;
	MiroMemory* _activeMemory;
	NSMutableArray* _layoutClips;
	MiroAutoEditTransitionController* _transitionsController;
	MiroAutoEditMultiUpController* _multiController;
	MiroAutoEditController* _editController;
	MiroAutoEditLogger* _logger;
	NSMutableArray* _conversionNeeded;

}

@property (nonatomic,retain) Project * project;                                                     //@synthesize project=_project - In the implementation block
@property (assign,nonatomic) MiroMemory * activeMemory;                                             //@synthesize activeMemory=_activeMemory - In the implementation block
@property (nonatomic,retain) NSMutableArray * layoutClips;                                          //@synthesize layoutClips=_layoutClips - In the implementation block
@property (nonatomic,retain) MiroAutoEditTransitionController * transitionsController;              //@synthesize transitionsController=_transitionsController - In the implementation block
@property (nonatomic,retain) MiroAutoEditMultiUpController * multiController;                       //@synthesize multiController=_multiController - In the implementation block
@property (assign,nonatomic) MiroAutoEditController * editController;                               //@synthesize editController=_editController - In the implementation block
@property (nonatomic,retain) MiroAutoEditLogger * logger;                                           //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSMutableArray * conversionNeeded;                                     //@synthesize conversionNeeded=_conversionNeeded - In the implementation block
-(MiroAutoEditLogger *)logger;
-(void)cleanup;
-(void)setLogger:(MiroAutoEditLogger *)arg1 ;
-(Project *)project;
-(void)setProject:(Project *)arg1 ;
-(void)setLayoutClips:(NSMutableArray *)arg1 ;
-(NSMutableArray *)layoutClips;
-(BOOL)multiUpSupportedForAspect:(int)arg1 ;
-(MiroMemory *)activeMemory;
-(void)setActiveMemory:(MiroMemory *)arg1 ;
-(void)applyTransitions;
-(void)applyIrisEffect;
-(void)applyBurstEffect;
-(NSMutableArray *)conversionNeeded;
-(void)batchConvertCompoundClipsToKenBurnsClips;
-(void)adjustVideoPositioningBasedOnMetadata;
-(void)createLayoutClips;
-(void)applyAudioPolish;
-(void)clearAllStandardClipEffects;
-(void)applyMultiUpTreatments;
-(void)createTransitionControllerAndPrepare;
-(void)applyClipPolish;
-(void)setMultiController:(MiroAutoEditMultiUpController *)arg1 ;
-(MiroAutoEditMultiUpController *)multiController;
-(BOOL)clipIsViableZoomToPersonCandidate:(id)arg1 ;
-(void)setTransitionsController:(MiroAutoEditTransitionController *)arg1 ;
-(MiroAutoEditTransitionController *)transitionsController;
-(void)applyAutomaticThemeTitleToClip:(id)arg1 forPoster:(BOOL)arg2 ;
-(BOOL)isPortraitSquareVideo:(id)arg1 ;
-(float)sideScaleOffsetForScaleFactor:(float)arg1 ;
-(id)videoFramingRangesFor:(id)arg1 ;
-(void)setVideoScaleFactorYPostitionFor:(id)arg1 boundingRect:(CGRect)arg2 ;
-(void)setVideoScaleFactorXPostitionFor:(id)arg1 boundingRect:(CGRect)arg2 ;
-(void)setConversionNeeded:(NSMutableArray *)arg1 ;
-(void)convertSpecialClipTypeToKenBurnsClip:(id)arg1 ;
-(unsigned long long)allowedBurstStylesFromBlueprint:(id)arg1 ;
-(void)_updateSpeedRampsForClip:(id)arg1 beginningRampDurationSeconds:(double)arg2 endingRampDurationSeconds:(double)arg3 ;
-(void)polishProject;
-(id)_everyTitleDEBUG;
-(void)applyTitleToFirstClip;
-(void)removeIrisStylesFromFirstThreeClips;
-(void)adjustSlowMotionSpeedRamps;
-(BOOL)extremeCropAllowed;
-(MiroAutoEditController *)editController;
-(void)setEditController:(MiroAutoEditController *)arg1 ;
@end

