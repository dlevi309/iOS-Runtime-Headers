/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)hibernateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)warmUpWithCompletion:(/*^block*/id)arg1 ;
-(void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)_remoteObjectProxy;
-(void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end

