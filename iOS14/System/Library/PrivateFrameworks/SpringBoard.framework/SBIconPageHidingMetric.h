/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@class PETDistributionEventTracker, NSString;

@interface SBIconPageHidingMetric : NSObject <SBFAnalyticsBackendEventHandling> {

	PETDistributionEventTracker* _pagesHiddenTracker;
	PETDistributionEventTracker* _pagesVisibleTracker;
	PETDistributionEventTracker* _pagesTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
@end

