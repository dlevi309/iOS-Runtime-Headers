/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class NSString, PPXPCClientHelper, PPClientFeedbackHelper;

@interface PPQuickTypeBroker : NSObject <PPFeedbackAccepting, PPClientStore> {

	PPXPCClientHelper* _clientHelper;
	PPClientFeedbackHelper* _clientFeedbackHelper;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
+(id)sharedInstance;
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)_remoteObjectProxy;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)warmUpWithCompletion:(/*^block*/id)arg1 ;
-(void)hibernateWithCompletion:(/*^block*/id)arg1 ;
@end

