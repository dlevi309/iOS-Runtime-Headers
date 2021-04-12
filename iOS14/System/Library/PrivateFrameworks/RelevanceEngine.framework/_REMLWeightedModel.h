/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REInteractionDescriptor, REFeature;

@interface _REMLWeightedModel : NSObject <REAutomaticExportedInterface> {

	REInteractionDescriptor* _descriptor;
	REFeature* _biasFeature;

}

@property (nonatomic,readonly) float weight; 
@property (nonatomic,readonly) REFeature * selectionFeature; 
+(id)weightedModelWithDescriptor:(id)arg1 featureSet:(id)arg2 ;
-(float)weight;
-(BOOL)loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(id)predictWithFeatures:(id)arg1 ;
-(REFeature *)selectionFeature;
-(void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2 ;
-(void)enumerateModels:(/*^block*/id)arg1 ;
-(void)_configureMode:(id)arg1 ;
-(id)initWithBiasFeature:(id)arg1 ;
-(float)_biasForFeatureSet:(id)arg1 ;
-(BOOL)_loadModel:(id)arg1 fromURL:(id)arg2 error:(id*)arg3 ;
@end

