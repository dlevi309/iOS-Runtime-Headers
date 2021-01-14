/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSArray;


@protocol CRKASMRosterProviding <NSObject>
@property (nonatomic,readonly) id<CRKASMRoster> roster; 
@property (getter=isPopulated,nonatomic,readonly) BOOL populated; 
@property (nonatomic,readonly) id<CRKASMUserFetching> userFetcher; 
@property (nonatomic,copy,readonly) NSArray * locationsWithManagePermissions; 
@required
-(void)refresh;
-(id<CRKASMRoster>)roster;
-(BOOL)isPopulated;
-(void)createCourseWithProperties:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id*)arg3;
-(void)removeCourseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(NSArray *)locationsWithManagePermissions;
-(id)studentDirectoryForLocationIDs:(id)arg1;
-(id)instructorDirectoryForLocationIDs:(id)arg1;
-(id<CRKASMUserFetching>)userFetcher;

@end

