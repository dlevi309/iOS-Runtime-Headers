/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface gbtRegressorOutput : NSObject <MLFeatureProvider> {

	double _smart_charge_duration;

}

@property (assign,nonatomic) double smart_charge_duration;              //@synthesize smart_charge_duration=_smart_charge_duration - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithSmart_charge_duration:(double)arg1 ;
-(double)smart_charge_duration;
-(void)setSmart_charge_duration:(double)arg1 ;
@end

