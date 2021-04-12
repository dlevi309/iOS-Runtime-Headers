/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol MiroAutoEditDelegate;
@class Project, MiroMemory, MiroBlueprint, MiroAutoEditLogger;

@interface MiroAutoEdit_TrimController : NSObject {

	BOOL _useNonSpecialDurations;
	BOOL _allowMoreThanMaxVideo;
	int _duration;
	int _lastClipInPoint;
	int _lastClipOutPoint;
	id<MiroAutoEditDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MiroAutoEditDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) Project * project; 
@property (nonatomic,readonly) MiroMemory * memory; 
@property (nonatomic,readonly) MiroBlueprint * blueprint; 
@property (assign,nonatomic) int duration;                                          //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) int lastClipInPoint;                                   //@synthesize lastClipInPoint=_lastClipInPoint - In the implementation block
@property (assign,nonatomic) int lastClipOutPoint;                                  //@synthesize lastClipOutPoint=_lastClipOutPoint - In the implementation block
@property (nonatomic,readonly) MiroAutoEditLogger * logger; 
@property (assign,nonatomic) BOOL useNonSpecialDurations;                           //@synthesize useNonSpecialDurations=_useNonSpecialDurations - In the implementation block
@property (assign,nonatomic) BOOL allowMoreThanMaxVideo;                            //@synthesize allowMoreThanMaxVideo=_allowMoreThanMaxVideo - In the implementation block
+(id)rangeModelsBySplittingRangeModels:(id)arg1 outsideRange:(id)arg2 ;
-(id<MiroAutoEditDelegate>)delegate;
-(void)setDelegate:(id<MiroAutoEditDelegate>)arg1 ;
-(int)duration;
-(MiroMemory *)memory;
-(MiroAutoEditLogger *)logger;
-(id)initWithDelegate:(id)arg1 ;
-(void)setDuration:(int)arg1 ;
-(MiroBlueprint *)blueprint;
-(Project *)project;
-(void)setupSongDuration;
-(BOOL)clipIsTitleCard:(id)arg1 ;
-(void)setDuration:(int)arg1 andStartTimeForClip:(id)arg2 ;
-(int)durationOfUserTrimForClip:(id)arg1 ;
-(int)lastClipInPoint;
-(void)_fitToDuration;
-(void)_saveFreezeBits;
-(void)_clipClip:(id)arg1 ;
-(id)_rangesForClipIncorporatingUserTrim:(id)arg1 ;
-(BOOL)useNonSpecialDurations;
-(int)minimumBlueprintDurationForClip:(id)arg1 ;
-(int)maximumBlueprintDurationForClip:(id)arg1 ;
-(BOOL)allowMoreThanMaxVideo;
-(int)shrinkAndStretchClips:(id)arg1 ;
-(void)setAllowMoreThanMaxVideo:(BOOL)arg1 ;
-(void)setLastClipInPoint:(int)arg1 ;
-(void)setLastClipOutPoint:(int)arg1 ;
-(int)lastClipOutPoint;
-(void)calcLastClipInPointAndOutPoint;
-(void)setUseNonSpecialDurations:(BOOL)arg1 ;
-(void)layoutProject;
@end

