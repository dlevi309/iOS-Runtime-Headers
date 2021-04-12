/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentTransaction, NSString;

@interface PKSearchTransactionResult : NSObject <NSSecureCoding> {

	PKPaymentTransaction* _transaction;
	NSString* _passUniqueIdentifier;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSString * passUniqueIdentifier;                 //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(PKPaymentTransaction *)transaction;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

