/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLMultiArray;

@interface gan_modelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _input;

}

@property (nonatomic,retain) MLMultiArray * input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(MLMultiArray *)input;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setInput:(MLMultiArray *)arg1 ;
-(id)initWithInput:(id)arg1 ;
@end

