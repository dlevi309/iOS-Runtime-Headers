/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface gan_model_pre_A11Output : NSObject <MLFeatureProvider> {

	MLMultiArray* _output;

}

@property (nonatomic,retain) MLMultiArray * output;               //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)output;
-(void)setOutput:(MLMultiArray *)arg1 ;
-(id)initWithOutput:(id)arg1 ;
@end

