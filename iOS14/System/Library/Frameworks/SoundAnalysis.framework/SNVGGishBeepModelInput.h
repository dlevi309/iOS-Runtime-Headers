/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNVGGishBeepModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _input1;
	MLMultiArray* _stateIn;
	MLMultiArray* _detectedHistoryIn;

}

@property (nonatomic,retain) MLMultiArray * input1;                         //@synthesize input1=_input1 - In the implementation block
@property (nonatomic,retain) MLMultiArray * stateIn;                        //@synthesize stateIn=_stateIn - In the implementation block
@property (nonatomic,retain) MLMultiArray * detectedHistoryIn;              //@synthesize detectedHistoryIn=_detectedHistoryIn - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)input1;
-(MLMultiArray *)stateIn;
-(id)initWithInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3 ;
-(id)initWithInput1:(id)arg1 ;
-(void)setInput1:(MLMultiArray *)arg1 ;
-(void)setStateIn:(MLMultiArray *)arg1 ;
-(MLMultiArray *)detectedHistoryIn;
-(void)setDetectedHistoryIn:(MLMultiArray *)arg1 ;
@end

