/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVContentKeyResponseInternal;

@interface AVContentKeyResponse : NSObject {

	AVContentKeyResponseInternal* _keyResponse;

}
+(id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1 ;
+(id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1 renewalDate:(id)arg2 ;
+(id)contentKeyResponseWithClearKeyData:(id)arg1 initializationVector:(id)arg2 ;
+(id)contentKeyResponseWithAuthorizationTokenData:(id)arg1 ;
-(id)initWithKeySystem:(id)arg1 ;
-(id)keySystem;
-(void)dealloc;
@end

