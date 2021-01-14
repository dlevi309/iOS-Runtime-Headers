/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MLMultiArray *)f_score_act_sigmoid_output;
-(MLMultiArray *)geometry_output;
-(id)initWithF_score_act_sigmoid_output:(id)arg1 geometry_output:(id)arg2 ;
-(void)setF_score_act_sigmoid_output:(MLMultiArray *)arg1 ;
-(void)setGeometry_output:(MLMultiArray *)arg1 ;
@end

