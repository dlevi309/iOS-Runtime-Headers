/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface gan_modelOutput : NSObject <MLFeatureProvider> {

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

