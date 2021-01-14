/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface FaceRecognizabilityFilterSVMInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _input;

}

@property (nonatomic,retain) MLMultiArray * input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)input;
-(void)setInput:(MLMultiArray *)arg1 ;
-(id)initWithInput:(id)arg1 ;
@end

