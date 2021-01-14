/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSString, NSSet;

@interface HMIFaceQualityFilterModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _input;
	NSString* _inputName;

}

@property (nonatomic,retain) MLMultiArray * input;                //@synthesize input=_input - In the implementation block
@property (readonly) NSString * inputName;                        //@synthesize inputName=_inputName - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)input;
-(void)setInput:(MLMultiArray *)arg1 ;
-(NSString *)inputName;
-(id)initWithInput:(id)arg1 inputName:(id)arg2 ;
@end

