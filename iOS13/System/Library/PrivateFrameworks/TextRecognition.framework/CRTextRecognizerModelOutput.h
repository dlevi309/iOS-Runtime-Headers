/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface CRTextRecognizerModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _output_label_prob_map;

}

@property (nonatomic,retain) MLMultiArray * output_label_prob_map;              //@synthesize output_label_prob_map=_output_label_prob_map - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithOutput_label_prob_map:(id)arg1 ;
-(MLMultiArray *)output_label_prob_map;
-(void)setOutput_label_prob_map:(MLMultiArray *)arg1 ;
@end

