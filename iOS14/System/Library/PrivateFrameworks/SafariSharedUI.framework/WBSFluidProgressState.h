/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSString;

@interface WBSFluidProgressState : NSObject {

	double _webKitProgressValue;
	double _linearFunctionM;
	double _linearFunctionB;
	double _startTimeForFluidProgress;
	double _lastTimeProgressValueWasUpdated;
	long long _fluidProgressAnimationPhase;
	double _previousDestinationPosition;
	double _animationDuration;
	double _minProgressPosition;
	BOOL _hasCompletedLoad;
	BOOL _hasCanceledLoad;
	BOOL _hasCommittedLoad;
	BOOL _shouldAnimateUsingInitialPosition;
	long long _fluidProgressType;
	NSString* _loadURL;

}

@property (assign,nonatomic) long long fluidProgressType;                         //@synthesize fluidProgressType=_fluidProgressType - In the implementation block
@property (nonatomic,copy) NSString * loadURL;                                    //@synthesize loadURL=_loadURL - In the implementation block
@property (assign,nonatomic) double minProgressPosition; 
@property (assign,nonatomic) long long fluidProgressAnimationPhase; 
@property (assign,nonatomic) BOOL hasCompletedLoad;                               //@synthesize hasCompletedLoad=_hasCompletedLoad - In the implementation block
@property (assign,nonatomic) BOOL hasCanceledLoad;                                //@synthesize hasCanceledLoad=_hasCanceledLoad - In the implementation block
@property (assign,nonatomic) BOOL hasCommittedLoad;                               //@synthesize hasCommittedLoad=_hasCommittedLoad - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateUsingInitialPosition;              //@synthesize shouldAnimateUsingInitialPosition=_shouldAnimateUsingInitialPosition - In the implementation block
+(double)_estimatedLoadTimeRemainingFromProgressValue:(double)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(void)setLoadURL:(NSString *)arg1 ;
-(void)setHasCommittedLoad:(BOOL)arg1 ;
-(double)_animationDuration;
-(id)description;
-(NSString *)loadURL;
-(long long)fluidProgressAnimationPhase;
-(void)setFluidProgressAnimationPhase:(long long)arg1 ;
-(BOOL)hasCompletedLoad;
-(id)nextFluidProgressAnimation;
-(BOOL)isFluidProgressStalled;
-(double)fluidProgressValue;
-(void)setWebKitProgressValue:(double)arg1 ;
-(BOOL)hasCommittedLoad;
-(void)setHasCompletedLoad:(BOOL)arg1 ;
-(void)setHasCanceledLoad:(BOOL)arg1 ;
-(void)setShouldAnimateUsingInitialPosition:(BOOL)arg1 ;
-(void)setFluidProgressType:(long long)arg1 ;
-(BOOL)hasCanceledLoad;
-(void)setMinProgressPosition:(double)arg1 ;
-(void)_updateLinearFunction;
-(double)secondsElapsedSinceLoadBegan;
-(double)_fractionCompleteAtElapsedTime:(double)arg1 ;
-(double)_adjustProgressPosition:(double)arg1 ;
-(double)_nextProgressPosition:(double)arg1 ;
-(double)minProgressPosition;
-(long long)fluidProgressType;
-(BOOL)shouldAnimateUsingInitialPosition;
-(double)_estimatedLoadTimeRemaining;
@end

