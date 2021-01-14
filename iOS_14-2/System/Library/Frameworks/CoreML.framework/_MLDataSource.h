/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/ETDataProvider.h>

@class NSDictionary, NSString;

@interface _MLDataSource : NSObject <ETDataProvider> {

	NSDictionary* _dataTensorDictionary;

}

@property (nonatomic,retain) NSDictionary * dataTensorDictionary;              //@synthesize dataTensorDictionary=_dataTensorDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfDataPoints;
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithMLFeatureProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
-(NSDictionary *)dataTensorDictionary;
-(void)setDataTensorDictionary:(NSDictionary *)arg1 ;
@end

