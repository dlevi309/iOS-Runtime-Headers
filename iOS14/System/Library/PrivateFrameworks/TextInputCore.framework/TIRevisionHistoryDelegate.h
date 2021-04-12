/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TIRevisionHistoryDelegate <NSObject>
@required
-(void)incrementUsageTrackingKeyForAutocorrectionStatistic:(id)arg1 autocorrectionTypes:(unsigned)arg2;
-(void)incrementUsageTrackingKey:(id)arg1;
-(void)incrementUsageTrackingKeyForAppWithIsSentence:(BOOL)arg1;
-(void)incrementLanguageModelCount:(id)arg1 tokenID:(TITokenID)arg2 context:(const TITokenID*)arg3 contextLength:(unsigned long long)arg4 contextStringTokens:(id)arg5 saveToDifferentialPrivacy:(int)arg6;
-(void)decrementLanguageModelCount:(id)arg1 tokenID:(TITokenID)arg2 context:(const TITokenID*)arg3 contextLength:(unsigned long long)arg4 contextStringTokens:(id)arg5;
-(void)registerNegativeEvidence:(id)arg1 tokenID:(TITokenID)arg2 context:(const TITokenID*)arg3 contextLength:(unsigned long long)arg4 intendedTokenID:(TITokenID*)arg5 hint:(int)arg6 contextStringTokens:(id)arg7;
-(TITokenID*)findTokenIDForWord:(id)arg1 context:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned)arg4 surfaceFormPtr:(id*)arg5 hasCaseInsensitiveStaticVariant:(BOOL*)arg6 contextStringTokens:(id)arg7;
-(TITokenID*)findTokenIDForWord:(id)arg1 context:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned)arg4 contextStringTokens:(id)arg5;
-(TITokenID*)addWord:(id)arg1 context:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 surfaceFormPtr:(id*)arg4 contextStringTokens:(id)arg5;

@end

