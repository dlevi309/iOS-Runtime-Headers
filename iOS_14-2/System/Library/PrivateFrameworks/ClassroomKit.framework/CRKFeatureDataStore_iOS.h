/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKFeatureDataStoreProtocol.h>

@class NSSet, NSString;

@interface CRKFeatureDataStore_iOS : NSObject <CRKFeatureDataStoreProtocol>

@property (getter=isClassroomUnpromptedScreenObservationForced,nonatomic,readonly) BOOL classroomUnpromptedScreenObservationForced; 
@property (getter=isClassroomAutomaticClassJoiningForced,nonatomic,readonly) BOOL classroomAutomaticClassJoiningForced; 
@property (getter=isClassroomRequestPermissionToLeaveClassesForced,nonatomic,readonly) BOOL classroomRequestPermissionToLeaveClassesForced; 
@property (nonatomic,copy,readonly) NSSet * activeClassroomRoles; 
@property (assign,getter=isClassroomStudentRoleEnabled,nonatomic) BOOL classroomStudentRoleEnabled; 
@property (assign,getter=isClassroomInstructorRoleEnabled,nonatomic) BOOL classroomInstructorRoleEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)crkBoolTypeFromMCBoolType:(int)arg1 ;
+(id)sharedDataStore;
-(unsigned long long)boolRestrictionForFeature:(id)arg1 ;
-(void)setClassroomStudentRoleEnabled:(BOOL)arg1 ;
-(BOOL)isClassroomAutomaticClassJoiningForced;
-(BOOL)isClassroomUnpromptedScreenObservationForced;
-(BOOL)isClassroomStudentRoleEnabled;
-(BOOL)isClassroomInstructorRoleEnabled;
-(unsigned long long)effectiveBoolValueForSetting:(id)arg1 outAsk:(BOOL*)arg2 ;
-(NSSet *)activeClassroomRoles;
-(void)setClassroomInstructorRoleEnabled:(BOOL)arg1 ;
-(BOOL)isClassroomRequestPermissionToLeaveClassesForced;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 ;
-(unsigned long long)effectiveValueForSetting:(id)arg1 configurationUUID:(id)arg2 outAsk:(BOOL*)arg3 ;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 configurationUUID:(id)arg4 ;
@end

