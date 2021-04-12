/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class SGQuickResponsesStore, SGQuickResponsesModel, SGQuickResponsesRanking, SGQuickResponsesPersonalization, _PASRng;

@interface SGQuickResponsesInference : NSObject {

	SGQuickResponsesStore* _store;
	SGQuickResponsesModel* _model;
	SGQuickResponsesRanking* _ranking;
	SGQuickResponsesPersonalization* _personalization;
	_PASRng* _rng;

}
+(id)_getMergedPrompt:(id)arg1 withParams:(id)arg2 ;
+(void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(BOOL)arg3 isUsingQuickResponses:(BOOL)arg4 locale:(id)arg5 plistPath:(id)arg6 ;
+(void)registerDisplayedQuickResponses:(id)arg1 plistPath:(id)arg2 ;
+(id)quickResponsesForMessage:(id)arg1 maxResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 context:(id)arg4 time:(id)arg5 locale:(id)arg6 chunkPath:(id)arg7 plistPath:(id)arg8 espressoBinFilePath:(id)arg9 espressoShapeFilePath:(id)arg10 lexiconFilePath:(id)arg11 ;
+(id)normalizeStringForDeduping:(id)arg1 ;
+(id)stringsForQuickResponses:(id)arg1 ;
+(id)languageForLocale:(id)arg1 withLanguageDetectionForMessage:(id)arg2 ;
+(id)quickResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 language:(id)arg4 ;
-(id)initWithModel:(id)arg1 ranking:(id)arg2 personalization:(id)arg3 rng:(id)arg4 store:(id)arg5 ;
-(id)initWithLanguage:(id)arg1 chunkPath:(id)arg2 plistPath:(id)arg3 espressoBinFilePath:(id)arg4 ;
-(id)quickResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 context:(id)arg4 time:(id)arg5 language:(id)arg6 locale:(id)arg7 ;
-(id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 language:(id)arg4 locale:(id)arg5 plistPath:(id)arg6 ;
-(id)quickResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 context:(id)arg4 time:(id)arg5 language:(id)arg6 locale:(id)arg7 plistPath:(id)arg8 ;
-(id)replyTextsFromSemanticClasses:(id)arg1 config:(id)arg2 ;
-(id)replyTextIdsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3 ;
-(id)randomizedReplyTextIdsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3 ;
-(id)quickResponsesFromReplyTextIds:(id)arg1 config:(id)arg2 ;
-(id)addCustomResponsesToCommonResponses:(id)arg1 language:(id)arg2 locale:(id)arg3 modelScores:(id)arg4 maxResponses:(unsigned long long)arg5 customResponsesParams:(id)arg6 ;
@end

