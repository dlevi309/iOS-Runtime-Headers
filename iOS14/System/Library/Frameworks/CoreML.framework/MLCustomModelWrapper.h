/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/MLModel.h>

@protocol MLCustomModel;
@class NSObject;

@interface MLCustomModelWrapper : MLModel {

	NSObject*<MLCustomModel> _customModel;

}

@property (retain) NSObject*<MLCustomModel> customModel;              //@synthesize customModel=_customModel - In the implementation block
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 customModel:(id)arg2 configuration:(id)arg3 ;
-(NSObject*<MLCustomModel>)customModel;
-(void)setCustomModel:(NSObject*<MLCustomModel>)arg1 ;
@end

