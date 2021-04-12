/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(BOOL)_floatingAppIsActiveForConfiguration:(long long)arg1 ;
-(void)_trackMedusaConfigChange;
@end

