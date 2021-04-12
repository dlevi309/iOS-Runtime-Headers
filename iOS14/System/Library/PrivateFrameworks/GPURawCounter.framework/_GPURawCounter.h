/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
*/

#import <GPURawCounter/GPURawCounter.h>

@class NSString;

@interface _GPURawCounter : NSObject <GPURawCounter> {

	NSString* _name;
	NSString* _description;
	unsigned long long _counterValueType;

}

@property (copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * description;                      //@synthesize description=_description - In the implementation block
@property (readonly) unsigned long long counterValueType;              //@synthesize counterValueType=_counterValueType - In the implementation block
-(NSString *)name;
-(NSString *)description;
-(void)dealloc;
-(unsigned long long)counterValueType;
-(id)initWithName:(id)arg1 description:(id)arg2 valueType:(unsigned long long)arg3 ;
@end

