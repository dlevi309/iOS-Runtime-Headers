/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLanguageModel : NSObject {

	vector<std::__1::pair<id<_EARLanguageModelDataSource>, float>, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float> > >* _dataSources;
	float _totalWeight;

}

@property (nonatomic,readonly) float totalWeight;              //@synthesize totalWeight=_totalWeight - In the implementation block
-(void)enumerateDataSourcesAndWeightsUsingBlock:(/*^block*/id)arg1 ;
-(void)addDataSource:(id)arg1 weight:(float)arg2 ;
-(float)totalWeight;
@end

