/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol PPQuickTypeServerProtocol <PPFeedbackAccepting>
@required
-(void)hibernateWithCompletion:(/*^block*/id)arg1;
-(void)warmUpWithCompletion:(/*^block*/id)arg1;
-(void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(/*^block*/id)arg6;
-(void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(/*^block*/id)arg2;
-(void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3;

@end

