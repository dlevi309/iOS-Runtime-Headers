/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class SGQuickResponsesStore, _PASRng;

@interface SGQuickResponsesPersonalization : NSObject {

	SGQuickResponsesStore* _store;
	_PASRng* _rng;

}
+(id)augmentRecords:(id)arg1 selectedPseudocounts:(id)arg2 config:(id)arg3 ;
+(id)deduplicatedReplyTextsForReplyPositions:(id)arg1 semanticClass:(unsigned long long)arg2 responseCount:(unsigned long long)arg3 config:(id)arg4 ;
-(id)init;
-(id)initWithStore:(id)arg1 withRng:(id)arg2 ;
-(id)replyTextsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3 ;
-(id)sortedReplyPositionsForSemanticClass:(unsigned long long)arg1 config:(id)arg2 ;
-(void)registerDisplayedResponses:(id)arg1 config:(id)arg2 ;
-(void)registerSelectedResponse:(id)arg1 config:(id)arg2 ;
-(void)registerWrittenResponse:(id)arg1 config:(id)arg2 ;
@end

