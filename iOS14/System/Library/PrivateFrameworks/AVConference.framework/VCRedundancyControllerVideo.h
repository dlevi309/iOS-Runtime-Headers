/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRedundancyControllerProtocol.h>

@protocol VCRedundancyControlAlgorithm;
@class AVCStatisticsCollector, NSArray, NSString;

@interface VCRedundancyControllerVideo : NSObject <VCRedundancyControllerProtocol> {

	id _redundancyControllerDelegate;
	AVCStatisticsCollector* _statisticsCollector;
	unsigned _mode;
	id<VCRedundancyControlAlgorithm> _algorithm;
	unsigned _currentRedundancyPercentage;
	BOOL _isRSUOptimizationEnabled;
	int _forceRedundancyPercentage;
	double _lastDefaultSettingLoadingTime;
	unsigned char _mediaControlInfoFECFeedbackVersion;
	int _type;
	unsigned long long _statisticsID;
	NSArray* _fecLevelPerFrameSizeVector;

}

@property (assign,nonatomic) unsigned long long statisticsID;                     //@synthesize statisticsID=_statisticsID - In the implementation block
@property (nonatomic,readonly) NSArray * fecLevelPerFrameSizeVector;              //@synthesize fecLevelPerFrameSizeVector=_fecLevelPerFrameSizeVector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)convertRedundancyPercentageToRatio:(unsigned)arg1 ;
-(void)dealloc;
-(void)loadDefaultSettings;
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV33)arg1 ;
-(void)reportRedundancyPercentage:(unsigned)arg1 redundancyInterval:(double)arg2 ;
-(id)initWithDelegate:(id)arg1 statisticsCollector:(id)arg2 mode:(unsigned)arg3 maxAllowedRedundancyPercentage:(unsigned)arg4 ;
-(unsigned long long)statisticsID;
-(void)setStatisticsID:(unsigned long long)arg1 ;
-(NSArray *)fecLevelPerFrameSizeVector;
@end

