/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/GKSPerformance
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, AudioTier, NSObject;

@interface AudioTierHistogram : NSObject {

	NSMutableDictionary* histogram;
	AudioTier* currentTier;
	double startTime;
	NSObject*<OS_dispatch_queue> awdAudioTierQueue;

}
-(id)init;
-(void)dealloc;
-(void)end;
-(id)newReport;
-(void)newAudioTier:(unsigned)arg1 duplication:(unsigned)arg2 bundling:(unsigned)arg3 codecPayload:(unsigned)arg4 codecBitrate:(unsigned)arg5 mode:(unsigned)arg6 ;
-(void)accumulateTime:(double)arg1 forAudioTier:(id)arg2 ;
@end

