/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNSmartPropertyFetcher.h>

@class NSSet, NSDictionary;

@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher {

	BOOL _ignoresNickname;
	BOOL _ignoresOrganization;
	NSSet* _mandatoryNameProperties;
	NSDictionary* _fallBackNamePropertyByNameKey;

}

@property (assign,nonatomic) BOOL ignoresNickname;                  //@synthesize ignoresNickname=_ignoresNickname - In the implementation block
@property (assign,nonatomic) BOOL ignoresOrganization;              //@synthesize ignoresOrganization=_ignoresOrganization - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)ignoresNickname;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIgnoresOrganization:(BOOL)arg1 ;
-(id)_cn_ignorableKeys;
-(id)_cn_requiredKeys;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIgnoresNickname:(BOOL)arg1 ;
-(id)_cn_optionalKeys;
-(BOOL)ignoresOrganization;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

