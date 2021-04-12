/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<SKUIReviewsFacebookViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUIReviewsFacebookViewControllerDelegate>)arg1 ;
-(void)loadView;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIFacebookLikeStatus *)facebookLikeStatus;
-(void)setFacebookLikeStatus:(SKUIFacebookLikeStatus *)arg1 ;
-(void)_reloadFacebookView;
-(void)_toggleLike:(id)arg1 ;
-(void)_changeStatusToUserLiked:(BOOL)arg1 ;
@end

