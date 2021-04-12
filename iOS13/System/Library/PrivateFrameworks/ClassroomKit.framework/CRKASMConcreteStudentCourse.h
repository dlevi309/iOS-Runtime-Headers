/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/CRKASMConcreteCourse.h>
#import <libobjc.A.dylib/CRKASMStudentCourse.h>

@protocol CRKClassKitClass, CRKClassKitFacade, CRKIdentity, CRKClassKitDataObserver;
@class NSArray, NSDictionary, DMFControlGroupIdentifier, NSString;

@interface CRKASMConcreteStudentCourse : CRKASMConcreteCourse <CRKASMStudentCourse> {

	id<CRKClassKitClass> _backingClass;
	id<CRKClassKitFacade> _classKitFacade;
	id<CRKIdentity> _identity;
	NSDictionary* _instructorsByIdentifier;
	id<CRKClassKitDataObserver> _instructorObserver;

}

@property (nonatomic,readonly) id<CRKClassKitClass> backingClass;                           //@synthesize backingClass=_backingClass - In the implementation block
@property (nonatomic,readonly) id<CRKClassKitFacade> classKitFacade;                        //@synthesize classKitFacade=_classKitFacade - In the implementation block
@property (nonatomic,retain) id<CRKIdentity> identity;                                      //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) NSDictionary * instructorsByIdentifier;                        //@synthesize instructorsByIdentifier=_instructorsByIdentifier - In the implementation block
@property (nonatomic,readonly) id<CRKClassKitDataObserver> instructorObserver;              //@synthesize instructorObserver=_instructorObserver - In the implementation block
@property (nonatomic,copy,readonly) DMFControlGroupIdentifier * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long mascot; 
@property (nonatomic,readonly) unsigned long long color; 
@property (nonatomic,copy,readonly) NSArray * instructors; 
+(id)keyPathsForValuesAffectingInstructors;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<CRKIdentity>)identity;
-(void)setIdentity:(id<CRKIdentity>)arg1 ;
-(NSArray *)instructors;
-(id)makeDataObserver;
-(void)refreshInstructors;
-(NSDictionary *)instructorsByIdentifier;
-(id<CRKClassKitClass>)backingClass;
-(id<CRKClassKitFacade>)classKitFacade;
-(void)didFetchInstructors:(id)arg1 error:(id)arg2 ;
-(void)updateWithInstructors:(id)arg1 ;
-(void)updateInstructorsByIdentifier:(id)arg1 ;
-(void)setInstructorsByIdentifier:(NSDictionary *)arg1 ;
-(id)initWithClass:(id)arg1 classKitFacade:(id)arg2 ;
-(void)updateWithClass:(id)arg1 ;
-(id<CRKClassKitDataObserver>)instructorObserver;
@end

