/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIResponseKitManaging <NSObject>
@required
-(void)resetResponseKit;
-(void)generateResponseKitSuggestionsForString:(id)arg1 withLanguage:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(unsigned long long)arg6 shouldDisableAutoCaps:(BOOL)arg7 stringIsBlacklisted:(BOOL)arg8 async:(BOOL)arg9 completionHandler:(/*^block*/id)arg10;
-(void)registerResponseKitResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 withClientID:(id)arg4 withSenderID:(id)arg5 withRecipientID:(id)arg6 withTimestamp:(id)arg7 shouldUpdateConversationHistory:(BOOL)arg8;
-(void)updateResponseKitConversationHistoryWithMessage:(id)arg1 withSenderID:(id)arg2 withTimestamp:(id)arg3;
-(void)resetResponseKitConversationHistory;
-(void)persistResponseKitDynamicDataToDisk;

@end

