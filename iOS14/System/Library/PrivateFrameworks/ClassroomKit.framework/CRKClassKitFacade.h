/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSString;


@protocol CRKClassKitFacade <NSObject>
@property (nonatomic,readonly) long long accountState; 
@property (nonatomic,copy,readonly) NSString * currentUserDidChangeNotificationName; 
@property (nonatomic,copy,readonly) NSString * currentUserInfoKey; 
@property (nonatomic,copy,readonly) NSString * studentClassMembershipChangeDarwinNotificationName; 
@required
-(void)executeQuery:(id)arg1;
-(long long)accountState;
-(void)currentUserWithCompletion:(/*^block*/id)arg1;
-(void)registerDataObserver:(id)arg1;
-(void)deregisterDataObserver:(id)arg1;
-(void)instructedClassesWithCompletion:(/*^block*/id)arg1;
-(void)saveClass:(id)arg1 completion:(/*^block*/id)arg2;
-(void)enrolledClassesWithCompletion:(/*^block*/id)arg1;
-(id)makeQueryForPersonsWithIdentifiers:(id)arg1;
-(BOOL)ownsError:(id)arg1;
-(id)instructorObserverWithSortDescriptors:(id)arg1;
-(void)instructorsInClassWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(id)studentObserverWithSortDescriptors:(id)arg1;
-(void)studentsInClassWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(id)classDataObserverWithSortDescriptors:(id)arg1;
-(void)removeClass:(id)arg1 completion:(/*^block*/id)arg2;
-(id)makeClassWithLocationID:(id)arg1 name:(id)arg2;
-(void)addStudent:(id)arg1 toClass:(id)arg2;
-(void)removeStudent:(id)arg1 fromClass:(id)arg2;
-(id)objectIDsOfStudentsInClass:(id)arg1;
-(void)addInstructor:(id)arg1 toClass:(id)arg2;
-(void)removeInstructor:(id)arg1 fromClass:(id)arg2;
-(id)objectIDsOfInstructorsInClass:(id)arg1;
-(id)currentUserDataObserverWithSortDescriptors:(id)arg1;
-(id)locationsObserverWithSortDescriptors:(id)arg1;
-(void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)locationsWithObjectIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(id)makeStudentQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(BOOL)arg3 pageSize:(long long)arg4;
-(id)makeInstructorQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(BOOL)arg3 pageSize:(long long)arg4;
-(NSString *)currentUserDidChangeNotificationName;
-(NSString *)currentUserInfoKey;
-(NSString *)studentClassMembershipChangeDarwinNotificationName;

@end

