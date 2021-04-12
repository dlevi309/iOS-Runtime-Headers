/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding> {

	int _iOSLegacyIdentifier;
	NSString* _identifier;
	NSString* _externalIdentifierString;

}

@property (nonatomic,readonly) int iOSLegacyIdentifier;                               //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalIdentifierString;              //@synthesize externalIdentifierString=_externalIdentifierString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)os_log;
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(BOOL)requestAccountSyncWithOptions:(unsigned long long)arg1 ;
+(id)localAccount;
+(BOOL)requestAccountSyncWithDefaultOptions;
+(id)predicateForAccountWithExternalIdentifier:(id)arg1 ;
+(id)predicateForAccountForContainerWithIdentifier:(id)arg1 ;
+(id)predicateForAccountsWithIdentifiers:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(int)iOSLegacyIdentifier;
-(id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 ;
-(id)initWithExternalIdentifier:(id)arg1 ;
-(NSString *)externalIdentifierString;
-(id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 iOSLegacyIdentifier:(int)arg3 ;
@end

