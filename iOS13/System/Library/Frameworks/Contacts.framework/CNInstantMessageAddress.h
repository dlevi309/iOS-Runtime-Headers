/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CNInstantMessageAddress : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {

	NSString* _username;
	NSString* _service;
	NSString* _userIdentifier;
	NSString* _teamIdentifier;
	NSArray* _bundleIdentifiers;

}

@property (nonatomic,copy) NSString * username;                      //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;                //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * service;                       //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * bundleIdentifiers;              //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)localizedStringForKey:(id)arg1 ;
+(id)localizedStringForService:(id)arg1 ;
+(id)instantMessageAddressWithDictionaryRepresentation:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)username;
-(NSString *)service;
-(void)setUsername:(NSString *)arg1 ;
-(NSArray *)bundleIdentifiers;
-(void)setService:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(BOOL)isValid:(id*)arg1 ;
-(id)initWithUsername:(id)arg1 userIdentifier:(id)arg2 service:(id)arg3 teamIdentifier:(id)arg4 bundleIdentifiers:(id)arg5 ;
-(id)initWithUsername:(id)arg1 service:(id)arg2 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
@end

