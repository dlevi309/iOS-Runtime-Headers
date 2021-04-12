/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SKUIComposeReviewFormDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setRating:(float)arg1 ;
-(void)setDelegate:(id<SKUIComposeReviewFormDelegate>)arg1 ;
-(void)_cancel;
-(void)_submit;
-(void)loadView;
-(void)dealloc;
-(SKUIReviewMetadata *)editedReviewMetadata;
-(id)initWithReviewMetadata:(id)arg1 ;
-(void)composeReviewViewValidityChanged:(id)arg1 ;
@end

