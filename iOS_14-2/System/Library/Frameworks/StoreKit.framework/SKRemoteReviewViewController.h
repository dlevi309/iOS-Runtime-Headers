/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientReviewViewController.h>

@protocol SKRemoteReviewViewControllerDelegate;
@class SKStoreReviewViewController, NSString;

@interface SKRemoteReviewViewController : _UIRemoteViewController <SKUIClientReviewViewController> {

	id<SKRemoteReviewViewControllerDelegate> _delegate;
	SKStoreReviewViewController* _reviewViewController;

}

@property (assign,nonatomic,__weak) id<SKRemoteReviewViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) SKStoreReviewViewController * reviewViewController;              //@synthesize reviewViewController=_reviewViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<SKRemoteReviewViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<SKRemoteReviewViewControllerDelegate>)arg1 ;
-(void)setReviewViewController:(SKStoreReviewViewController *)arg1 ;
-(SKStoreReviewViewController *)reviewViewController;
-(void)didFinishWithResult:(id)arg1 error:(id)arg2 ;
@end

