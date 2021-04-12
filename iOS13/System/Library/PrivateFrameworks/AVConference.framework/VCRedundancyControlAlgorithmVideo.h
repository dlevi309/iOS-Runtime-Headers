/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRedundancyControlAlgorithm.h>

@class NSString;

@interface VCRedundancyControlAlgorithmVideo : NSObject <VCRedundancyControlAlgorithm> {

	unsigned _redundancyPercentage;
	double _redundancyInterval;
	double _packetLossPercentage;
	double _packetLossPercentageVideo;
	double _plrEnvelope;
	BOOL _isNetworkCongested;
	unsigned _maxAllowedRedundancyPercentage;
	unsigned _burstyLoss[8];
	unsigned _burstyLossArraySize;
	unsigned _burstyLossArrayIndex;
	unsigned _redundancyMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned redundancyPercentage;              //@synthesize redundancyPercentage=_redundancyPercentage - In the implementation block
@property (nonatomic,readonly) double redundancyInterval;                  //@synthesize redundancyInterval=_redundancyInterval - In the implementation block
-(void)updateBurstyLoss:(unsigned)arg1 ;
-(unsigned)computeRedundancyWithLossPercentage;
-(unsigned)computeRedundancyWithBurstyLoss;
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV29)arg1 ;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;
-(id)initWithRedundancyControllerMode:(unsigned)arg1 maxAllowedRedundancyPercentage:(unsigned)arg2 ;
@end

