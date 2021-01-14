/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKShareTargetCollectorDelegate;
@class NSSet;

@interface CRKShareTargetCollector : NSObject {

	id<CRKShareTargetCollectorDelegate> _delegate;
	NSSet* _studentTargets;
	NSSet* _instructorTargets;

}

@property (nonatomic,copy) NSSet * studentTargets;                                             //@synthesize studentTargets=_studentTargets - In the implementation block
@property (nonatomic,copy) NSSet * instructorTargets;                                          //@synthesize instructorTargets=_instructorTargets - In the implementation block
@property (assign,nonatomic,__weak) id<CRKShareTargetCollectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CRKShareTargetCollectorDelegate>)delegate;
-(void)setDelegate:(id<CRKShareTargetCollectorDelegate>)arg1 ;
-(void)studentTargetsDidChange:(id)arg1 ;
-(void)instructorTargetsDidChange:(id)arg1 ;
-(NSSet *)studentTargets;
-(void)setStudentTargets:(NSSet *)arg1 ;
-(void)diffNewTargets:(id)arg1 againstOldTargets:(id)arg2 ;
-(NSSet *)instructorTargets;
-(void)setInstructorTargets:(NSSet *)arg1 ;
-(void)didRemoveTargets:(id)arg1 ;
-(void)didFindTargets:(id)arg1 ;
@end

