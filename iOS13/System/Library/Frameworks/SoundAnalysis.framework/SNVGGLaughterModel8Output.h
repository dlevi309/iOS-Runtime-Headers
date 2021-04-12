/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNVGGLaughterModel8Output : NSObject <MLFeatureProvider> {

	MLMultiArray* _output1;

}

@property (nonatomic,retain) MLMultiArray * output1;              //@synthesize output1=_output1 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)output1;
-(void)setOutput1:(MLMultiArray *)arg1 ;
-(id)initWithOutput1:(id)arg1 ;
@end

