/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfDataPoints;
-(NSString *)inputName;
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(NSString *)labelName;
-(id)initWithLabeledFeatureVectors:(id)arg1 inputName:(id)arg2 labelName:(id)arg3 ;
-(NSArray *)labeledDataSamples;
@end

