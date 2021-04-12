/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSSet;


@protocol CRKFeatureDataStoreProtocol <NSObject>
@property (getter=isClassroomUnpromptedScreenObservationForced,nonatomic,readonly) BOOL classroomUnpromptedScreenObservationForced; 
@property (getter=isClassroomAutomaticClassJoiningForced,nonatomic,readonly) BOOL classroomAutomaticClassJoiningForced; 
@property (getter=isClassroomRequestPermissionToLeaveClassesForced,nonatomic,readonly) BOOL classroomRequestPermissionToLeaveClassesForced; 
@property (nonatomic,copy,readonly) NSSet * activeClassroomRoles; 
@property (assign,getter=isClassroomStudentRoleEnabled,nonatomic) BOOL classroomStudentRoleEnabled; 
@property (assign,getter=isClassroomInstructorRoleEnabled,nonatomic) BOOL classroomInstructorRoleEnabled; 
@optional
-(BOOL)isFeatureForced:(id)arg1;

@required
+(id)sharedDataStore;
-(NSSet *)activeClassroomRoles;
-(BOOL)isClassroomStudentRoleEnabled;
-(void)setClassroomStudentRoleEnabled:(BOOL)arg1;
-(BOOL)isClassroomInstructorRoleEnabled;
-(void)setClassroomInstructorRoleEnabled:(BOOL)arg1;
-(BOOL)isClassroomUnpromptedScreenObservationForced;
-(BOOL)isClassroomAutomaticClassJoiningForced;
-(BOOL)isClassroomRequestPermissionToLeaveClassesForced;
-(unsigned long long)boolRestrictionForFeature:(id)arg1;
-(unsigned long long)effectiveBoolValueForSetting:(id)arg1 outAsk:(BOOL*)arg2;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3;
-(unsigned long long)effectiveValueForSetting:(id)arg1 configurationUUID:(id)arg2 outAsk:(BOOL*)arg3;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 configurationUUID:(id)arg4;

@end

