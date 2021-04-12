/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIProactiveQuickTypeManaging <NSObject>
@required
-(void)reset;
-(BOOL)isEnabled;
-(void)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 withTextContentType:(id)arg9 withAvailableApps:(id)arg10 logBlock:(/*^block*/id)arg11 async:(BOOL)arg12 completion:(/*^block*/id)arg13;
-(id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 withTextContentType:(id)arg9 withAvailableApps:(id)arg10 logBlock:(/*^block*/id)arg11;
-(void)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4 async:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(id)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4;
-(BOOL)isAutoPopupEnabled;
-(BOOL)isAutoCompleteEnabled;
-(void)userActionWithNoNewTriggers:(id)arg1 fieldType:(id)arg2;
-(void)suggestionAccepted:(id)arg1 fieldType:(id)arg2;
-(void)suggestionNotAccepted:(id)arg1;
-(id)getMeCardEmailAddresses;

@end

