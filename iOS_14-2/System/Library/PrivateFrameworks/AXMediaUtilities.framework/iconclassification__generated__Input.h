/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface iconclassification__generated__Input : NSObject <MLFeatureProvider> {

	MLMultiArray* _input_1;

}

@property (nonatomic,retain) MLMultiArray * input_1;              //@synthesize input_1=_input_1 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)input_1;
-(void)setInput_1:(MLMultiArray *)arg1 ;
-(id)initWithInput_1:(id)arg1 ;
@end

