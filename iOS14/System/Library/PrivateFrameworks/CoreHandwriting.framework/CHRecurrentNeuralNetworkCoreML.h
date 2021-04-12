/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHRecurrentNeuralNetwork.h>

@class MLModel, NSString, NSArray, NSDictionary;

@interface CHRecurrentNeuralNetworkCoreML : CHRecurrentNeuralNetwork {

	MLModel* _model;
	NSString* _resourcePath;
	NSArray* _inputNames;
	NSDictionary* _featureCounts;
	NSArray* _outputNames;
	NSDictionary* _classCounts;

}

@property (nonatomic,retain,readonly) MLModel * model;                           //@synthesize model=_model - In the implementation block
@property (nonatomic,retain,readonly) NSString * resourcePath;                   //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,retain,readonly) NSArray * inputNames;                      //@synthesize inputNames=_inputNames - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * featureCounts;              //@synthesize featureCounts=_featureCounts - In the implementation block
@property (nonatomic,retain,readonly) NSArray * outputNames;                     //@synthesize outputNames=_outputNames - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * classCounts;                //@synthesize classCounts=_classCounts - In the implementation block
-(MLModel *)model;
-(NSString *)resourcePath;
-(void)dealloc;
-(NSArray *)inputNames;
-(NSArray *)outputNames;
-(id)initWithModelName:(id)arg1 featureIndex:(long long)arg2 ;
-(NSDictionary *)featureCounts;
-(id)initWithModelName:(id)arg1 ;
-(NSDictionary *)classCounts;
@end

