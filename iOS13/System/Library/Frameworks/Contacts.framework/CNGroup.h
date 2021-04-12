/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)localizedStringForKey:(id)arg1 ;
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)predicateForiOSLegacyIdentifier:(int)arg1 ;
+(id)predicateForGroupsWithIdentifiers:(id)arg1 ;
+(id)predicateForGroupsInContainerWithIdentifier:(id)arg1 ;
+(id)predicateForSubgroupsInGroupWithIdentifier:(id)arg1 ;
+(id)predicateForGroupsWithNameMatching:(id)arg1 ;
+(id)predicateForGroupWithNameMatching:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSString *)identifier;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(CNGroup *)snapshot;
-(id)initWithGroup:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(int)iOSLegacyIdentifier;
-(NSString *)externalIdentifier;
-(NSString *)externalModificationTag;
-(NSData *)externalRepresentation;
-(NSString *)externalUUID;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 creationDate:(id)arg3 modificationDate:(id)arg4 ;
@end

