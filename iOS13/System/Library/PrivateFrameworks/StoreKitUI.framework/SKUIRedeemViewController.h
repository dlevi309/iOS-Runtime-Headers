/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UINavigationController.h>

@protocol SKUIRedeemViewCameraOverrideDelegate;
@class NSString, SKUIClientContext, SUClientInterface, NSOperationQueue, UIActivityIndicatorView, UIViewController, SKUIRedeemConfiguration;

@interface SKUIRedeemViewController : UINavigationController {

	BOOL _attempsAutomaticRedeem;
	BOOL _cameraRedeemVisible;
	BOOL _finishedLoading;
	BOOL _shouldPerformInitialOperationOnAppear;
	long long _category;
	id<SKUIRedeemViewCameraOverrideDelegate> _cameraDelegate;
	NSString* _initialCode;
	SKUIClientContext* _clientContext;
	SUClientInterface* _clientInterface;
	NSOperationQueue* _operationQueue;
	UIActivityIndicatorView* _activityIndicator;
	UIViewController* _embeddedViewController;
	SKUIRedeemConfiguration* _redeemConfiguration;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                 //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIViewController * embeddedViewController;                                   //@synthesize embeddedViewController=_embeddedViewController - In the implementation block
@property (assign,nonatomic) BOOL finishedLoading;                                                        //@synthesize finishedLoading=_finishedLoading - In the implementation block
@property (nonatomic,retain) SKUIRedeemConfiguration * redeemConfiguration;                               //@synthesize redeemConfiguration=_redeemConfiguration - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformInitialOperationOnAppear;                                  //@synthesize shouldPerformInitialOperationOnAppear=_shouldPerformInitialOperationOnAppear - In the implementation block
@property (nonatomic,readonly) long long category;                                                        //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL attempsAutomaticRedeem;                                                 //@synthesize attempsAutomaticRedeem=_attempsAutomaticRedeem - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemViewCameraOverrideDelegate> cameraDelegate;              //@synthesize cameraDelegate=_cameraDelegate - In the implementation block
@property (nonatomic,copy) NSString * initialCode;                                                        //@synthesize initialCode=_initialCode - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;                                         //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign,nonatomic) BOOL cameraRedeemVisible;                                                    //@synthesize cameraRedeemVisible=_cameraRedeemVisible - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                           //@synthesize operationQueue=_operationQueue - In the implementation block
+(BOOL)redeemRequiresNationalId:(id)arg1 ;
-(long long)category;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)_setup;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)_setChildViewController:(id)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(SUClientInterface *)clientInterface;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)setCameraDelegate:(id<SKUIRedeemViewCameraOverrideDelegate>)arg1 ;
-(id<SKUIRedeemViewCameraOverrideDelegate>)cameraDelegate;
-(void)_setupNavigationItem;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)setCameraRedeemVisible:(BOOL)arg1 ;
-(void)setRedeemConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(void)setShouldPerformInitialOperationOnAppear:(BOOL)arg1 ;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(void)clientInterfaceDidFinishLoading:(id)arg1 ;
-(NSString *)initialCode;
-(BOOL)shouldPerformInitialOperationOnAppear;
-(BOOL)attempsAutomaticRedeem;
-(SKUIRedeemConfiguration *)redeemConfiguration;
-(BOOL)cameraRedeemVisible;
-(void)setInitialCode:(NSString *)arg1 ;
-(void)setAttempsAutomaticRedeem:(BOOL)arg1 ;
-(void)_cancelButtonAction;
-(void)_startActivityIndicator;
-(void)_stopActivityIndicator;
-(void)_presentModernRedeemWithURL:(id)arg1 ;
-(void)_presentLegacyRedeem;
-(void)_redeemURLWithCompletion:(/*^block*/id)arg1 ;
-(UIViewController *)embeddedViewController;
-(void)setEmbeddedViewController:(UIViewController *)arg1 ;
-(BOOL)finishedLoading;
-(void)setFinishedLoading:(BOOL)arg1 ;
@end

