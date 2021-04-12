/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@interface HMDAccessorySettingMergeHandler : NSObject
+(BOOL)mergeFirst:(id)arg1 second:(id)arg2 mergeStrategy:(id)arg3 ;
+(id)_mergeValidValueConstraintsFirst:(id)arg1 second:(id)arg2 ;
+(id)_mergeRangeConstraintsFirst:(id)arg1 second:(id)arg2 ;
+(id)_mergeFirst:(id)arg1 second:(id)arg2 mergedConstraints:(id)arg3 mergeStrategy:(id)arg4 ;
+(BOOL)_extractMinMaxStep:(id)arg1 minConstraint:(id*)arg2 maxConstraint:(id*)arg3 stepConstraint:(id*)arg4 first:(id)arg5 ;
+(BOOL)_isNumber:(id)arg1 betweenStart:(id)arg2 andEnd:(id)arg3 first:(id)arg4 ;
@end

