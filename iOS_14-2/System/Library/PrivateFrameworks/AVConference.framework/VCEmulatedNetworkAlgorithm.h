/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCEmulatedNetworkAlgorithm <NSObject>
@property (nonatomic,readonly) double expectedProcessEndTime; 
@property (assign) unsigned packetCountInNetworkQueue; 
@required
-(void)process:(id)arg1;
-(void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2;
-(double)expectedProcessEndTime;
-(unsigned)packetCountInNetworkQueue;
-(void)setPacketCountInNetworkQueue:(unsigned)arg1;

@end

