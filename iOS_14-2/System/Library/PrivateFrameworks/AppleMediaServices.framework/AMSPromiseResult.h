/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSError;

@interface AMSPromiseResult : NSObject {

	NSError* _error;
	id _result;

}

@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) id result;                         //@synthesize result=_result - In the implementation block
-(NSError *)error;
-(id)result;
-(id)initWithResult:(id)arg1 error:(id)arg2 ;
@end

