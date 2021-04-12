/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostAnimationSubInterval.h>
#import <SignpostSupport/SignpostCARenderServerFrameMetadata.h>

@class NSDictionary, SignpostHIDLatencyInterval, SignpostRenderServerRenderInterval, NSArray, SignpostFrameLatencyInterval, SignpostContextInfo, NSNumber, NSSet;

@interface SignpostFrameLifetimeInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata> {

	unsigned char _bufferCount;
	unsigned _frameSeed;
	unsigned _swapID;
	unsigned long long _displayRefreshIntervalDurationMachTime;
	unsigned long long _previousFramePresentationMCT;
	NSDictionary* _pidToContextInfoArrayDict;
	SignpostHIDLatencyInterval* _hidLatencyInterval;
	SignpostRenderServerRenderInterval* _renderInterval;
	NSArray* _skippedRenders;
	SignpostFrameLatencyInterval* _frameLatencyInterval;
	SignpostContextInfo* _earliestTimeContextInfo;
	SignpostContextInfo* _contextInfoForHIDInput;

}

@property (nonatomic,readonly) unsigned frameSeed;                                                               //@synthesize frameSeed=_frameSeed - In the implementation block
@property (nonatomic,readonly) unsigned swapID;                                                                  //@synthesize swapID=_swapID - In the implementation block
@property (nonatomic,readonly) unsigned displayID; 
@property (nonatomic,readonly) NSNumber * displayIDNum; 
@property (nonatomic,readonly) unsigned long long displayRefreshIntervalDurationMachTime;                        //@synthesize displayRefreshIntervalDurationMachTime=_displayRefreshIntervalDurationMachTime - In the implementation block
@property (nonatomic,readonly) unsigned char bufferCount;                                                        //@synthesize bufferCount=_bufferCount - In the implementation block
@property (nonatomic,readonly) unsigned long long missedVBLCount; 
@property (nonatomic,readonly) unsigned long long previousFramePresentationMCT;                                  //@synthesize previousFramePresentationMCT=_previousFramePresentationMCT - In the implementation block
@property (nonatomic,readonly) id<SignpostSupportTimeInterval> frameOverrunInterval; 
@property (nonatomic,readonly) id<SignpostSupportTimeInterval> frameOverrunInactiveDisplayInterval; 
@property (nonatomic,readonly) id<SignpostSupportTimeInterval> userVisibleGlitchInterval; 
@property (nonatomic,readonly) id<SignpostSupportTimeInterval> previousFrameOnScreenInterval; 
@property (nonatomic,readonly) NSSet * contributingPIDs; 
@property (nonatomic,readonly) NSDictionary * pidToContextInfoArrayDict;                                         //@synthesize pidToContextInfoArrayDict=_pidToContextInfoArrayDict - In the implementation block
@property (nonatomic,readonly) SignpostHIDLatencyInterval * hidLatencyInterval;                                  //@synthesize hidLatencyInterval=_hidLatencyInterval - In the implementation block
@property (nonatomic,readonly) SignpostRenderServerRenderInterval * renderInterval;                              //@synthesize renderInterval=_renderInterval - In the implementation block
@property (nonatomic,readonly) NSArray * skippedRenders;                                                         //@synthesize skippedRenders=_skippedRenders - In the implementation block
@property (nonatomic,readonly) SignpostFrameLatencyInterval * frameLatencyInterval;                              //@synthesize frameLatencyInterval=_frameLatencyInterval - In the implementation block
@property (nonatomic,readonly) BOOL hidLatencyIsLong; 
@property (nonatomic,readonly) BOOL renderIntervalIsLong; 
@property (nonatomic,readonly) BOOL frameLatencyIsLong; 
@property (nonatomic,readonly) SignpostContextInfo * earliestTimeContextInfo;                                    //@synthesize earliestTimeContextInfo=_earliestTimeContextInfo - In the implementation block
@property (nonatomic,readonly) SignpostContextInfo * contextInfoForHIDInput;                                     //@synthesize contextInfoForHIDInput=_contextInfoForHIDInput - In the implementation block
@property (nonatomic,readonly) BOOL mayBeFirstFrame; 
+(id)_frameSeedForLifetimeIntervalBegin:(id)arg1 ;
-(unsigned)displayID;
-(unsigned char)bufferCount;
-(unsigned)frameSeed;
-(SignpostRenderServerRenderInterval *)renderInterval;
-(id)initWithInterval:(id)arg1 contextArray:(id)arg2 renderInterval:(id)arg3 frameSeedToSkippedRenderIntervals:(id)arg4 ;
-(id)initWithInterval:(id)arg1 contextArray:(id)arg2 hidLatencyInterval:(id)arg3 renderInterval:(id)arg4 frameLatencyInterval:(id)arg5 frameSeedToSkippedRenderIntervals:(id)arg6 ;
-(SignpostFrameLatencyInterval *)frameLatencyInterval;
-(SignpostHIDLatencyInterval *)hidLatencyInterval;
-(BOOL)hidLatencyIsLong;
-(BOOL)frameLatencyIsLong;
-(SignpostContextInfo *)contextInfoForHIDInput;
-(BOOL)renderIntervalIsLong;
-(id<SignpostSupportTimeInterval>)frameOverrunInactiveDisplayInterval;
-(SignpostContextInfo *)earliestTimeContextInfo;
-(BOOL)mayBeFirstFrame;
-(NSSet *)contributingPIDs;
-(NSDictionary *)pidToContextInfoArrayDict;
-(unsigned long long)displayRefreshIntervalDurationMachTime;
-(BOOL)_isLongMCT:(unsigned long long)arg1 expectedFrameLatency:(unsigned char)arg2 ;
-(unsigned long long)previousFramePresentationMCT;
-(NSArray *)skippedRenders;
-(BOOL)_hasDisplayID;
-(unsigned long long)_overrunBeginMCT;
-(id)_glitchIntervalWithRoundingUp:(BOOL)arg1 ;
-(NSNumber *)displayIDNum;
-(unsigned long long)missedVBLCount;
-(id<SignpostSupportTimeInterval>)frameOverrunInterval;
-(id<SignpostSupportTimeInterval>)userVisibleGlitchInterval;
-(id<SignpostSupportTimeInterval>)previousFrameOnScreenInterval;
-(unsigned)swapID;
@end

