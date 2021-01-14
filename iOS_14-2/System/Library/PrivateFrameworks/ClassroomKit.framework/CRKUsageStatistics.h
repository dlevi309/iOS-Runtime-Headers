/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@interface CRKUsageStatistics : NSObject
+(void)clearDistributionKey:(id)arg1 ;
+(void)incrementKey:(id)arg1 ;
+(void)pushDouble:(double)arg1 forKey:(id)arg2 ;
+(void)logWillAutomaticallyJoinCourses:(BOOL)arg1 ;
+(void)logDidAcceptJoinCourse;
+(void)logDidDenyJoinCourse;
+(void)logDidModifyPermission;
+(void)logDidAllowAction;
+(void)logDidDenyAction;
+(void)logDidShareDocument;
+(void)logDidShareLink;
+(void)logDidSuccessfullyEnroll;
+(void)logDidEnterInvalidEnrollmentPin;
+(void)logDidFailEnrollment;
+(void)resetConfigurationCounts;
+(void)logDidDeleteCourse;
+(void)logCourseCount:(unsigned long long)arg1 ;
@end

