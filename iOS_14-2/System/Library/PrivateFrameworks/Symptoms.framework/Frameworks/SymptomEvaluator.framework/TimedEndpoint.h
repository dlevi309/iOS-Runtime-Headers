/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)time;
-(long long)interfaceType;
-(void)touch;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)stallType;
-(id)initWithEndpoint:(id)arg1 trigger:(id)arg2 interfaceType:(long long)arg3 stallType:(unsigned long long)arg4 ;
@end

