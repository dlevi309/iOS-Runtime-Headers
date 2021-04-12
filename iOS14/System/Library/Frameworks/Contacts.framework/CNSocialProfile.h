/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CNSocialProfile : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {

	NSString* _urlString;
	NSString* _username;
	NSString* _userIdentifier;
	NSString* _service;
	NSString* _displayname;
	NSString* _teamIdentifier;
	NSArray* _bundleIdentifiers;

}

@property (nonatomic,copy) NSString * urlString;                     //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy) NSString * username;                      //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;                //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * service;                       //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * displayname;                   //@synthesize displayname=_displayname - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * bundleIdentifiers;              //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedStringForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)socialProfileWithDictionaryRepresentation:(id)arg1 ;
+(/*^block*/id)Username;
+(id)localizedStringForService:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)urlString;
-(NSString *)userIdentifier;
-(id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5 teamIdentifier:(id)arg6 bundleIdentifiers:(id)arg7 ;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ignoreURLs:(BOOL)arg2 ;
-(id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)displayname;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)username;
-(void)setDisplayname:(NSString *)arg1 ;
-(NSString *)description;
-(void)setService:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid:(id*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)bundleIdentifiers;
-(void)setUrlString:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)service;
@end

