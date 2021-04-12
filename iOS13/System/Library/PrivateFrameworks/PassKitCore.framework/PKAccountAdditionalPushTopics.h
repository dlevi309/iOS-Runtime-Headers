/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKAccountAdditionalPushTopics : NSObject <NSSecureCoding, NSCopying> {

	NSString* _account;
	NSString* _extendedAccount;
	NSString* _payments;

}

@property (nonatomic,copy) NSString * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * extendedAccount;              //@synthesize extendedAccount=_extendedAccount - In the implementation block
@property (nonatomic,copy) NSString * payments;                     //@synthesize payments=_payments - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(NSString *)payments;
-(void)setPayments:(NSString *)arg1 ;
-(NSString *)extendedAccount;
-(void)setExtendedAccount:(NSString *)arg1 ;
@end

