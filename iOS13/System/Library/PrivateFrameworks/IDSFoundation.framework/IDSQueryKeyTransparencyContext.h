/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)accountIdentifier;
-(NSUUID *)ticket;
-(BOOL)isEqualToQueryKeyTransparencyContext:(id)arg1 ;
-(id)initWithTicket:(id)arg1 accountIdentifier:(id)arg2 ;
@end

