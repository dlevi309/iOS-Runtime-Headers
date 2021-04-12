/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/SKUIRedeemIdDelegate.h>
#import <libobjc.A.dylib/SKUIRedeemStepDelegate.h>

@protocol SKUIRedeemViewCameraOverrideDelegate;
@class SKUIClientContext, NSString, NSOperationQueue, SKUIRedeemPreflightOperation, SKUIRedeemConfiguration, SKUIRedeemStepViewController, UIBarButtonItem;

@interface SKUIRedeemViewControllerLegacy : UINavigationController <SKUIRedeemIdDelegate, SKUIRedeemStepDelegate> {

	BOOL _attempsAutomaticRedeem;
	char _cameraRedeemEnabled;
	long long _category;
	SKUIClientContext* _clientContext;
	NSString* _initialCode;
	NSOperationQueue* _operationQueue;
	SKUIRedeemPreflightOperation* _preflightOperation;
	SKUIRedeemConfiguration* _redeemConfiguration;
	SKUIRedeemStepViewController* _inputViewController;
	long long _initialBarStyle;
	BOOL _cameraRedeemVisible;
	BOOL _shouldPerformInitialOperationOnAppear;
	id<SKUIRedeemViewCameraOverrideDelegate> _cameraDelegate;
	UIBarButtonItem* _cancelButtonItem;

}

@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;                                          //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,readonly) long long category;                                                        //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL attempsAutomaticRedeem;                                                 //@synthesize attempsAutomaticRedeem=_attempsAutomaticRedeem - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemViewCameraOverrideDelegate> cameraDelegate;              //@synthesize cameraDelegate=_cameraDelegate - In the implementation block
@property (nonatomic,copy) NSString * initialCode;                                                        //@synthesize initialCode=_initialCode - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) BOOL cameraRedeemVisible;                                                    //@synthesize cameraRedeemVisible=_cameraRedeemVisible - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) SKUIRedeemConfiguration * redeemConfiguration;                               //@synthesize redeemConfiguration=_redeemConfiguration - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformInitialOperationOnAppear;                                  //@synthesize shouldPerformInitialOperationOnAppear=_shouldPerformInitialOperationOnAppear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)redeemRequiresNationalId:(id)arg1 ;
-(long long)category;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)setCameraDelegate:(id<SKUIRedeemViewCameraOverrideDelegate>)arg1 ;
-(id<SKUIRedeemViewCameraOverrideDelegate>)cameraDelegate;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)setCameraRedeemVisible:(BOOL)arg1 ;
-(void)setRedeemConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(void)setShouldPerformInitialOperationOnAppear:(BOOL)arg1 ;
-(void)redeemIdViewControllerDidCancel:(id)arg1 ;
-(void)redeemIdViewController:(id)arg1 submittedWithFields:(id)arg2 ;
-(NSString *)initialCode;
-(UIBarButtonItem *)cancelButtonItem;
-(BOOL)shouldPerformInitialOperationOnAppear;
-(void)_performInitialRedeemOperation;
-(void)_showInputViewController;
-(void)_showNationalIdVerificationPage;
-(void)_showNationalIdLoadingPage;
-(void)_executeIdValidationOperationWithFields:(id)arg1 ;
-(id)_newInputViewController;
-(void)_executeRequiresIdValidationOperation;
-(void)_executePreflightOperationForcesAuthentication:(BOOL)arg1 ;
-(BOOL)attempsAutomaticRedeem;
-(void)_finishPreflightWithResult:(id)arg1 ;
-(void)_loadInputViewController;
-(SKUIRedeemConfiguration *)redeemConfiguration;
-(void)_attemptAutomaticRedeemWithMetadata:(id)arg1 ;
-(BOOL)cameraRedeemVisible;
-(void)setInitialCode:(NSString *)arg1 ;
-(void)redeemStepViewControllerShouldValidateNationalID:(id)arg1 ;
-(void)redeemAgainAnimated:(BOOL)arg1 ;
-(void)setAttempsAutomaticRedeem:(BOOL)arg1 ;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
@end

