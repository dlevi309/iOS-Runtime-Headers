/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <iTunesStoreUI/SUViewController.h>
#import <libobjc.A.dylib/SKUIComposeReviewViewDelegate.h>

@protocol SKUIComposeReviewFormDelegate;
@class SKUIComposeReviewView, SKUIReviewMetadata, NSString;

@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate> {

	SKUIComposeReviewView* _composeView;
	id<SKUIComposeReviewFormDelegate> _delegate;
	SKUIReviewMetadata* _review;

}

@property (assign,nonatomic,__weak) id<SKUIComposeReviewFormDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) SKUIReviewMetadata * editedReviewMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SKUIComposeReviewFormDelegate>)delegate;
-(void)setDelegate:(id<SKUIComposeReviewFormDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_cancel;
-(void)setRating:(float)arg1 ;
-(SKUIReviewMetadata *)editedReviewMetadata;
-(id)initWithReviewMetadata:(id)arg1 ;
-(void)_submit;
-(void)composeReviewViewValidityChanged:(id)arg1 ;
@end

