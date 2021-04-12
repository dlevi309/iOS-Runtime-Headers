/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNSoundPrint100kDogBarkModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _soundprint_Placeholder;

}

@property (nonatomic,retain) MLMultiArray * soundprint_Placeholder;              //@synthesize soundprint_Placeholder=_soundprint_Placeholder - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithSoundprint_Placeholder:(id)arg1 ;
-(MLMultiArray *)soundprint_Placeholder;
-(void)setSoundprint_Placeholder:(MLMultiArray *)arg1 ;
@end

