/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface audioAccessory_lower_usage_regOutput : NSObject <MLFeatureProvider> {

	double _duration_pred;

}

@property (assign,nonatomic) double duration_pred;                //@synthesize duration_pred=_duration_pred - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithDuration_pred:(double)arg1 ;
-(double)duration_pred;
-(void)setDuration_pred:(double)arg1 ;
@end

