/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface CRTextDetectorModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _f_score_act_sigmoid_output;
	MLMultiArray* _geometry_output;

}

@property (nonatomic,retain) MLMultiArray * f_score_act_sigmoid_output;              //@synthesize f_score_act_sigmoid_output=_f_score_act_sigmoid_output - In the implementation block
@property (nonatomic,retain) MLMultiArray * geometry_output;                         //@synthesize geometry_output=_geometry_output - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithF_score_act_sigmoid_output:(id)arg1 geometry_output:(id)arg2 ;
-(MLMultiArray *)f_score_act_sigmoid_output;
-(void)setF_score_act_sigmoid_output:(MLMultiArray *)arg1 ;
-(MLMultiArray *)geometry_output;
-(void)setGeometry_output:(MLMultiArray *)arg1 ;
@end

