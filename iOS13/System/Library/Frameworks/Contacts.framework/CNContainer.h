/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContainerPermissions, NSData, NSDate;

@interface CNContainer : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _name;
	long long _type;
	int _iOSLegacyIdentifier;
	NSString* _accountIdentifier;
	BOOL _enabled;
	CNContainerPermissions* _permissions;
	NSString* _externalIdentifier;
	NSString* _externalModificationTag;
	NSString* _externalSyncTag;
	NSData* _externalSyncData;
	NSString* _constraintsPath;
	NSString* _meIdentifier;
	unsigned long long _restrictions;
	CNContainer* _snapshot;
	BOOL _guardianRestricted;
	BOOL _guardianStateDirty;
	NSDate* _lastSyncDate;

}

@property (nonatomic,copy,readonly) CNContainer * snapshot; 
@property (nonatomic,copy,readonly) NSString * externalIdentifier;                               //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalModificationTag;                          //@synthesize externalModificationTag=_externalModificationTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalSyncTag;                                  //@synthesize externalSyncTag=_externalSyncTag - In the implementation block
@property (nonatomic,copy,readonly) NSData * externalSyncData;                                   //@synthesize externalSyncData=_externalSyncData - In the implementation block
@property (nonatomic,copy,readonly) NSString * constraintsPath;                                  //@synthesize constraintsPath=_constraintsPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * meIdentifier;                                     //@synthesize meIdentifier=_meIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long restrictions;                                  //@synthesize restrictions=_restrictions - In the implementation block
@property (getter=isGuardianStateDirty,nonatomic,readonly) BOOL guardianStateDirty;              //@synthesize guardianStateDirty=_guardianStateDirty - In the implementation block
@property (nonatomic,readonly) int iOSLegacyIdentifier;                                          //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountIdentifier;                                //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy,readonly) CNContainerPermissions * permissions;                        //@synthesize permissions=_permissions - In the implementation block
@property (getter=isGuardianRestricted,nonatomic,readonly) BOOL guardianRestricted;              //@synthesize guardianRestricted=_guardianRestricted - In the implementation block
@property (getter=isParentallyManaged,nonatomic,readonly) BOOL parentallyManaged; 
@property (nonatomic,readonly) NSDate * lastSyncDate;                                            //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                                                   //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)predicateForContainersWithIdentifiers:(id)arg1 ;
+(id)predicateForContainerOfContactWithIdentifier:(id)arg1 ;
+(id)predicateForContainerOfGroupWithIdentifier:(id)arg1 ;
+(id)predicateForContainersInAccountWithIdentifier:(id)arg1 includingDisabledContainers:(BOOL)arg2 ;
+(id)predicateForContainersInAccountWithIdentifier:(id)arg1 ;
+(id)predicateForContainersInAccountWithExternalIdentifier:(id)arg1 ;
+(id)predicateForDefaultContainerForAccountWithIdentifier:(id)arg1 ;
+(id)predicateForContainersIncludingDisabled:(BOOL)arg1 ;
+(id)predicateForLocalContainerIncludingDisabled:(BOOL)arg1 ;
+(id)predicateForiOSLegacyIdentifier:(int)arg1 ;
+(id)makeDefaultContainerPermissions;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEnabled;
-(NSDate *)lastSyncDate;
-(NSString *)accountIdentifier;
-(unsigned long long)restrictions;
-(CNContainer *)snapshot;
-(id)initWithContainer:(id)arg1 ;
-(int)iOSLegacyIdentifier;
-(NSString *)externalIdentifier;
-(NSString *)externalModificationTag;
-(NSString *)externalSyncTag;
-(NSData *)externalSyncData;
-(NSString *)constraintsPath;
-(NSString *)meIdentifier;
-(BOOL)isGuardianRestricted;
-(BOOL)isGuardianStateDirty;
-(CNContainerPermissions *)permissions;
-(id)initWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 name:(id)arg3 type:(long long)arg4 permissions:(id)arg5 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 iOSLegacyIdentifier:(int)arg4 accountIdentifier:(id)arg5 enabled:(BOOL)arg6 permissions:(id)arg7 externalIdentifier:(id)arg8 externalModificationTag:(id)arg9 externalSyncTag:(id)arg10 externalSyncData:(id)arg11 constraintsPath:(id)arg12 meIdentifier:(id)arg13 restrictions:(unsigned long long)arg14 guardianRestricted:(BOOL)arg15 lastSyncDate:(id)arg16 ;
-(id)descriptionForContainerType:(long long)arg1 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 ;
-(BOOL)isParentallyManaged;
@end

