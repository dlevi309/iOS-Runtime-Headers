/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/FAInviteControllerDelegate.h>
#import <libobjc.A.dylib/AAUIServerHook.h>

@protocol FAInviteConfigurationController, AAUIServerHookDelegate;
@class NSObject, FAInviteContext, RUIObjectModel, AAUIServerHookResponse, NSString;

@interface FAInvokeMessageHook : NSObject <FAInviteControllerDelegate, AAUIServerHook> {

	NSObject*<FAInviteConfigurationController> _messageConfigurationController;
	FAInviteContext* _testContext;
	/*^block*/id _completion;
	RUIObjectModel* _objectModel;
	id<AAUIServerHookDelegate> _delegate;
	AAUIServerHookResponse* _serverHookResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse;              //@synthesize serverHookResponse=_serverHookResponse - In the implementation block
@property (nonatomic,retain) RUIObjectModel * objectModel;                             //@synthesize objectModel=_objectModel - In the implementation block
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(RUIObjectModel *)objectModel;
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id<AAUIServerHookDelegate>)arg1 ;
-(BOOL)shouldMatchElement:(id)arg1 ;
-(BOOL)shouldMatchModel:(id)arg1 ;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AAUIServerHookResponse *)serverHookResponse;
-(void)setServerHookResponse:(AAUIServerHookResponse *)arg1 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(void)inviteController:(id)arg1 didFinishWithStatus:(unsigned long long)arg2 recipients:(id)arg3 userInfo:(id)arg4 error:(id)arg5 ;
-(void)inviteControllerDidStartAsyncLoading:(id)arg1 ;
-(void)inviteControllerDidEndAsyncLoading:(id)arg1 ;
-(long long)transportWithActionString:(id)arg1 ;
-(void)_presentMessagesInviteWithServerAttributes:(id)arg1 transport:(long long)arg2 sourceView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_stringForCompletionStatus:(unsigned long long)arg1 ;
@end

