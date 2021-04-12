/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLMultiArray;

@interface iconclassification__generated__Input : NSObject <MLFeatureProvider> {

	MLMultiArray* _input_1;

}

@property (nonatomic,retain) MLMultiArray * input_1;              //@synthesize input_1=_input_1 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithInput_1:(id)arg1 ;
-(MLMultiArray *)input_1;
-(void)setInput_1:(MLMultiArray *)arg1 ;
@end

