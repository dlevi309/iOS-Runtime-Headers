/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, EAEmailAddressSet;

@interface EMVIP : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _name;
	NSString* _displayName;
	EAEmailAddressSet* _emailAddresses;

}

@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) EAEmailAddressSet * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(EAEmailAddressSet *)emailAddresses;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)_commonInitWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 displayName:(id)arg4 ;
-(BOOL)_isEqualToVIP:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end

