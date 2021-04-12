/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWMotionDataPreserver;

@interface BWFrameRateGovernorNode : BWNode {

	BOOL _dropsStillBracketFramesToMaintainConsistentFrameRate;
	BOOL _dropsStartupFramesWithUnstableAE;
	BOOL _preservesMotionDataFromDroppedFrames;
	SCD_Struct_BW2 _lastEmittedPTS;
	SCD_Struct_BW2 _lastEmittedStreamingFrameDuration;
	int _activeBracketSequenceRate;
	BWMotionDataPreserver* _motionDataPreserver;
	long long _frameCount;
	BOOL _aeStableAfterStartStreaming;
	int _aeStableTimeoutFrameCount;
	int _ltmStableTimeoutFrameCount;
	int _numFramesSinceAEBecameStable;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(BOOL)arg1 ;
-(void)setDropsStartupFramesWithUnstableAE:(BOOL)arg1 ;
-(void)setPreservesMotionDataFromDroppedFrames:(BOOL)arg1 ;
-(BOOL)dropsStillBracketFramesToMaintainConsistentFrameRate;
-(BOOL)dropsStartupFramesWithUnstableAE;
-(BOOL)preservesMotionDataFromDroppedFrames;
@end

