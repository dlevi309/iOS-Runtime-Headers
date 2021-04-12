/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/FAMessagesInviteControllerDelegate.h>
#import <libobjc.A.dylib/AAUIServerHook.h>

@protocol AAUIServerHookDelegate;
@class FAMessagesInviteConfigurationController, FAMessagesInviteContext, AAUIServerHookResponse, NSString;

@interface FAInvokeMessageHook : NSObject <FAMessagesInviteControllerDelegate, AAUIServerHook> {

	FAMessagesInviteConfigurationController* _messageConfigurationController;
	FAMessagesInviteContext* _testContext;
	/*^block*/id _completion;
	id<AAUIServerHookDelegate> _delegate;
	AAUIServerHookResponse* _serverHookResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse;              //@synthesize serverHookResponse=_serverHookResponse - In the implementation block
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id<AAUIServerHookDelegate>)arg1 ;
-(BOOL)shouldMatchElement:(id)arg1 ;
-(BOOL)shouldMatchModel:(id)arg1 ;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AAUIServerHookResponse *)serverHookResponse;
-(void)setServerHookResponse:(AAUIServerHookResponse *)arg1 ;
-(void)messageInviteController:(id)arg1 didFinishWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_presentMessagesInviteWithServerAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

