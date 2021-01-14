/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentRewrapResponseBase.h>

@class NSString;

@interface PKPaymentCompleteSessionResponse : PKPaymentRewrapResponseBase {

	NSString* _retryNonce;

}

@property (nonatomic,copy,readonly) NSString * retryNonce;              //@synthesize retryNonce=_retryNonce - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)retryNonce;
@end

