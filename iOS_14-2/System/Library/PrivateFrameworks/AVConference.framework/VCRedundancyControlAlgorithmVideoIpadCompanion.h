/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRedundancyControlAlgorithm.h>

@class NSString;

@interface VCRedundancyControlAlgorithmVideoIpadCompanion : NSObject <VCRedundancyControlAlgorithm> {

	unsigned _redundancyPercentage;
	double _redundancyInterval;
	unsigned _packetLossPercentage;
	unsigned _burstyLoss[500];
	unsigned _burstyLossArraySize;
	unsigned _burstyLossArrayIndex;

}

@property (nonatomic,readonly) unsigned redundancyPercentage;              //@synthesize redundancyPercentage=_redundancyPercentage - In the implementation block
@property (nonatomic,readonly) double redundancyInterval;                  //@synthesize redundancyInterval=_redundancyInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateBurstyLoss:(unsigned)arg1 ;
-(unsigned)computeRedundancyWithLossPercentage;
-(unsigned)computeRedundancyWithBurstyLoss;
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV33)arg1 ;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;
@end

