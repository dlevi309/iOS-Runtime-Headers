/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentDocumentSubmissionController.h>

@class PKApplyController, UIViewController, PKBusinessChatController, PKApplyDocumentUploadPage;

@interface PKApplyDocumentSubmissionController : PKPaymentDocumentSubmissionController {

	PKApplyController* _applyController;
	UIViewController* _nextViewController;
	PKBusinessChatController* _businessChatController;
	PKApplyDocumentUploadPage* _documentPage;
	BOOL _isLoading;
	BOOL _isCancelling;

}
-(void)dealloc;
-(void)uploadID;
-(void)contactApplePressed;
-(id)nextViewController;
-(void)userWantsToCancel;
-(void)_featureApplicationUpdated;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 documentPage:(id)arg3 ;
-(void)removeApplicationUpdateObserver;
-(void)_cancelledConfirmed;
@end

