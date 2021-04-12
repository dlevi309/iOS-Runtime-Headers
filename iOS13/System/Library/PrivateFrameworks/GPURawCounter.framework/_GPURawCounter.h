/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(unsigned long long)counterValueType;
-(id)initWithName:(id)arg1 description:(id)arg2 valueType:(unsigned long long)arg3 ;
@end

