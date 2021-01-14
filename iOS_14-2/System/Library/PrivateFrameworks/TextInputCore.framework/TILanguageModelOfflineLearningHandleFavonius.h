/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithInputMode:(id)arg1 ;
-(void)setCurrentModel:(shared_ptr<KB::LanguageModel>*)arg1 ;
-(void)didFinishLearning;
-(void)updateAdaptationContext:(id)arg1 ;
-(void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3 ;
-(RefPtr<KB::DictionaryContainer>*)dictionaries;
@end

