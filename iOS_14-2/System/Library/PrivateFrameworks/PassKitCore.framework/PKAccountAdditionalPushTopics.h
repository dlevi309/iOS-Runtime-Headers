/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(NSString *)payments;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPayments:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)extendedAccount;
-(void)setExtendedAccount:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

