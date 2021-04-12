/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol OS_dispatch_queue;
@class INVocabularyUpdater, _INVocabularyValidator, NSObject;

@interface _INVocabulary : NSObject {

	INVocabularyUpdater* _vocabularyUpdater;
	_INVocabularyValidator* _validator;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedVocabulary;
+(id)supportedVocabularyStringTypes;
+(void)enumerateVocabularyUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)_validator;
-(void)setVocabulary:(id)arg1 ofType:(long long)arg2 ;
-(void)setValidatedVocabulary:(id)arg1 ofType:(long long)arg2 ;
-(void)validateVocabularyType:(long long)arg1 ;
-(void)_THROW_EXCEPTION_FOR_INVALID_VOCABULARY_TYPE_;
-(void)_THROW_EXCEPTION_FOR_ATTEMPT_TO_PROVIDE_VOCABULARY_OF_TYPE_THAT_APP_DOES_NOT_HANDLE_:(id)arg1 ;
-(void)setVocabularyStrings:(id)arg1 ofType:(long long)arg2 ;
-(void)removeAllVocabularyStrings;
@end

