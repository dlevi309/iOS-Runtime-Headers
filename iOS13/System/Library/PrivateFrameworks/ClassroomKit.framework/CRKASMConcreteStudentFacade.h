/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMStudentFacade.h>

@protocol CRKClassKitFacade, CRKASMOrganization;
@class NSArray, CRKASMConcreteUser, NSObject, NSDictionary;

@interface CRKASMConcreteStudentFacade : NSObject <CRKASMStudentFacade> {

	NSArray* _enrolledCourses;
	CRKASMConcreteUser* _student;
	id<CRKClassKitFacade> _classKitFacade;
	NSObject*<CRKASMOrganization> _organization;
	NSDictionary* _enrolledCoursesByObjectID;
	NSArray* _dataObservers;

}

@property (nonatomic,readonly) id<CRKClassKitFacade> classKitFacade;                  //@synthesize classKitFacade=_classKitFacade - In the implementation block
@property (nonatomic,retain) NSObject*<CRKASMOrganization> organization;              //@synthesize organization=_organization - In the implementation block
@property (nonatomic,retain) CRKASMConcreteUser * student;                            //@synthesize student=_student - In the implementation block
@property (nonatomic,copy) NSDictionary * enrolledCoursesByObjectID;                  //@synthesize enrolledCoursesByObjectID=_enrolledCoursesByObjectID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dataObservers;                          //@synthesize dataObservers=_dataObservers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * enrolledCourses;                        //@synthesize enrolledCourses=_enrolledCourses - In the implementation block
+(id)keyPathsForValuesAffectingEnrolledCourses;
-(id)init;
-(void)dealloc;
-(void)refresh;
-(NSObject*<CRKASMOrganization>)organization;
-(void)setOrganization:(NSObject*<CRKASMOrganization>)arg1 ;
-(id<CRKClassKitFacade>)classKitFacade;
-(id)initWithClassKitFacade:(id)arg1 ;
-(id)makeDataObservers;
-(void)currentUserDidChange:(id)arg1 ;
-(void)refreshStudentValue;
-(void)refreshEnrolledCourses;
-(NSDictionary *)enrolledCoursesByObjectID;
-(void)didFetchEnrolledClasses:(id)arg1 error:(id)arg2 ;
-(void)updateCoursesByObjectID:(id)arg1 ;
-(void)setEnrolledCoursesByObjectID:(NSDictionary *)arg1 ;
-(void)didFetchCurrentUser:(id)arg1 error:(id)arg2 ;
-(void)updateStudent:(id)arg1 ;
-(CRKASMConcreteUser *)student;
-(void)setStudent:(CRKASMConcreteUser *)arg1 ;
-(void)updateOrganization:(id)arg1 ;
-(NSArray *)enrolledCourses;
-(NSArray *)dataObservers;
@end

