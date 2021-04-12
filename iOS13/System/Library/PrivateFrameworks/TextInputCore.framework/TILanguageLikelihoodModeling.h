/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TILanguageLikelihoodModeling <NSObject>
@required
-(void)addEvidence:(id)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(id)arg4 app:(id)arg5 language:(id)arg6;
-(id)rankedLanguagesForRecipient:(id)arg1;
-(void)priorProbabilityForLanguages:(id)arg1 recipient:(id)arg2 handler:(/*^block*/id)arg3;
-(double)lastOfflineAdaptationTimeForApp:(id)arg1;
-(unsigned long long)emojiUsageCountForApp:(id)arg1 lastEmojiCountUpdateTime:(double*)arg2;

@end

