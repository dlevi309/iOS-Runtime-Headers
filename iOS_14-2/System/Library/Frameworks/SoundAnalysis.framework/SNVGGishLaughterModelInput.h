/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNVGGishLaughterModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _input1;

}

@property (nonatomic,retain) MLMultiArray * input1;               //@synthesize input1=_input1 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)input1;
-(id)initWithInput1:(id)arg1 ;
-(void)setInput1:(MLMultiArray *)arg1 ;
@end

