/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NLDataProvider.h>

@interface NLPModelTrainingDataProvider : NLDataProvider {

	unsigned long long _numberOfInstances;
	void* _dataSource;
	/*^block*/id _instanceDataProvider;

}
-(unsigned long long)numberOfInstances;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 numberOfInstances:(unsigned long long)arg2 dataSource:(void*)arg3 instanceDataProvider:(/*^block*/id)arg4 ;
@end

