/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@interface MCSignpostManager : NSObject
+(void)willPostEffectiveSettingsChangedNotification;
+(void)willSetFeature:(id)arg1 ;
+(void)willGetFeature:(id)arg1 ;
+(id)signpostsForTypeFilter:(unsigned long long)arg1 featureFilter:(id)arg2 duration:(double)arg3 error:(id*)arg4 ;
@end

