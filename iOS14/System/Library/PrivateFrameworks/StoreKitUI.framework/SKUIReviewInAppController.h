/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUIComposeReviewDelegate.h>

@class SKUIReviewInAppConfiguration, SKUIReviewInAppRatingViewController, SKUIComposeReviewViewController, SKUIStoreDialogController, SKUIProductReviewURLProvider, SKUIStarRatingQueue, NSString;

@interface SKUIReviewInAppController : NSObject <SKUIComposeReviewDelegate> {

	/*^block*/id _completion;
	SKUIReviewInAppConfiguration* _configuration;
	SKUIReviewInAppRatingViewController* _ratingViewController;
	SKUIComposeReviewViewController* _composeViewController;
	SKUIStoreDialogController* _dialogController;
	SKUIProductReviewURLProvider* _reviewURLProvider;
	SKUIStarRatingQueue* _starRatingQueue;

}

@property (nonatomic,copy) SKUIReviewInAppConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) SKUIReviewInAppRatingViewController * ratingViewController;              //@synthesize ratingViewController=_ratingViewController - In the implementation block
@property (nonatomic,retain) SKUIComposeReviewViewController * composeViewController;                 //@synthesize composeViewController=_composeViewController - In the implementation block
@property (nonatomic,retain) SKUIStoreDialogController * dialogController;                            //@synthesize dialogController=_dialogController - In the implementation block
@property (nonatomic,retain) SKUIProductReviewURLProvider * reviewURLProvider;                        //@synthesize reviewURLProvider=_reviewURLProvider - In the implementation block
@property (nonatomic,retain) SKUIStarRatingQueue * starRatingQueue;                                   //@synthesize starRatingQueue=_starRatingQueue - In the implementation block
@property (nonatomic,copy) id completion;                                                             //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(id)arg1 ;
-(id)init;
-(SKUIComposeReviewViewController *)composeViewController;
-(void)start;
-(void)setComposeViewController:(SKUIComposeReviewViewController *)arg1 ;
-(id)completion;
-(id)initWithConfiguration:(id)arg1 ;
-(SKUIReviewInAppConfiguration *)configuration;
-(void)setDialogController:(SKUIStoreDialogController *)arg1 ;
-(SKUIStoreDialogController *)dialogController;
-(void)setConfiguration:(SKUIReviewInAppConfiguration *)arg1 ;
-(BOOL)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2 ;
-(void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2 ;
-(void)composeReviewViewControllerDidSubmit:(id)arg1 ;
-(void)composeReviewViewControllerDidCancel:(id)arg1 ;
-(void)setReviewURLProvider:(SKUIProductReviewURLProvider *)arg1 ;
-(SKUIProductReviewURLProvider *)reviewURLProvider;
-(void)_presentRatingPrompt;
-(void)_finishWithResult:(unsigned long long)arg1 error:(id)arg2 ;
-(void)_presentAlertForDialog:(id)arg1 ;
-(void)_promptForStarRatingDuringCompose:(id)arg1 ;
-(void)_composeReviewViewControllerDidFinish:(id)arg1 result:(unsigned long long)arg2 ;
-(void)setRatingViewController:(SKUIReviewInAppRatingViewController *)arg1 ;
-(SKUIReviewInAppRatingViewController *)ratingViewController;
-(void)_submitRating:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentWriteReview;
-(SKUIStarRatingQueue *)starRatingQueue;
-(void)setStarRatingQueue:(SKUIStarRatingQueue *)arg1 ;
-(void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2 ;
@end

