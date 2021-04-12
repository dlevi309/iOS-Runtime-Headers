/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/


@interface OSATasking : NSObject
+(id)getDefaultTasking;
+(id)normalizeInstructions:(id)arg1 ;
+(id)applyTasking:(id)arg1 taskId:(id)arg2 fromBlob:(id)arg3 ;
+(void)setCRKeyToRandomValue;
+(BOOL)shouldApplyPreference:(id)arg1 ;
+(BOOL)preference:(id)arg1 alreadySetInInstructions:(id)arg2 ;
+(id)proxyTasking:(id)arg1 taskId:(id)arg2 usingConfig:(id)arg3 fromBlob:(id)arg4 ;
+(void)checkTaskingRelevance;
+(id)getInstalledTaskIds;
+(id)getAvailableTaskingRoutings;
+(id)selectConfigFromBlob:(id)arg1 ;
@end

