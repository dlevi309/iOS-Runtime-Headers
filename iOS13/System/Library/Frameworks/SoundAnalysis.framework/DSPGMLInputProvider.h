/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLFeatureDescription, MLMultiArray;

@interface DSPGMLInputProvider : NSObject <MLFeatureProvider> {

	MLFeatureDescription* _featureDescription;
	MLMultiArray* _input;

}

@property (nonatomic,retain) MLMultiArray * input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(MLMultiArray *)input;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setInput:(MLMultiArray *)arg1 ;
-(id)initWithFeatureDescription:(id)arg1 ;
@end

