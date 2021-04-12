/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(ASDRequestOptions *)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)_initWithOptions:(id)arg1 ;
-(void)_startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_callCompletionHandlerWithResponse:(id)arg1 ;
-(void)_failCompletionHandlerWithError:(id)arg1 ;
-(void)receiveResponse:(id)arg1 ;
@end

