/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
*/

#import <GPURawCounter/GPURawCounterSourceTrigger.h>

@class NSString, NSDictionary;

@interface _GPURawCounterSourceTrigger : NSObject <GPURawCounterSourceTrigger> {

	NSString* _name;
	NSString* _description;
	NSDictionary* _options;

}

@property (copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * description;              //@synthesize description=_description - In the implementation block
@property (copy,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(NSString *)name;
-(NSString *)description;
-(void)dealloc;
-(id)initWithName:(id)arg1 description:(id)arg2 options:(id)arg3 ;
@end

