/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeApplicationUpdateObserver;
-(void)_cancelledConfirmed;
-(void)userWantsToCancel;
-(id)nextViewController;
-(void)_featureApplicationUpdated;
-(void)uploadID;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 documentPage:(id)arg3 ;
-(void)contactApplePressed;
-(void)dealloc;
@end

