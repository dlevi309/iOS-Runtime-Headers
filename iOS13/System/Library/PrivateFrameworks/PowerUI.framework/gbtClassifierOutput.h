/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithWait_to_charge:(long long)arg1 classProbability:(id)arg2 ;
-(void)setClassProbability:(NSDictionary *)arg1 ;
-(long long)wait_to_charge;
-(void)setWait_to_charge:(long long)arg1 ;
@end

