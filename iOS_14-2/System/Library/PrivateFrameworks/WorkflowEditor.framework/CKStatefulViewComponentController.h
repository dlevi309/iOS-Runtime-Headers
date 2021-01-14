/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/CKComponentController.h>

@class UIView;

@interface CKStatefulViewComponentController : CKComponentController {

	UIView* _statefulView;
	BOOL _mounted;
	id _statefulViewContext;

}
+(id)contextForNewStatefulView:(id)arg1 ;
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
+(long long)maximumPoolSize:(id)arg1 ;
-(void)didMount;
-(void)didUpdateComponent;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(id)statefulView;
-(BOOL)canRelinquishStatefulView;
-(void)canRelinquishStatefulViewDidChange;
-(void)didUnmount;
-(void)didRemount;
-(void)_presentStatefulView;
-(void)_relinquishStatefulViewIfPossible;
@end

