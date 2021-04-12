/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
*/


@class NSString, NSDictionary;

@interface GPURawCounterSourceTriggerSelect : NSObject {

	NSString* _name;
	NSDictionary* _options;

}

@property (copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
+(id)selectWithName:(id)arg1 options:(id)arg2 ;
-(id)initWithName:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)options;
-(NSString *)name;
-(id)description;
-(void)dealloc;
@end

