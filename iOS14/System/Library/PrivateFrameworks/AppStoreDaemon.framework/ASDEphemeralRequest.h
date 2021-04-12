/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/ASDRequest.h>

@class ASDRequestOptions;

@interface ASDEphemeralRequest : ASDRequest {

	/*^block*/id _completionHandler;
	ASDRequestOptions* _options;

}

@property (copy) id completionHandler;                                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy,readonly) ASDRequestOptions * options;              //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)requestType;
-(id)_initWithOptions:(id)arg1 ;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(ASDRequestOptions *)options;
-(void)_callCompletionHandlerWithResponse:(id)arg1 ;
-(void)_failCompletionHandlerWithError:(id)arg1 ;
-(void)receiveResponse:(id)arg1 ;
-(id)completionHandler;
-(id)initWithCoder:(id)arg1 ;
@end

