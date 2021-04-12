/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@protocol CRKExpiredCoursesInteractionDelegate, CRKRequestPerformingProtocol;
@class CATRemoteTaskOperation, NSSet;

@interface CRKExpiredCoursesInteraction : CATOperation {

	CATRemoteTaskOperation* mLeaveControlGroupsOperation;
	BOOL mIsPrompting;
	NSSet* _courses;
	id<CRKExpiredCoursesInteractionDelegate> _delegate;
	id<CRKRequestPerformingProtocol> _studentDaemonProxy;

}

@property (nonatomic,readonly) id<CRKExpiredCoursesInteractionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<CRKRequestPerformingProtocol> studentDaemonProxy;              //@synthesize studentDaemonProxy=_studentDaemonProxy - In the implementation block
@property (nonatomic,readonly) NSSet * courses;                                                  //@synthesize courses=_courses - In the implementation block
+(id)new;
-(id)init;
-(id<CRKExpiredCoursesInteractionDelegate>)delegate;
-(BOOL)isAsynchronous;
-(void)main;
-(NSSet *)courses;
-(void)cancel;
-(id<CRKRequestPerformingProtocol>)studentDaemonProxy;
-(void)removeCourses:(id)arg1 ;
-(void)leaveControlGroupsOperationDidFinish:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2 courses:(id)arg3 ;
@end

