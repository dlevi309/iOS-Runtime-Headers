/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)signature;
-(NSNumber *)timestamp;
-(NSString *)keyIdentifier;
-(NSUUID *)nonce;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 keyIdentifier:(id)arg2 nonce:(id)arg3 signature:(id)arg4 timestamp:(id)arg5 ;
@end

