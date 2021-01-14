/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@interface HMDAccessorySettingMergeHandler : NSObject
+(BOOL)mergeFirst:(id)arg1 second:(id)arg2 mergeStrategy:(id)arg3 shouldAddMissing:(BOOL)arg4 ;
+(id)_mergeValidValueConstraintsFirst:(id)arg1 second:(id)arg2 ;
+(id)_mergeRangeConstraintsFirst:(id)arg1 second:(id)arg2 shouldAddMissing:(BOOL)arg3 ;
+(id)_mergeFirst:(id)arg1 second:(id)arg2 mergedConstraints:(id)arg3 mergeStrategy:(id)arg4 ;
+(BOOL)_extractMinMaxStep:(id)arg1 minConstraint:(id*)arg2 maxConstraint:(id*)arg3 stepConstraint:(id*)arg4 first:(id)arg5 ;
+(BOOL)_isNumber:(id)arg1 betweenStart:(id)arg2 andEnd:(id)arg3 first:(id)arg4 ;
@end

