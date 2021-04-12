/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/AIDAAccountManagerDelegate.h>
#import <libobjc.A.dylib/FAChildAccountCreationDelegate.h>
#import <libobjc.A.dylib/AAUIServerHook.h>

@protocol AAUIServerHookDelegate;
@class FAChildAccountCreationController, UIViewController, NSString, AAUIServerHookResponse;

@interface FACreateChildAccountHook : NSObject <AIDAAccountManagerDelegate, FAChildAccountCreationDelegate, AAUIServerHook> {

	/*^block*/id _completion;
	FAChildAccountCreationController* _childCreateController;
	UIViewController* _initialViewController;
	id<AAUIServerHookDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id<AAUIServerHookDelegate>)arg1 ;
-(id)_presentationContext;
-(BOOL)shouldMatchElement:(id)arg1 ;
-(BOOL)shouldMatchModel:(id)arg1 ;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)accountsForAccountManager:(id)arg1 ;
-(void)_handleCreateChildAccount:(/*^block*/id)arg1 ;
-(void)_callCompletion:(BOOL)arg1 error:(id)arg2 ;
-(void)_tearDownChildAccountCreateController:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)childAccountCreationController:(id)arg1 didLoadRemoteUIWithSuccess:(BOOL)arg2 ;
-(void)childAccountCreationController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(id)navigationItemToShowInitialLoadingForChildAccountCreationController:(id)arg1 ;
@end

