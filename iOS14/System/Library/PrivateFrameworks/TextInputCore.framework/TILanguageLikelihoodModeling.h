/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TILanguageLikelihoodModeling <NSObject>
@required
-(void)addEvidence:(id)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(id)arg4 app:(id)arg5 language:(id)arg6;
-(void)priorProbabilityForLanguages:(id)arg1 recipient:(id)arg2 handler:(/*^block*/id)arg3;
-(id)rankedLanguagesForRecipient:(id)arg1;
-(unsigned long long)emojiUsageCountForApp:(id)arg1 lastEmojiCountUpdateTime:(double*)arg2;
-(double)lastOfflineAdaptationTimeForApp:(id)arg1;

@end

