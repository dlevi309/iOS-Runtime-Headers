/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(NSSet *)courses;
-(void)removeCourses:(id)arg1 ;
-(id<CRKRequestPerformingProtocol>)studentDaemonProxy;
-(void)leaveControlGroupsOperationDidFinish:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2 courses:(id)arg3 ;
@end

