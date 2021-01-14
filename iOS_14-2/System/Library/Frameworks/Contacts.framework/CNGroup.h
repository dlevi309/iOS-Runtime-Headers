/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSData;

@interface CNGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _name;
	int _iOSLegacyIdentifier;
	CNGroup* _snapshot;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSString* _externalIdentifier;
	NSData* _externalRepresentation;
	NSString* _externalModificationTag;
	NSString* _externalUUID;

}

@property (nonatomic,copy,readonly) NSString * externalURI; 
@property (nonatomic,copy,readonly) NSString * externalIdentifier;                   //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * externalRepresentation;                 //@synthesize externalRepresentation=_externalRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalModificationTag;              //@synthesize externalModificationTag=_externalModificationTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalUUID;                         //@synthesize externalUUID=_externalUUID - In the implementation block
@property (nonatomic,copy,readonly) CNGroup * snapshot; 
@property (nonatomic,readonly) int iOSLegacyIdentifier;                              //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * modificationDate;                       //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
+(id)localizedStringForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)identifierProvider;
+(id)predicateForGroupWithNameMatching:(id)arg1 ;
+(id)makeIdentifierString;
+(id)predicateForGroupsInContainerWithIdentifier:(id)arg1 ;
+(id)predicateForGroupsWithIdentifiers:(id)arg1 ;
+(id)makeIdentifier;
+(id)predicateForGroupsWithNameMatching:(id)arg1 ;
+(id)predicateForSubgroupsInGroupWithIdentifier:(id)arg1 ;
+(id)predicateForiOSLegacyIdentifier:(int)arg1 ;
-(CNGroup *)snapshot;
-(NSDate *)modificationDate;
-(NSString *)externalURI;
-(id)init;
-(NSString *)externalModificationTag;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)externalIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(NSDate *)creationDate;
-(NSString *)externalUUID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)externalRepresentation;
-(NSString *)identifier;
-(int)iOSLegacyIdentifier;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 creationDate:(id)arg3 modificationDate:(id)arg4 iOSLegacyIdentifier:(int)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

