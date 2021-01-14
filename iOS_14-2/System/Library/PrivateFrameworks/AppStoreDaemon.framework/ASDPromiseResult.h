/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class NSError;

@interface ASDPromiseResult : NSObject {

	NSError* _error;
	id _value;

}

@property (readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (readonly) id value;                     //@synthesize value=_value - In the implementation block
+(id)resultWithError:(id)arg1 ;
+(id)resultWithValue:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(id)_initWithValue:(id)arg1 error:(id)arg2 ;
-(id)value;
@end

