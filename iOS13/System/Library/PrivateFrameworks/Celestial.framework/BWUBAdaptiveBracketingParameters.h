/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWAdaptiveBracketingParameters.h>
#import <libobjc.A.dylib/BWAdaptiveBracketingDigitalFlashTotalIntegrationTimesProvider.h>

@class UBProgressiveBracketingParameters, NSArray, UBProgressiveBracketingStatistics, NSString;

@interface BWUBAdaptiveBracketingParameters : NSObject <BWAdaptiveBracketingParameters, BWAdaptiveBracketingDigitalFlashTotalIntegrationTimesProvider> {

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
-(void)dealloc;
-(BOOL)stationary;
-(double)totalIntegrationTime;
-(void)updateAdaptiveBracketingFrameParametersUsingGroup:(int)arg1 ;
-(id)initWithProgressiveBracketingParameters:(id)arg1 progressiveBracketingStatisticsClass:(Class)arg2 ;
-(id)adaptiveBracketingFrameParameters;
-(BOOL)generateWhiteBalanceParameters;
-(double)totalIntegrationTimeForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(BOOL)arg3 ;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 ;
-(id)progressiveBracketingParameters;
-(void)stopAdaptiveBracketing;
@end

