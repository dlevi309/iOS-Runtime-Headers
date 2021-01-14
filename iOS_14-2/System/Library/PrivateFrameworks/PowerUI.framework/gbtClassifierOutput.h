/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface gbtClassifierOutput : NSObject <MLFeatureProvider> {

	long long _wait_to_charge;
	NSDictionary* _classProbability;

}

@property (assign,nonatomic) long long wait_to_charge;                     //@synthesize wait_to_charge=_wait_to_charge - In the implementation block
@property (nonatomic,retain) NSDictionary * classProbability;              //@synthesize classProbability=_classProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSDictionary *)classProbability;
-(void)setClassProbability:(NSDictionary *)arg1 ;
-(id)initWithWait_to_charge:(long long)arg1 classProbability:(id)arg2 ;
-(long long)wait_to_charge;
-(void)setWait_to_charge:(long long)arg1 ;
@end

