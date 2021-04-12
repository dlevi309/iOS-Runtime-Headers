/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <StoreKit/SKStoreProductViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol SFFeedbackListener;
@class NSString;

@interface SearchUIStoreViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate> {

	id<SFFeedbackListener> _feedbackListener;

}

@property (__weak) id<SFFeedbackListener> feedbackListener;              //@synthesize feedbackListener=_feedbackListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(id<SFFeedbackListener>)feedbackListener;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(id)initWithIdentifier:(id)arg1 feedbackListener:(id)arg2 ;
@end

