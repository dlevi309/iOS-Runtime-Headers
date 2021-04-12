/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVContentKeyResponseInternal;

@interface AVContentKeyResponse : NSObject {

	AVContentKeyResponseInternal* _keyResponse;

}
+(id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1 ;
+(id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1 renewalDate:(id)arg2 ;
+(id)contentKeyResponseWithClearKeyData:(id)arg1 initializationVector:(id)arg2 ;
+(id)contentKeyResponseWithAuthorizationTokenData:(id)arg1 ;
-(void)dealloc;
-(id)keySystem;
-(id)initWithKeySystem:(id)arg1 ;
@end

