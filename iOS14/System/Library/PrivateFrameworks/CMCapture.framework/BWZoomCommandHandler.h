/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWZoomCompletionDelegate;
#import <CMCapture/CMCapture-Structs.h>
@class BWZoomDelayBuffer, NSArray;

@interface BWZoomCommandHandler : NSObject {

	os_unfair_lock_s _zoomLock;
	float _appliedZoomFactor;
	float _lastRequestedZoomFactor;
	BOOL _zoomFactorServiced;
	BWZoomDelayBuffer* _zoomDelayBuffer;
	BOOL _clientCanCompensateForDelay;
	id<BWZoomCompletionDelegate> _zoomCompletionDelegate;
	id<BWZoomCompletionDelegate> _zoomCompletionDelegateForStereoAudio;
	SCD_Struct_BW8 _lastFramePTSes[2];
	long long _timeForLastRequestedZoomFactor;
	SCD_Struct_BW8 _rampStartTime;
	float _rampAcceleration;
	float _rampStartFactor;
	float _rampStartVelocity;
	float _rampTargetFactor;
	float _rampTargetVelocity;
	int _rampCommandID;
	BOOL _rampActive;
	int _rampType;
	double _rampDuration;
	float _rampSnapFraction;
	float _rampCurrentVelocity;
	float _rampZoomFactorOfInterest;
	NSArray* _fudgedZoomRanges;
	float _maxZoomFactorToApplyFudge;
	float _minZoomFactorToApplyFudge;
	float _maxFudgedZoomFactor;
	float _minFudgedZoomFactor;

}

@property (assign) float requestedZoomFactor; 
@property (readonly) float requestedZoomFactorWithoutFudge; 
@property (readonly) float appliedZoomFactor; 
@property (readonly) float appliedZoomFactorWithoutFudge; 
@property (readonly) float rampTargetZoomFactor; 
@property (readonly) float rampZoomFactorOfInterest; 
@property (assign,nonatomic) id<BWZoomCompletionDelegate> zoomCompletionDelegate;                            //@synthesize zoomCompletionDelegate=_zoomCompletionDelegate - In the implementation block
@property (assign,nonatomic) id<BWZoomCompletionDelegate> zoomCompletionDelegateForStereoAudio;              //@synthesize zoomCompletionDelegateForStereoAudio=_zoomCompletionDelegateForStereoAudio - In the implementation block
+(void)initialize;
-(long long)timeForLastRequestedZoomFactor;
-(void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 snapToTargetZoomFactorWithinRampFraction:(float)arg5 commandID:(int)arg6 ;
-(float)predictRampZoomFactorAfterNumberOfFrames:(int)arg1 settingZoomFactorOfInterest:(float)arg2 ;
-(BOOL)_haveUpdatedZoomModelForPTS:(SCD_Struct_BW8)arg1 ;
-(float)_updateZoomModelForNextFrameWithPTS:(SCD_Struct_BW8)arg1 ;
-(id)init;
-(id<BWZoomCompletionDelegate>)zoomCompletionDelegate;
-(void)setTypicalISPZoomDelay:(unsigned)arg1 clientCanCompensateForDelay:(BOOL)arg2 ;
-(float)_zoomFactorForDurationBasedRampAtPTS:(SCD_Struct_BW8)arg1 updateCurrentZoomRampState:(BOOL)arg2 ;
-(float)requestedZoomFactorWithoutFudge;
-(float)updateZoomModelForNextFrameWithPTS:(SCD_Struct_BW8)arg1 ;
-(void)resetZoomFactorOfInterest;
-(void)setZoomCompletionDelegate:(id<BWZoomCompletionDelegate>)arg1 ;
-(void)_activateRampMode:(BOOL)arg1 ;
-(float)_zoomFactorForRateBasedRampAtPTS:(SCD_Struct_BW8)arg1 updateCurrentZoomRampState:(BOOL)arg2 ;
-(float)applyFudgeToZoomFactor:(float)arg1 ;
-(void)setFudgedZoomRanges:(id)arg1 ;
-(void)_resetZoomFactorOfInterestIfReachedWithZoomFactor:(float)arg1 direction:(int)arg2 ;
-(void)setRequestedZoomFactor:(float)arg1 ;
-(float)rampZoomFactorOfInterest;
-(BOOL)haveUpdatedZoomModelForPTS:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW145)_updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg1 zoomFactorChangedOut:(BOOL*)arg2 ;
-(float)_zoomFactorForRampAtPTS:(SCD_Struct_BW8)arg1 updateCurrentZoomRampState:(BOOL)arg2 ;
-(float)updateZoomModelAndAppliedZoomFactorForNextFrameWithPTS:(SCD_Struct_BW8)arg1 ptsTolerance:(SCD_Struct_BW8)arg2 delayedISPAppliedZoomFactor:(float)arg3 zoomFactorChangedOut:(BOOL*)arg4 ;
-(float)appliedZoomFactor;
-(float)_zoomFactorForSpringBasedRampAtPTS:(SCD_Struct_BW8)arg1 updateCurrentZoomRampState:(BOOL)arg2 ;
-(void)setZoomCompletionDelegateForStereoAudio:(id<BWZoomCompletionDelegate>)arg1 ;
-(id<BWZoomCompletionDelegate>)zoomCompletionDelegateForStereoAudio;
-(float)requestedZoomFactor;
-(float)_applyFudgeToZoomFactor:(float)arg1 ;
-(void)resetZoomDelayBuffer;
-(float)rampTargetZoomFactor;
-(void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg1 ;
-(void)dealloc;
-(float)appliedZoomFactorWithoutFudge;
@end

