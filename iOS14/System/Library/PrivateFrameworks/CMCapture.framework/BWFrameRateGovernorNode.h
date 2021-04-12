/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWMotionDataPreserver;

@interface BWFrameRateGovernorNode : BWNode {

	BOOL _dropsStillBracketFramesToMaintainConsistentFrameRate;
	BOOL _dropsStartupFramesWithUnstableAE;
	BOOL _preservesMotionDataFromDroppedFrames;
	SCD_Struct_BW8 _lastEmittedPTS;
	SCD_Struct_BW8 _lastEmittedStreamingFrameDuration;
	int _activeBracketSequenceRate;
	BWMotionDataPreserver* _motionDataPreserver;
	long long _frameCount;
	BOOL _aeStableAfterStartStreaming;
	int _aeStableTimeoutFrameCount;
	int _ltmStableTimeoutFrameCount;
	int _numFramesSinceAEBecameStable;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeType;
-(id)nodeSubType;
-(id)init;
-(BOOL)dropsStartupFramesWithUnstableAE;
-(void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(BOOL)arg1 ;
-(void)setDropsStartupFramesWithUnstableAE:(BOOL)arg1 ;
-(BOOL)dropsStillBracketFramesToMaintainConsistentFrameRate;
-(BOOL)preservesMotionDataFromDroppedFrames;
-(void)setPreservesMotionDataFromDroppedFrames:(BOOL)arg1 ;
-(void)dealloc;
@end

