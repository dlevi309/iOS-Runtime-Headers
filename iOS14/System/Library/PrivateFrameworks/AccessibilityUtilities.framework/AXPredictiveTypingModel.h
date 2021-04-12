/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@interface AXPredictiveTypingModel : NSObject {

	void* _wordModel;

}
-(id)init;
-(void)enumerateTokensForText:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned*)_newContextForText:(id)arg1 includeLastToken:(BOOL)arg2 length:(long long*)arg3 ;
-(id)_lastPartialWordForText:(id)arg1 orEndOfSentence:(BOOL*)arg2 ;
-(id)_completionPredictionsForPrefix:(id)arg1 entireText:(id)arg2 desiredNumber:(unsigned long long)arg3 ;
-(id)predictionsForText:(id)arg1 ;
-(id)_nextWordPredictionsForText:(id)arg1 desiredNumber:(unsigned long long)arg2 ;
-(id)predictionsForText:(id)arg1 desiredNumber:(unsigned long long)arg2 ;
-(void)dealloc;
@end

