/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@protocol AMSMediaTokenServiceProtocol;
@interface AMSMediaProtocolHandler : AMSURLProtocolHandler {

	id<AMSMediaTokenServiceProtocol> _tokenService;

}

@property (nonatomic,readonly) id<AMSMediaTokenServiceProtocol> tokenService;              //@synthesize tokenService=_tokenService - In the implementation block
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4 ;
-(id)handleResponse:(id)arg1 task:(id)arg2 ;
-(id<AMSMediaTokenServiceProtocol>)tokenService;
-(id)initWithTokenService:(id)arg1 ;
@end

