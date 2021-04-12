/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNVGGishBabbleModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _output1;

}

@property (nonatomic,retain) MLMultiArray * output1;              //@synthesize output1=_output1 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setOutput1:(MLMultiArray *)arg1 ;
-(MLMultiArray *)output1;
-(id)initWithOutput1:(id)arg1 ;
@end

