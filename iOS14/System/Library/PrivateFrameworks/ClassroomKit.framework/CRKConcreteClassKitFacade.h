/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKClassKitFacade.h>

@class NSString, CRKClassKitAccountStateProvider;

@interface CRKConcreteClassKitFacade : NSObject <CRKClassKitFacade> {

	CRKClassKitAccountStateProvider* _accountStateProvider;

}

@property (nonatomic,readonly) CRKClassKitAccountStateProvider * accountStateProvider;                          //@synthesize accountStateProvider=_accountStateProvider - In the implementation block
@property (nonatomic,readonly) long long accountState; 
@property (nonatomic,copy,readonly) NSString * currentUserDidChangeNotificationName; 
@property (nonatomic,copy,readonly) NSString * currentUserInfoKey; 
@property (nonatomic,copy,readonly) NSString * studentClassMembershipChangeDarwinNotificationName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makePersonSortDescriptorsSortingGivenNameFirst:(BOOL)arg1 ;
+(id)keyPathsForValuesAffectingAccountState;
-(id)dataStore;
-(void)executeQuery:(id)arg1 ;
-(id)init;
-(long long)accountState;
-(void)currentUserWithCompletion:(/*^block*/id)arg1 ;
-(void)registerDataObserver:(id)arg1 ;
-(void)deregisterDataObserver:(id)arg1 ;
-(void)instructedClassesWithCompletion:(/*^block*/id)arg1 ;
-(void)saveClass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enrolledClassesWithCompletion:(/*^block*/id)arg1 ;
-(id)makeQueryForPersonsWithIdentifiers:(id)arg1 ;
-(CRKClassKitAccountStateProvider *)accountStateProvider;
-(void)addPerson:(id)arg1 withRole:(unsigned long long)arg2 toClass:(id)arg3 ;
-(void)removePerson:(id)arg1 withRole:(unsigned long long)arg2 fromClass:(id)arg3 ;
-(id)objectIDsOfMembersInClass:(id)arg1 withRole:(unsigned long long)arg2 ;
-(id)makePredicateForObjectIDs:(id)arg1 ;
-(id)makeQueryForPersonsWithRole:(long long)arg1 locationIDs:(id)arg2 searchString:(id)arg3 sortingGivenNameFirst:(BOOL)arg4 pageSize:(long long)arg5 ;
-(id)makePredicatesForObjectIDs:(id)arg1 ;
-(BOOL)ownsError:(id)arg1 ;
-(id)instructorObserverWithSortDescriptors:(id)arg1 ;
-(void)instructorsInClassWithObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)studentObserverWithSortDescriptors:(id)arg1 ;
-(void)studentsInClassWithObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)classDataObserverWithSortDescriptors:(id)arg1 ;
-(void)removeClass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)makeClassWithLocationID:(id)arg1 name:(id)arg2 ;
-(void)addStudent:(id)arg1 toClass:(id)arg2 ;
-(void)removeStudent:(id)arg1 fromClass:(id)arg2 ;
-(id)objectIDsOfStudentsInClass:(id)arg1 ;
-(void)addInstructor:(id)arg1 toClass:(id)arg2 ;
-(void)removeInstructor:(id)arg1 fromClass:(id)arg2 ;
-(id)objectIDsOfInstructorsInClass:(id)arg1 ;
-(id)currentUserDataObserverWithSortDescriptors:(id)arg1 ;
-(id)locationsObserverWithSortDescriptors:(id)arg1 ;
-(void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)locationsWithObjectIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)makeStudentQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(BOOL)arg3 pageSize:(long long)arg4 ;
-(id)makeInstructorQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(BOOL)arg3 pageSize:(long long)arg4 ;
-(NSString *)currentUserDidChangeNotificationName;
-(NSString *)currentUserInfoKey;
-(NSString *)studentClassMembershipChangeDarwinNotificationName;
@end
