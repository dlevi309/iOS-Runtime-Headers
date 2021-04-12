/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoCore.framework/ChronoCore
*/


@protocol CHSChronoWidgetServiceServerInterface <NSObject>
@optional
-(oneway void)setMetricsSpecification:(id)arg1;

@required
-(oneway void)expireLocationGracePeriods;
-(id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg1 info:(id)arg2;
-(oneway void)setConfiguredWidgetContainerDescriptors:(id)arg1;
-(oneway void)applicationWithBundleIdentifierEnteredForeground:(id)arg1;
-(id)widgetEnvironmentDataForBundleIdentifier:(id)arg1;
-(void)reloadTimelineForAvocadoWithIdentifier:(id)arg1 inBundleWithIdentifier:(id)arg2 error:(id*)arg3;
-(oneway void)flushPowerlog;

@end

