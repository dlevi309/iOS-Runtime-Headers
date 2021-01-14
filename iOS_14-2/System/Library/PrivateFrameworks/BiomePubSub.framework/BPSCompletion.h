/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/


@class NSError;

@interface BPSCompletion : NSObject {

	long long _state;
	NSError* _error;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)success;
+(id)failureWithError:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(id)initWithState:(long long)arg1 error:(id)arg2 ;
-(long long)state;
@end

