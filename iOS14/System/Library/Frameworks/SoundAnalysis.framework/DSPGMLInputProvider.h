/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLFeatureDescription, NSMutableDictionary, NSArray, MLMultiArray;

@interface DSPGMLInputProvider : NSObject <MLFeatureProvider> {

	MLFeatureDescription* _featureDescription;
	NSMutableDictionary* _featureCache;
	NSArray* _allInputFeatureNames;
	MLMultiArray* _input;

}

@property (nonatomic,retain) MLMultiArray * input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)input;
-(void)setInput:(MLMultiArray *)arg1 ;
-(id)initWithFeatureDescription:(id)arg1 allInputFeatureNames:(id)arg2 ;
-(void)setFeatureValue:(id)arg1 forFeatureName:(id)arg2 ;
@end

