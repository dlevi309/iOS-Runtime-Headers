/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TILanguageModelOfflineLearningHandle.h>

@interface TILanguageModelOfflineLearningHandleFavonius : TILanguageModelOfflineLearningHandle {

	RefPtr<KB::DictionaryContainer>* _dictionaries;
	shared_ptr<KB::LanguageModel>* _currentModel;

}

@property (assign,nonatomic) shared_ptr<KB::LanguageModel>* currentModel;                  //@synthesize currentModel=_currentModel - In the implementation block
@property (nonatomic,readonly) RefPtr<KB::DictionaryContainer>* dictionaries;              //@synthesize dictionaries=_dictionaries - In the implementation block
-(void)load;
-(shared_ptr<KB::LanguageModel>*)currentModel;
-(void)setCurrentModel:(shared_ptr<KB::LanguageModel>*)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(void)didFinishLearning;
-(void)updateAdaptationContext:(id)arg1 ;
-(void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3 ;
-(RefPtr<KB::DictionaryContainer>*)dictionaries;
@end

