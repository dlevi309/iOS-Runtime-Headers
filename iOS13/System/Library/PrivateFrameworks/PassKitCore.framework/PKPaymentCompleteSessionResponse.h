/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentRewrapResponseBase.h>

@class NSString;

@interface PKPaymentCompleteSessionResponse : PKPaymentRewrapResponseBase {

	NSString* _retryNonce;

}

@property (nonatomic,copy,readonly) NSString * retryNonce;              //@synthesize retryNonce=_retryNonce - In the implementation block
-(NSString *)retryNonce;
@end

