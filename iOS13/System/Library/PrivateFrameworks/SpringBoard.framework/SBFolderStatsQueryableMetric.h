/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@class PETDistributionEventTracker, NSString;

@interface SBFolderStatsQueryableMetric : NSObject <SBFAnalyticsBackendEventHandling> {

	PETDistributionEventTracker* _dockAppsTracker;
	PETDistributionEventTracker* _dockFoldersTracker;
	PETDistributionEventTracker* _dockItemsTracker;
	PETDistributionEventTracker* _pageTracker;
	PETDistributionEventTracker* _folderTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
@end

