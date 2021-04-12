/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface mac_routine_engOutput : NSObject <MLFeatureProvider> {

	long long _engage;
	NSDictionary* _classProbability;

}

@property (assign,nonatomic) long long engage;                             //@synthesize engage=_engage - In the implementation block
@property (nonatomic,retain) NSDictionary * classProbability;              //@synthesize classProbability=_classProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSDictionary *)classProbability;
-(long long)engage;
-(id)initWithEngage:(long long)arg1 classProbability:(id)arg2 ;
-(void)setEngage:(long long)arg1 ;
-(void)setClassProbability:(NSDictionary *)arg1 ;
@end

