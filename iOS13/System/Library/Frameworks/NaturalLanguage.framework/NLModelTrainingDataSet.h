/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NLDataSet.h>

@class NLDataProvider;

@interface NLModelTrainingDataSet : NLDataSet {

	NLDataProvider* _modelTrainingDataProvider;
	NLDataProvider* _modelValidationDataProvider;

}
-(id)dataProviderOfType:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 numberOfTrainingInstances:(unsigned long long)arg2 numberOfValidationInstances:(unsigned long long)arg3 trainingDataSource:(void*)arg4 validationDataSource:(void*)arg5 instanceDataProvider:(/*^block*/id)arg6 ;
@end

