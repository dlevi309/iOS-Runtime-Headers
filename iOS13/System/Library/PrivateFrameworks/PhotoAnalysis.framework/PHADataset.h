/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/ETDataProvider.h>

@class NSArray, NSString;

@interface PHADataset : NSObject <ETDataProvider> {

	NSArray* _labeledDataSamples;
	NSString* _inputName;
	NSString* _labelName;

}

@property (nonatomic,readonly) NSArray * labeledDataSamples;              //@synthesize labeledDataSamples=_labeledDataSamples - In the implementation block
@property (nonatomic,readonly) NSString * inputName;                      //@synthesize inputName=_inputName - In the implementation block
@property (nonatomic,readonly) NSString * labelName;                      //@synthesize labelName=_labelName - In the implementation block
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)numberOfDataPoints;
-(NSString *)inputName;
-(id)initWithLabeledFeatureVectors:(id)arg1 inputName:(id)arg2 labelName:(id)arg3 ;
-(NSArray *)labeledDataSamples;
-(NSString *)labelName;
@end

