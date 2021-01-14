/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

