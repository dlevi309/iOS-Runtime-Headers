/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWNoiseReductionAndFusionProcessorBracketingParameters.h>

@class UBProgressiveBracketingParameters, NSArray, UBProgressiveBracketingStatistics, NSString;

@interface BWUBAdaptiveBracketingParameters : NSObject <BWNoiseReductionAndFusionProcessorBracketingParameters> {

	UBProgressiveBracketingParameters* _progressiveBracketingParameters;
	os_unfair_lock_s _adaptiveBracketingFrameParametersLock;
	NSArray* _adaptiveBracketingFrameParameters;
	BOOL _stopAdaptiveBracketing;
	Class _progressiveBracketingStatisticsClass;
	UBProgressiveBracketingStatistics* _lastProgressiveBracketingStatisticsForTotalIntegrationTimesProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateAdaptiveBracketingFrameParametersUsingGroup:(int)arg1 ;
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

