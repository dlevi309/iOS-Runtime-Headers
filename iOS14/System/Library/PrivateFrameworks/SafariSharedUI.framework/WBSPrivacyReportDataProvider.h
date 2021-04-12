/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

@class NSArray, WBSKnownTrackingThirdParty, NSSet;


@protocol WBSPrivacyReportDataProvider <NSObject>
@property (nonatomic,readonly) NSArray * knownTrackers; 
@property (nonatomic,retain) NSArray * knownTrackersSortDescriptors; 
@property (nonatomic,readonly) NSArray * trackedFirstParties; 
@property (nonatomic,retain) NSArray * trackedFirstPartiesSortDescriptors; 
@property (nonatomic,readonly) WBSKnownTrackingThirdParty * mostSeenKnownTracker; 
@property (nonatomic,readonly) NSSet * trackerOwnerNames; 
@property (nonatomic,readonly) double ratioOfTrackedFirstPartiesToAllVisited; 
@property (nonatomic,readonly) BOOL hasData; 
@required
-(double)ratioOfTrackedFirstPartiesToAllVisited;
-(WBSKnownTrackingThirdParty *)mostSeenKnownTracker;
-(BOOL)hasData;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1;
-(NSArray *)knownTrackers;
-(NSArray *)trackedFirstParties;
-(void)loadDataFromStartDate:(id)arg1 toEndDate:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(NSArray *)knownTrackersSortDescriptors;
-(void)setKnownTrackersSortDescriptors:(id)arg1;
-(NSArray *)trackedFirstPartiesSortDescriptors;
-(void)setTrackedFirstPartiesSortDescriptors:(id)arg1;
-(NSSet *)trackerOwnerNames;

@end

