/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSString;

@interface TIStatisticKey : NSObject {

	NSString* _counterName;
	NSString* _aggdName;
	NSString* _inputMode;

}

@property (nonatomic,readonly) NSString * counterName;              //@synthesize counterName=_counterName - In the implementation block
@property (nonatomic,readonly) NSString * aggdName;                 //@synthesize aggdName=_aggdName - In the implementation block
@property (nonatomic,readonly) NSString * inputMode;                //@synthesize inputMode=_inputMode - In the implementation block
+(id)statisticKeyWithAggdName:(id)arg1 andCounterName:(id)arg2 andInputMode:(id)arg3 ;
-(NSString *)inputMode;
-(NSString *)aggdName;
-(NSString *)counterName;
-(id)initWithAggdName:(id)arg1 andCounterName:(id)arg2 andInputMode:(id)arg3 ;
@end

