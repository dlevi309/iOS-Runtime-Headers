/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoCore.framework/ChronoCore
*/


@protocol CHSChronoToolServiceServerInterface <NSObject>
@required
-(oneway void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)disableWakeBudgetWithCompletion:(/*^block*/id)arg1;
-(oneway void)disableWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)widgetsWithTimelines:(/*^block*/id)arg1;
-(oneway void)resetWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)resetCaches:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)resetWakeBudgetWithCompletion:(/*^block*/id)arg1;
-(oneway void)listStateCaptureIdentifiersWithCompletion:(/*^block*/id)arg1;
-(oneway void)wakesRemainingForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)fetchStateWithCompletion:(/*^block*/id)arg1;
-(oneway void)fetchStateForItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)timelineForWidgetKey:(id)arg1 completion:(/*^block*/id)arg2;

@end

