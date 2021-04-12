/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/ETDataProvider.h>

@class NSDictionary;

@interface _MLDataSource : NSObject <ETDataProvider> {

	NSDictionary* _dataTensorDictionary;

}

@property (nonatomic,retain) NSDictionary * dataTensorDictionary;              //@synthesize dataTensorDictionary=_dataTensorDictionary - In the implementation block
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)numberOfDataPoints;
-(id)initWithMLFeatureProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
-(NSDictionary *)dataTensorDictionary;
-(void)setDataTensorDictionary:(NSDictionary *)arg1 ;
@end

