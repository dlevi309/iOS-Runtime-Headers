/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@protocol CRKRequestPerformingProtocol, CRKExpiredCoursesInteractionDelegate;
@class CRKCourseEnrollmentController, NSMutableSet, CATSerialOperationQueue;

@interface CRKMonitorExpiredCoursesInteraction : CATOperation {

	BOOL mIsObservingEnrollmentController;
	id<CRKRequestPerformingProtocol> _studentDaemonProxy;
	id<CRKExpiredCoursesInteractionDelegate> _expiredCoursesInteractionDelegate;
	CRKCourseEnrollmentController* _enrollmentController;
	NSMutableSet* _expiredCoursesToPresent;
	CATSerialOperationQueue* _serialOperationQueue;

}

@property (nonatomic,readonly) id<CRKRequestPerformingProtocol> studentDaemonProxy;                                     //@synthesize studentDaemonProxy=_studentDaemonProxy - In the implementation block
@property (nonatomic,readonly) id<CRKExpiredCoursesInteractionDelegate> expiredCoursesInteractionDelegate;              //@synthesize expiredCoursesInteractionDelegate=_expiredCoursesInteractionDelegate - In the implementation block
@property (nonatomic,readonly) CRKCourseEnrollmentController * enrollmentController;                                    //@synthesize enrollmentController=_enrollmentController - In the implementation block
@property (nonatomic,readonly) NSMutableSet * expiredCoursesToPresent;                                                  //@synthesize expiredCoursesToPresent=_expiredCoursesToPresent - In the implementation block
@property (nonatomic,readonly) CATSerialOperationQueue * serialOperationQueue;                                          //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isAsynchronous;
-(void)main;
-(CATSerialOperationQueue *)serialOperationQueue;
-(void)cancel;
-(id<CRKRequestPerformingProtocol>)studentDaemonProxy;
-(CRKCourseEnrollmentController *)enrollmentController;
-(NSMutableSet *)expiredCoursesToPresent;
-(void)beginInteractionWithExpiredCourses:(id)arg1 ;
-(id<CRKExpiredCoursesInteractionDelegate>)expiredCoursesInteractionDelegate;
-(void)expiredCoursesInteractionDidFinish:(id)arg1 ;
-(void)updateWithCourses:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 enrollmentController:(id)arg2 expiredCoursesInteractionDelegate:(id)arg3 ;
@end

