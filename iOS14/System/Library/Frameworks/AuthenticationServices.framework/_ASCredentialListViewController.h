/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/_ASExtensionViewController.h>
#import <libobjc.A.dylib/_ASCredentialProviderExtensionHostContextDelegate.h>

@protocol _ASCredentialListViewControllerDelegate;
@class _ASIncomingCallObserver, NSString;

@interface _ASCredentialListViewController : _ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate> {

	_ASIncomingCallObserver* _callObserver;
	id<_ASCredentialListViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ASCredentialListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_ASCredentialListViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_ASCredentialListViewControllerDelegate>)arg1 ;
-(id)initWithExtension:(id)arg1 serviceIdentifiers:(id)arg2 ;
-(void)_requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_finishWithCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

