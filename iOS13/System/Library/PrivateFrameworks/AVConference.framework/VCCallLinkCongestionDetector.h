/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface VCCallLinkCongestionDetector : NSObject {

	BOOL isLinkCongested;
	double rttThreshold;
	double lossRateThreshold;

}

@property (assign,nonatomic) BOOL isLinkCongested; 
-(id)initWithRTTThreshold:(double)arg1 lossRateThreshold:(double)arg2 ;
-(void)addNewRTT:(double)arg1 packetLossRate:(double)arg2 timestamp:(double)arg3 ;
-(BOOL)isLinkCongested;
-(void)setIsLinkCongested:(BOOL)arg1 ;
@end

