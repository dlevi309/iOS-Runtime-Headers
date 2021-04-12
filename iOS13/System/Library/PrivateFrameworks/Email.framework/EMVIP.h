/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)displayName;
-(EAEmailAddressSet *)emailAddresses;
-(void)_commonInitWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 displayName:(id)arg4 ;
-(BOOL)_isEqualToVIP:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 ;
@end

