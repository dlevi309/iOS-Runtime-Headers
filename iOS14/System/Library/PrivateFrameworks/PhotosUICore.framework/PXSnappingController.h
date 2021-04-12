/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXSnappingController : NSObject {

	BOOL _accumulateOffsetWhileSnapped;
	BOOL _snappedToTarget;
	BOOL __hasEnteredAttractionThreshold;
	BOOL __hasEnteredRetentionThreshold;
	BOOL __previousOffsetInvalid;
	double _snappingTarget;
	double _retentionOffsetThreshold;
	double _attractionOffsetThreshold;
	double _attractionVelocityThreshold;
	double __previousOffset;
	double __accumulatedOffset;

}

@property (assign,setter=_setHasEnteredAttractionThreshold:,nonatomic) BOOL _hasEnteredAttractionThreshold;                              //@synthesize _hasEnteredAttractionThreshold=__hasEnteredAttractionThreshold - In the implementation block
@property (assign,setter=_setHasEnteredRetentionThreshold:,nonatomic) BOOL _hasEnteredRetentionThreshold;                                //@synthesize _hasEnteredRetentionThreshold=__hasEnteredRetentionThreshold - In the implementation block
@property (assign,setter=_setPreviousOffset:,nonatomic) double _previousOffset;                                                          //@synthesize _previousOffset=__previousOffset - In the implementation block
@property (assign,setter=_setPreviousOffsetInvalid:,getter=_isPreviousOffsetInvalid,nonatomic) BOOL _previousOffsetInvalid;              //@synthesize _previousOffsetInvalid=__previousOffsetInvalid - In the implementation block
@property (assign,setter=_setAccumulatedOffset:,nonatomic) double _accumulatedOffset;                                                    //@synthesize _accumulatedOffset=__accumulatedOffset - In the implementation block
@property (nonatomic,readonly) double snappingTarget;                                                                                    //@synthesize snappingTarget=_snappingTarget - In the implementation block
@property (assign,nonatomic) double retentionOffsetThreshold;                                                                            //@synthesize retentionOffsetThreshold=_retentionOffsetThreshold - In the implementation block
@property (assign,nonatomic) double attractionOffsetThreshold;                                                                           //@synthesize attractionOffsetThreshold=_attractionOffsetThreshold - In the implementation block
@property (assign,nonatomic) double attractionVelocityThreshold;                                                                         //@synthesize attractionVelocityThreshold=_attractionVelocityThreshold - In the implementation block
@property (assign,nonatomic) BOOL accumulateOffsetWhileSnapped;                                                                          //@synthesize accumulateOffsetWhileSnapped=_accumulateOffsetWhileSnapped - In the implementation block
@property (getter=isSnappedToTarget,nonatomic,readonly) BOOL snappedToTarget;                                                            //@synthesize snappedToTarget=_snappedToTarget - In the implementation block
-(id)init;
-(void)interactionEnded;
-(void)updateOffset:(inout double*)arg1 withVelocity:(double)arg2 shouldSnap:(out BOOL*)arg3 shouldBreak:(out BOOL*)arg4 ;
-(void)interactionBegan;
-(void)setAccumulateOffsetWhileSnapped:(BOOL)arg1 ;
-(void)setAttractionVelocityThreshold:(double)arg1 ;
-(void)setAttractionOffsetThreshold:(double)arg1 ;
-(double)_accumulatedOffset;
-(void)setRetentionOffsetThreshold:(double)arg1 ;
-(id)initWithSnappingTarget:(double)arg1 ;
-(void)_reset;
-(BOOL)_isOffset:(double)arg1 inThreshold:(double)arg2 ;
-(void)_setBoolPointer:(inout BOOL*)arg1 toValue:(BOOL)arg2 ;
-(void)didSnapByAttraction;
-(double)snappingTarget;
-(double)retentionOffsetThreshold;
-(double)attractionOffsetThreshold;
-(double)attractionVelocityThreshold;
-(double)_previousOffset;
-(BOOL)accumulateOffsetWhileSnapped;
-(BOOL)isSnappedToTarget;
-(BOOL)_hasEnteredAttractionThreshold;
-(void)_setHasEnteredAttractionThreshold:(BOOL)arg1 ;
-(BOOL)_hasEnteredRetentionThreshold;
-(void)_setHasEnteredRetentionThreshold:(BOOL)arg1 ;
-(void)_setPreviousOffset:(double)arg1 ;
-(BOOL)_isPreviousOffsetInvalid;
-(void)_setPreviousOffsetInvalid:(BOOL)arg1 ;
-(void)_setAccumulatedOffset:(double)arg1 ;
@end

