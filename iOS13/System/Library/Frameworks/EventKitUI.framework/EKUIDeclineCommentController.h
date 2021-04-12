/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class UIAlertController, UITextField;

@interface EKUIDeclineCommentController : NSObject {

	UIAlertController* _alertController;
	UITextField* _alertTextField;
	/*^block*/id _completionBlock;

}
+(id)_newDeclineCommentControllerWithCompletionBlock:(/*^block*/id)arg1 ;
+(id)presentDeclineCommentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2 viewController:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)_presentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2 viewController:(id)arg3 ;
-(void)_completeWithButton:(unsigned long long)arg1 ;
@end

