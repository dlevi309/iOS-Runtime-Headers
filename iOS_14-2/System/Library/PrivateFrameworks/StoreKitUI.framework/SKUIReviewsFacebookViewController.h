/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>

@protocol SKUIReviewsFacebookViewControllerDelegate;
@class SKUIClientContext, SKUIFacebookLikeStatus, SKUIReviewsFacebookView;

@interface SKUIReviewsFacebookViewController : UIViewController {

	SKUIClientContext* _clientContext;
	id<SKUIReviewsFacebookViewControllerDelegate> _delegate;
	SKUIFacebookLikeStatus* _facebookLikeStatus;
	SKUIReviewsFacebookView* _facebookView;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) SKUIFacebookLikeStatus * facebookLikeStatus;                                  //@synthesize facebookLikeStatus=_facebookLikeStatus - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIReviewsFacebookViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SKUIReviewsFacebookViewControllerDelegate>)delegate;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setDelegate:(id<SKUIReviewsFacebookViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)dealloc;
-(SKUIFacebookLikeStatus *)facebookLikeStatus;
-(void)setFacebookLikeStatus:(SKUIFacebookLikeStatus *)arg1 ;
-(void)_reloadFacebookView;
-(void)_toggleLike:(id)arg1 ;
-(void)_changeStatusToUserLiked:(BOOL)arg1 ;
@end

