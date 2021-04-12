/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/_ASExtensionViewController.h>

@protocol _ASCredentialListViewControllerDelegate;
@class _ASIncomingCallObserver;

@interface _ASCredentialListViewController : _ASExtensionViewController {

	_ASIncomingCallObserver* _callObserver;
	id<_ASCredentialListViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ASCredentialListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_ASCredentialListViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_ASCredentialListViewControllerDelegate>)arg1 ;
-(id)initWithExtension:(id)arg1 serviceIdentifiers:(id)arg2 ;
-(void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishWithCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

