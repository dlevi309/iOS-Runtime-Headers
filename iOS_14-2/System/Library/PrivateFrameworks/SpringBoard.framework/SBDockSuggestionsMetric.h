/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@class NSArray, PETScalarEventTracker, NSMutableDictionary, PETDistributionEventTracker, NSString;

@interface SBDockSuggestionsMetric : NSObject <SBFAnalyticsBackendEventHandling> {

	NSArray* _trackers;
	PETScalarEventTracker* _enabledTracker;
	NSMutableDictionary* _indexToSuggestionType;
	PETDistributionEventTracker* _distTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(BOOL)_trackEvent:(BOOL)arg1 withPayload:(id)arg2 ;
@end

