/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNSoundPrint100kDogBarkModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _Sigmoid;

}

@property (setter=igmoid,nonatomic,retain) MLMultiArray * Sigmoid;              //@synthesize Sigmoid=_Sigmoid - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)Sigmoid;
-(id)initWithSigmoid:(id)arg1 ;
-(void)setSigmoid:(MLMultiArray *)arg1 ;
@end

