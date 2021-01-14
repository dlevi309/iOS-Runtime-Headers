/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKClassKitRosterRequirements <NSObject>
@property (nonatomic,readonly) long long accountState; 
@required
-(void)executeQuery:(id)arg1;
-(id)addObserver:(/*^block*/id)arg1;
-(void)removeObserver:(id)arg1;
-(long long)accountState;
-(void)currentUserWithCompletion:(/*^block*/id)arg1;
-(void)saveClass:(id)arg1 completion:(/*^block*/id)arg2;
-(id)makeQueryForPersonsWithIdentifiers:(id)arg1;
-(BOOL)ownsError:(id)arg1;
-(void)removeClass:(id)arg1 completion:(/*^block*/id)arg2;
-(id)makeClassWithLocationID:(id)arg1 name:(id)arg2;
-(void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)locationsWithObjectIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(id)makeStudentQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(BOOL)arg3 pageSize:(long long)arg4;
-(id)makeInstructorQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(BOOL)arg3 pageSize:(long long)arg4;
-(void)classesWithCompletion:(/*^block*/id)arg1;
-(id)objectIDsOfPersonsInClass:(id)arg1;
-(id)objectIDsOfTrustedPersonsInClass:(id)arg1;
-(void)addPerson:(id)arg1 toClass:(id)arg2;
-(void)removePerson:(id)arg1 fromClass:(id)arg2;
-(void)addTrustedPerson:(id)arg1 toClass:(id)arg2;
-(void)removeTrustedPerson:(id)arg1 fromClass:(id)arg2;
-(void)personsInClassWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)trustedPersonsInClassWithObjectID:(id)arg1 completion:(/*^block*/id)arg2;

@end

