/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <libobjc.A.dylib/ACUIAccountOperationsDelegate.h>

@protocol AAUISignInOperationDelegate;
@class ACUIAccountOperationsHelper, UIViewController, NSString;

@interface AAUISignInOperationManager : NSObject <ACUIAccountOperationsDelegate> {

	ACUIAccountOperationsHelper* _accountOperationsHelper;
	id<AAUISignInOperationDelegate> _delegate;
	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) id<AAUISignInOperationDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<AAUISignInOperationDelegate>)delegate;
-(id)initWithPresentingViewController:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setDelegate:(id<AAUISignInOperationDelegate>)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_refreshEnabledDataclassesForAccount:(id)arg1 ;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(void)signInAccount:(id)arg1 enablingDataclasses:(BOOL)arg2 ;
-(void)_delegate_signInOperationManagerDidSaveAccount:(id)arg1 error:(id)arg2 ;
-(id)_dataclassMergeActionPickerFromPicker:(id)arg1 ;
-(void)_mainQueue_dataclassActionsForPicker:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_alertControllerForPicker:(id)arg1 ;
-(void)_disableDataclasses:(id)arg1 forAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

