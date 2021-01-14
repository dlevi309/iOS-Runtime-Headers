/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding> {

	NSString* _password;
	NSString* _identifier;
	NSData* _persistentReference;
	BOOL _legacy;
	long long _domain;
	NSString* _accessGroup;
	NEKeychainItem* _oldItem;

}

@property (copy) NEKeychainItem * oldItem;                  //@synthesize oldItem=_oldItem - In the implementation block
@property (readonly) BOOL legacy;                           //@synthesize legacy=_legacy - In the implementation block
@property (assign) long long domain;                        //@synthesize domain=_domain - In the implementation block
@property (copy) NSString * identifier; 
@property (copy) NSString * password; 
@property (copy) NSData * persistentReference; 
@property (copy) NSString * accessGroup;                    //@synthesize accessGroup=_accessGroup - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)remove;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(BOOL)copyDataFromKeychainItem:(void*)arg1 outPassword:(id*)arg2 outIdentifier:(id*)arg3 outPersistentReference:(id*)arg4 ;
-(id)copyKindForPasswordType:(long long)arg1 ;
-(void)setPersistentReference:(NSData *)arg1 ;
-(id)copyPassword;
-(BOOL)addOrUpdateWithConfiguration:(id)arg1 passwordType:(long long)arg2 accountName:(id)arg3 identifierSuffix:(id)arg4 ;
-(id)initWithPassword:(id)arg1 domain:(long long)arg2 ;
-(id)initWithIdentifier:(id)arg1 domain:(long long)arg2 ;
-(id)initWithPersistentReference:(id)arg1 domain:(long long)arg2 ;
-(id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2 ;
-(void)setIdentifierInternal:(id)arg1 ;
-(void)migrateFromPreferences:(SCPreferencesRef)arg1 ;
-(BOOL)legacy;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDomain:(long long)arg1 ;
-(NSString *)password;
-(long long)domain;
-(id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(NEKeychainItem *)oldItem;
-(void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4 ;
-(NSData *)persistentReference;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(id)initWithPersistentReference:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(id)copyQueryWithReturnTypes:(id)arg1 ;
-(void)setOldItem:(NEKeychainItem *)arg1 ;
@end

