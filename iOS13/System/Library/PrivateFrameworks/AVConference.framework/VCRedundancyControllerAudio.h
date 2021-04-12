/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRedundancyControllerProtocol.h>

@protocol VCRedundancyControlAlgorithm;
@class AVCStatisticsCollector, NSString;

@interface VCRedundancyControllerAudio : NSObject <VCRedundancyControllerProtocol> {

	id _redundancyControllerDelegate;
	AVCStatisticsCollector* _statisticsCollector;
	unsigned _mode;
	id<VCRedundancyControlAlgorithm> _algorithm;
	unsigned _currentRedundancyPercentage;
	double _currentRedundancyInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV29)arg1 ;
-(void)reportRedundancyPercentage:(unsigned)arg1 redundancyInterval:(double)arg2 ;
-(id)initWithDelegate:(id)arg1 statisticsCollector:(id)arg2 mode:(unsigned)arg3 ;
@end

