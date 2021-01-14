/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNVGGishCatMeowModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _input_1;
	MLMultiArray* _Confidence;
	MLMultiArray* _Detected;
	MLMultiArray* _detectedHistoryOut;

}

@property (nonatomic,retain) MLMultiArray * input_1;                         //@synthesize input_1=_input_1 - In the implementation block
@property (nonatomic,retain) MLMultiArray * Confidence;                      //@synthesize Confidence=_Confidence - In the implementation block
@property (nonatomic,retain) MLMultiArray * Detected;                        //@synthesize Detected=_Detected - In the implementation block
@property (nonatomic,retain) MLMultiArray * detectedHistoryOut;              //@synthesize detectedHistoryOut=_detectedHistoryOut - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)input_1;
-(void)setInput_1:(MLMultiArray *)arg1 ;
-(void)setConfidence:(MLMultiArray *)arg1 ;
-(void)setDetected:(MLMultiArray *)arg1 ;
-(id)initWithInput_1:(id)arg1 Confidence:(id)arg2 Detected:(id)arg3 detectedHistoryOut:(id)arg4 ;
-(MLMultiArray *)Confidence;
-(MLMultiArray *)Detected;
-(MLMultiArray *)detectedHistoryOut;
-(void)setDetectedHistoryOut:(MLMultiArray *)arg1 ;
@end

