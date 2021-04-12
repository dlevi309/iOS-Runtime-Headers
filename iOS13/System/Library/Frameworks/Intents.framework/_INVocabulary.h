/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol OS_dispatch_queue;
@class INVocabularyUpdater, _INVocabularyValidator, NSObject;

@interface _INVocabulary : NSObject {

	INVocabularyUpdater* _vocabularyUpdater;
	_INVocabularyValidator* _validator;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)enumerateVocabularyUsingBlock:(/*^block*/id)arg1 ;
+(id)sharedVocabulary;
+(id)supportedVocabularyStringTypes;
-(id)init;
-(id)_validator;
-(void)setVocabularyStrings:(id)arg1 ofType:(long long)arg2 ;
-(void)setVocabulary:(id)arg1 ofType:(long long)arg2 ;
-(void)removeAllVocabularyStrings;
-(void)setValidatedVocabulary:(id)arg1 ofType:(long long)arg2 ;
-(void)validateVocabularyType:(long long)arg1 ;
-(void)_THROW_EXCEPTION_FOR_INVALID_VOCABULARY_TYPE_;
-(void)_THROW_EXCEPTION_FOR_TV_OS_UNAVAILABLE_;
-(void)_THROW_EXCEPTION_FOR_ATTEMPT_TO_PROVIDE_VOCABULARY_OF_TYPE_THAT_APP_DOES_NOT_HANDLE_:(id)arg1 ;
@end

