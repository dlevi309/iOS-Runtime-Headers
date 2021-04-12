/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@class PETScalarEventTracker, PETDistributionEventTracker, NSString;

@interface SBMedusaConfigurationUsageMetric : NSObject <SBFAnalyticsBackendEventHandling> {

	long long _currentSpaceConfig;
	long long _currentFloatingConfig;
	BOOL _isPIPVideoActive;
	BOOL _isFloatingActive;
	double _floatingAppActivationTimestamp;
	double _pipVideoActivationTimestamp;
	PETScalarEventTracker* _medusaUsageTracker;
	PETDistributionEventTracker* _floatingAppSessionTimeTracker;
	PETDistributionEventTracker* _pipVideoSessionTimeTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_trackMedusaConfigChange;
-(id)init;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(BOOL)_floatingAppIsActiveForConfiguration:(long long)arg1 ;
@end

