/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIProactiveQuickTypeManaging
@required
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
-(void)suggestionAccepted:(id)arg1 fieldType:(id)arg2;
-(BOOL)isAutoCompleteEnabled;
-(void)propogateMetrics:(id)arg1 data:(id)arg2;
-(void)userActionWithNoNewTriggers:(id)arg1 fieldType:(id)arg2;
-(void)generateAndRenderProactiveSuggestionsForInput:(id)arg1 withKeyboardState:(id)arg2 withAdditionalPredictions:(id)arg3 withSecureCandidateRenderer:(id)arg4 withRenderTraits:(id)arg5 withInput:(id)arg6 withRecipient:(id)arg7 withApplication:(id)arg8 withLocale:(id)arg9 nextInputWillInsertAutospace:(BOOL)arg10 withIsResponseDenyListed:(BOOL)arg11 withShouldDisableAutoCaps:(BOOL)arg12 withAvailableApps:(id)arg13 logBlock:(/*^block*/id)arg14 async:(BOOL)arg15 completion:(/*^block*/id)arg16;
-(void)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4 async:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(void)reset;
-(id)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4;
-(BOOL)isEnabled;
-(BOOL)usePQT2Flow;
-(void)suggestionNotAccepted:(id)arg1;
-(id)searchForMeCardRegions;
-(id)searchForMeCardEmailAddresses;
-(id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withKeyboardState:(id)arg2 withAdditionalPredictions:(id)arg3 withSecureCandidateRenderer:(id)arg4 withRenderTraits:(id)arg5 withInput:(id)arg6 withRecipient:(id)arg7 withApplication:(id)arg8 withLocale:(id)arg9 nextInputWillInsertAutospace:(BOOL)arg10 withAvailableApps:(id)arg11 logBlock:(/*^block*/id)arg12;
-(BOOL)isAutoPopupEnabled;

@end

