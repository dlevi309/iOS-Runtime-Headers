/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)end;
-(id)init;
-(void)dealloc;
-(id)newReport;
-(void)newAudioTier:(unsigned)arg1 duplication:(unsigned)arg2 bundling:(unsigned)arg3 codecPayload:(unsigned)arg4 codecBitrate:(unsigned)arg5 mode:(unsigned)arg6 ;
-(void)accumulateTime:(double)arg1 forAudioTier:(id)arg2 ;
@end

