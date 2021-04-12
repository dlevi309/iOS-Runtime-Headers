/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSString, NSDate;

@interface TimedEndpoint : NSObject {

	NSString* _trigger;
	NSString* _name;
	NSDate* _time;
	long long _interfaceType;
	unsigned long long _stallType;

}

@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDate * time;                             //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) long long interfaceType;                   //@synthesize interfaceType=_interfaceType - In the implementation block
@property (nonatomic,readonly) unsigned long long stallType;              //@synthesize stallType=_stallType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSDate *)time;
-(void)touch;
-(long long)interfaceType;
-(unsigned long long)stallType;
-(id)initWithEndpoint:(id)arg1 trigger:(id)arg2 interfaceType:(long long)arg3 stallType:(unsigned long long)arg4 ;
@end

