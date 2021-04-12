/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface shallow_modelOutput : NSObject <MLFeatureProvider> {

	long long _next_discharge_is_shallow;
	NSDictionary* _classProbability;

}

@property (assign,nonatomic) long long next_discharge_is_shallow;              //@synthesize next_discharge_is_shallow=_next_discharge_is_shallow - In the implementation block
@property (nonatomic,retain) NSDictionary * classProbability;                  //@synthesize classProbability=_classProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSDictionary *)classProbability;
-(void)setClassProbability:(NSDictionary *)arg1 ;
-(id)initWithNext_discharge_is_shallow:(long long)arg1 classProbability:(id)arg2 ;
-(long long)next_discharge_is_shallow;
-(void)setNext_discharge_is_shallow:(long long)arg1 ;
@end

