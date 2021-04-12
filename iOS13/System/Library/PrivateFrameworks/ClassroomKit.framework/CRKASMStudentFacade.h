/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSArray;


@protocol CRKASMStudentFacade
@property (nonatomic,readonly) NSObject*<CRKASMOrganization> organization; 
@property (nonatomic,readonly) NSObject*<CRKASMUser> student; 
@property (nonatomic,copy,readonly) NSArray * enrolledCourses; 
@required
-(void)refresh;
-(NSObject*<CRKASMOrganization>)organization;
-(NSObject*<CRKASMUser>)student;
-(NSArray *)enrolledCourses;

@end

