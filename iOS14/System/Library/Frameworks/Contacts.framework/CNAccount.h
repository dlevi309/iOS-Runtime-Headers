/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NSString * _cnui_displayName; 
@property (nonatomic,readonly) int iOSLegacyIdentifier;                               //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalIdentifierString;              //@synthesize externalIdentifierString=_externalIdentifierString - In the implementation block
+(id)_cnui_accountStore;
+(id)_cnui_displayNameForLocal;
+(id)_cnui_displayNameForACAccount:(id)arg1 ;
+(void)_cnui_canRequestRefreshWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)_cnui_requestRefreshWithUserAction:(BOOL)arg1 ;
+(BOOL)_cnui_isFacebookACAccount:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)identifierProvider;
+(id)predicateForAccountWithExternalIdentifier:(id)arg1 ;
+(id)predicateForAccountsWithIdentifiers:(id)arg1 ;
+(id)makeIdentifierString;
+(id)predicateForAccountForContainerWithIdentifier:(id)arg1 ;
+(id)localAccount;
+(id)os_log;
+(BOOL)requestAccountSyncWithOptions:(unsigned long long)arg1 ;
+(BOOL)ios_requestAccountSyncWithOptions:(unsigned long long)arg1 ;
+(BOOL)requestAccountSyncWithDefaultOptions;
+(id)makeIdentifier;
-(NSString *)_cnui_displayName;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)externalIdentifierString;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 ;
-(id)initWithExternalIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 iOSLegacyIdentifier:(int)arg3 ;
-(NSString *)identifier;
-(int)iOSLegacyIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

