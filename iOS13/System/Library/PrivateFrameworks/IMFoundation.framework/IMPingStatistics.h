/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


#import <IMFoundation/IMFoundation-Structs.h>
@interface IMPingStatistics : NSObject {

	double _packetLossRate;
	double _medianRoundtripTime;
	double _averageRoundtripTime;
	double _minRoundtripTime;
	double _maxRoundtripTime;
	double _standardDeviationRoundtripTime;
	double _sumRoundtripTimes;
	int _numPingsTransmitted;
	int _numPingsReceived;
	int _numPacketsSuccessfullySent;

}

@property (assign,setter=_setMedianRoundtripTime:,nonatomic) double medianRoundtripTime;                                    //@synthesize medianRoundtripTime=_medianRoundtripTime - In the implementation block
@property (assign,setter=_setMinRoundtripTime:,nonatomic) double minRoundtripTime;                                          //@synthesize minRoundtripTime=_minRoundtripTime - In the implementation block
@property (assign,setter=_setMaxRoundtripTime:,nonatomic) double maxRoundtripTime;                                          //@synthesize maxRoundtripTime=_maxRoundtripTime - In the implementation block
@property (assign,setter=_setStandardDeviationRoundtripTime:,nonatomic) double standardDeviationRoundtripTime;              //@synthesize standardDeviationRoundtripTime=_standardDeviationRoundtripTime - In the implementation block
@property (nonatomic,readonly) double averageRoundtripTime;                                                                 //@synthesize averageRoundtripTime=_averageRoundtripTime - In the implementation block
@property (nonatomic,readonly) int numPingsTransmitted;                                                                     //@synthesize numPingsTransmitted=_numPingsTransmitted - In the implementation block
@property (nonatomic,readonly) int numPingsReceived;                                                                        //@synthesize numPingsReceived=_numPingsReceived - In the implementation block
@property (nonatomic,readonly) double packetLossRate;                                                                       //@synthesize packetLossRate=_packetLossRate - In the implementation block
@property (nonatomic,readonly) int packetsSuccessfullySent;                                                                 //@synthesize numPacketsSuccessfullySent=_numPacketsSuccessfullySent - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMaxRTT:(double)arg1 medianRTT:(double)arg2 avgRTT:(double)arg3 minRTT:(double)arg4 transmitted:(int)arg5 successful:(int)arg6 received:(int)arg7 ;
-(double)packetLossRate;
-(void)_addTransmittedPacket:(BOOL)arg1 ;
-(void)_addReceivedPacket:(double)arg1 ;
-(double)maxRoundtripTime;
-(void)_setMaxRoundtripTime:(double)arg1 ;
-(double)medianRoundtripTime;
-(void)_setMedianRoundtripTime:(double)arg1 ;
-(double)minRoundtripTime;
-(void)_setMinRoundtripTime:(double)arg1 ;
-(double)averageRoundtripTime;
-(int)numPingsReceived;
-(int)numPingsTransmitted;
-(int)packetsSuccessfullySent;
-(double)standardDeviationRoundtripTime;
-(void)_setStandardDeviationRoundtripTime:(double)arg1 ;
@end

