/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupViewControllerDelegate;
@class UIViewController, PKDocumentRequest, UIImage;

@interface PKPaymentDocumentSubmissionController : NSObject {

	long long _state;
	long long _side;
	UIViewController*<PKPaymentDocumentSubmissionControllerDelegate> _delegate;
	PKDocumentRequest* _selectedDocument;
	UIImage* _frontID;
	UIImage* _backID;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	long long _context;
	unsigned long long _featureIdentifier;

}

@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                                 //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (assign,nonatomic) long long context;                                                                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;                                                          //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (assign,nonatomic) long long state;                                                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long side;                                                                                //@synthesize side=_side - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<PKPaymentDocumentSubmissionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKDocumentRequest * selectedDocument;                                                          //@synthesize selectedDocument=_selectedDocument - In the implementation block
@property (nonatomic,retain) UIImage * frontID;                                                                             //@synthesize frontID=_frontID - In the implementation block
@property (nonatomic,retain) UIImage * backID;                                                                              //@synthesize backID=_backID - In the implementation block
-(void)capturedImage:(id)arg1 ;
-(long long)side;
-(UIImage *)frontID;
-(UIImage *)backID;
-(UIViewController*<PKPaymentDocumentSubmissionControllerDelegate>)delegate;
-(void)tryUploadAgain;
-(void)userWantsToCancel;
-(void)terminateSetupFlow;
-(void)captureFailedWithError:(id)arg1 ;
-(void)userWantsToContinue;
-(void)userApprovedCapturedID;
-(void)userRejectedCapturedID;
-(id)nextViewController;
-(void)setSide:(long long)arg1 ;
-(long long)context;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setDelegate:(UIViewController*<PKPaymentDocumentSubmissionControllerDelegate>)arg1 ;
-(unsigned long long)featureIdentifier;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)uploadID;
-(void)setFrontID:(UIImage *)arg1 ;
-(void)setBackID:(UIImage *)arg1 ;
-(void)setSelectedDocument:(PKDocumentRequest *)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)stateChanged;
-(void)scanAgain;
-(id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 acceptableDocuments:(id)arg3 featureIdentifier:(unsigned long long)arg4 ;
-(PKDocumentRequest *)selectedDocument;
-(void)contactApplePressed;
-(void)setContext:(long long)arg1 ;
@end

