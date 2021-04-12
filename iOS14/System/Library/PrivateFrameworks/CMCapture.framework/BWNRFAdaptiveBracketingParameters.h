/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWNoiseReductionAndFusionProcessorBracketingParameters.h>

@class NRFProgressiveBracketingParameters, NRFProgressiveBracketingStatistics, NSString;

@interface BWNRFAdaptiveBracketingParameters : NSObject <BWNoiseReductionAndFusionProcessorBracketingParameters> {

	NRFProgressiveBracketingParameters* _progressiveBracketingParameters;
	os_unfair_lock_s _adaptiveBracketingFrameParametersLock;
	BOOL _stopAdaptiveBracketing;
	Class _progressiveBracketingStatisticsClass;
	NRFProgressiveBracketingStatistics* _lastProgressiveBracketingStatisticsForTotalIntegrationTimesProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)totalIntegrationTime;
-(BOOL)generateWhiteBalanceParameters;
-(id)initWithProgressiveBracketingParameters:(id)arg1 progressiveBracketingStatisticsClass:(Class)arg2 ;
-(id)adaptiveBracketingFrameParametersForGroup:(int)arg1 ;
-(float)evZeroTargetGain;
-(float)previewSNR;
-(double)totalIntegrationTimeForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(BOOL)arg3 detectedObjects:(id)arg4 ;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 ;
-(id)progressiveBracketingParameters;
-(void)stopAdaptiveBracketing;
-(BOOL)stationary;
-(void)dealloc;
@end

