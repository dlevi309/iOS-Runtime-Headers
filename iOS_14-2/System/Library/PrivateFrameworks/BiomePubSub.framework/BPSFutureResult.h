/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/


@class NSError;

@interface BPSFutureResult : NSObject {

	long long _state;
	NSError* _error;
	id _value;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) id value;                     //@synthesize value=_value - In the implementation block
+(id)successWithValue:(id)arg1 ;
+(id)failureWithError:(id)arg1 ;
-(NSError *)error;
-(long long)state;
-(id)initWithState:(long long)arg1 value:(id)arg2 error:(id)arg3 ;
-(id)value;
@end

