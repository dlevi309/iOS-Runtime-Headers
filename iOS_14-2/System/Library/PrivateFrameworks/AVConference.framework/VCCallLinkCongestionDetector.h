/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

