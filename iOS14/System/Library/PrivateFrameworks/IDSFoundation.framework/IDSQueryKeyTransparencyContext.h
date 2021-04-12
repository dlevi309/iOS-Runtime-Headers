/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString;

@interface IDSQueryKeyTransparencyContext : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _ticket;
	NSString* _accountIdentifier;

}

@property (nonatomic,readonly) NSUUID * ticket;                           //@synthesize ticket=_ticket - In the implementation block
@property (nonatomic,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)ticket;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToQueryKeyTransparencyContext:(id)arg1 ;
-(id)initWithTicket:(id)arg1 accountIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

