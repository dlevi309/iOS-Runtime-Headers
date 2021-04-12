/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/


#import <ScoreBoard/ScoreBoard-Structs.h>
@class SCRTaskAdministrator, SCRCompositeGovernor;

@interface SCRApprovalCoordinator : NSObject {

	os_unfair_lock_s _lock;
	SCRTaskAdministrator* _administrator;
	SCRCompositeGovernor* _compositeGovernor;

}
-(void)removeGovernor:(id)arg1 ;
-(BOOL)getApprovalForTask:(id)arg1 error:(id*)arg2 ;
-(void)didCompleteTask:(id)arg1 withError:(id)arg2 ;
-(void)addGovernor:(id)arg1 ;
-(id)initWithAdministrator:(id)arg1 ;
@end

