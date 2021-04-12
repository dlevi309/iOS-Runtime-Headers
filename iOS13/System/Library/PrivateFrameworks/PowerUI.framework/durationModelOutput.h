/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface durationModelOutput : NSObject <MLFeatureProvider> {

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

