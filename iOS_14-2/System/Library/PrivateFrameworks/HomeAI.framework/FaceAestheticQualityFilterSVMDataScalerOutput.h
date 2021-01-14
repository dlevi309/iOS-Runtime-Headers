/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface FaceAestheticQualityFilterSVMDataScalerOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _transformed_features;

}

@property (nonatomic,retain) MLMultiArray * transformed_features;              //@synthesize transformed_features=_transformed_features - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithTransformed_features:(id)arg1 ;
-(MLMultiArray *)transformed_features;
-(void)setTransformed_features:(MLMultiArray *)arg1 ;
@end

