/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSString, NSUUID, NSNumber;

@interface SKPaymentDiscount : NSObject {

	id _internal;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * keyIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * nonce; 
@property (nonatomic,copy,readonly) NSString * signature; 
@property (nonatomic,copy,readonly) NSNumber * timestamp; 
-(NSString *)identifier;
-(NSNumber *)timestamp;
-(NSString *)signature;
-(NSUUID *)nonce;
-(NSString *)keyIdentifier;
-(id)initWithIdentifier:(id)arg1 keyIdentifier:(id)arg2 nonce:(id)arg3 signature:(id)arg4 timestamp:(id)arg5 ;
@end

