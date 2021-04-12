/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

