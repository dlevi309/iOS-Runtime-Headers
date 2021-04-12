/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSMutableArray, NSString, NSArray, NSDictionary;

@interface CNSaveRequest : NSObject <NSSecureCoding> {

	NSMutableDictionary* _addedContactsByIdentifier;
	NSMutableArray* _updatedContacts;
	NSMutableDictionary* _deletedContactsByIdentifier;
	NSString* _meCardIdentifier;
	NSMutableDictionary* _addedGroupsByIdentifier;
	NSMutableArray* _updatedGroups;
	NSMutableDictionary* _deletedGroupsByIdentifier;
	NSMutableDictionary* _addedMembersByGroupIdentifier;
	NSMutableDictionary* _removedMembersByGroupIdentifier;
	NSMutableDictionary* _addedSubgroupsByGroupIdentifier;
	NSMutableDictionary* _removedSubgroupsByGroupIdentifier;
	NSMutableDictionary* _addedContainersByIdentifier;
	NSMutableArray* _updatedContainers;
	NSMutableDictionary* _deletedContainersByIdentifier;
	NSMutableDictionary* _movedContainersByIdentifier;
	NSMutableDictionary* _addedAccountContainersByIdentifier;
	NSMutableDictionary* _defaultAccountContainersByIdentifier;
	NSMutableArray* _contactChangeRequests;
	NSMutableArray* _addedAccounts;
	NSMutableArray* _removedAccounts;
	NSMutableDictionary* _parentRecordsByIdentifier;
	BOOL _unsafeApplyChangesOnly;
	BOOL _ignoresGuardianRestrictions;
	NSString* _saveRequestIdentifier;
	NSString* _changeHistoryClientIdentifier;

}

@property (nonatomic,copy,readonly) NSString * storeIdentifier; 
@property (nonatomic,copy,readonly) NSArray * allGroupIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * allContactIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * allContacts; 
@property (nonatomic,copy,readonly) NSArray * allGroups; 
@property (nonatomic,copy,readonly) NSArray * allContainers; 
@property (nonatomic,copy,readonly) NSArray * allAccountIdentifierStrings; 
@property (nonatomic,copy,readonly) NSArray * contactChangeRequests; 
@property (assign,nonatomic) BOOL unsafeApplyChangesOnly;                                                          //@synthesize unsafeApplyChangesOnly=_unsafeApplyChangesOnly - In the implementation block
@property (nonatomic,copy,readonly) NSArray * addedAccounts;                                                       //@synthesize addedAccounts=_addedAccounts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * removedAccounts;                                                     //@synthesize removedAccounts=_removedAccounts - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * defaultAccountContainersByAccountIdentifier; 
@property (nonatomic,copy,readonly) NSString * saveRequestIdentifier;                                              //@synthesize saveRequestIdentifier=_saveRequestIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * addedContactsByContainerIdentifier; 
@property (nonatomic,copy,readonly) NSArray * updatedContacts; 
@property (nonatomic,copy,readonly) NSArray * deletedContacts; 
@property (nonatomic,copy,readonly) NSDictionary * deletedContactsByIdentifier;                                    //@synthesize deletedContactsByIdentifier=_deletedContactsByIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * meCardIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * addedGroupsByContainerIdentifier; 
@property (nonatomic,copy,readonly) NSArray * updatedGroups; 
@property (nonatomic,copy,readonly) NSArray * deletedGroups; 
@property (nonatomic,copy,readonly) NSDictionary * addedMembersByGroupIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * removedMembersByGroupIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * addedSubgroupsByGroupIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * removedSubgroupsByGroupIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * addedContainersByParentContainerIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * addedAccountContainersByParentContainerIdentifier; 
@property (nonatomic,copy,readonly) NSArray * deletedContainers; 
@property (nonatomic,copy,readonly) NSArray * updatedContainers; 
@property (nonatomic,copy,readonly) NSDictionary * movedContainersByParentContainerIdentifier; 
@property (assign,nonatomic) BOOL ignoresGuardianRestrictions;                                                     //@synthesize ignoresGuardianRestrictions=_ignoresGuardianRestrictions - In the implementation block
@property (assign,nonatomic) BOOL ignoresParentalRestrictions; 
@property (nonatomic,copy) NSString * changeHistoryClientIdentifier;                                               //@synthesize changeHistoryClientIdentifier=_changeHistoryClientIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)allGroups;
-(NSArray *)allContainers;
-(NSString *)storeIdentifier;
-(void)addAccount:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(NSString *)saveRequestIdentifier;
-(void)updateContact:(id)arg1 ;
-(id)allAccountIdentifiers;
-(NSArray *)allContacts;
-(NSArray *)contactChangeRequests;
-(NSDictionary *)addedContactsByContainerIdentifier;
-(NSArray *)updatedContacts;
-(NSArray *)deletedContacts;
-(NSArray *)addedAccounts;
-(NSDictionary *)addedAccountContainersByParentContainerIdentifier;
-(NSDictionary *)addedMembersByGroupIdentifier;
-(NSDictionary *)addedSubgroupsByGroupIdentifier;
-(NSDictionary *)addedGroupsByContainerIdentifier;
-(id)groupWithAddedSubgroupForGroupIdentifier:(id)arg1 ;
-(BOOL)ignoresGuardianRestrictions;
-(NSString *)changeHistoryClientIdentifier;
-(id)allContainerIdentifierStrings:(BOOL*)arg1 ;
-(NSArray *)allContactIdentifiers;
-(NSArray *)allGroupIdentifiers;
-(NSArray *)removedAccounts;
-(NSDictionary *)defaultAccountContainersByAccountIdentifier;
-(NSArray *)updatedContainers;
-(NSDictionary *)deletedContactsByIdentifier;
-(NSArray *)deletedGroups;
-(NSArray *)updatedGroups;
-(id)groupWithAddedMemberForGroupIdentifier:(id)arg1 ;
-(NSDictionary *)removedMembersByGroupIdentifier;
-(id)groupWithRemovedMemberForGroupIdentifier:(id)arg1 ;
-(NSDictionary *)removedSubgroupsByGroupIdentifier;
-(id)groupWithRemovedSubgroupForGroupIdentifier:(id)arg1 ;
-(void)deleteGroup:(id)arg1 ;
-(void)addMember:(id)arg1 toGroup:(id)arg2 ;
-(NSString *)meCardIdentifier;
-(NSArray *)deletedContainers;
-(NSDictionary *)addedContainersByParentContainerIdentifier;
-(void)queueUpdatedObject:(id)arg1 intoArray:(id)arg2 ;
-(void)_insertContact:(id)arg1 intoDictionary:(id)arg2 complementDictionary:(id)arg3 ;
-(id)flattenedDictionaryForDictionaryOfTuples:(id)arg1 ;
-(id)_dictionaryOfArraysFromDictionaryOfDictionaries:(id)arg1 ;
-(id)allContainerIdentifiers:(BOOL*)arg1 ;
-(void)setIgnoresGuardianRestrictions:(BOOL)arg1 ;
-(void)addContact:(id)arg1 toContainerWithIdentifier:(id)arg2 ;
-(void)deleteContact:(id)arg1 ;
-(void)setMeCardIdentifier:(NSString *)arg1 ;
-(void)addGroup:(id)arg1 toContainerWithIdentifier:(id)arg2 ;
-(void)updateGroup:(id)arg1 ;
-(void)removeMember:(id)arg1 fromGroup:(id)arg2 ;
-(void)addSubgroup:(id)arg1 toGroup:(id)arg2 ;
-(void)removeSubgroup:(id)arg1 fromGroup:(id)arg2 ;
-(NSDictionary *)movedContainersByParentContainerIdentifier;
-(void)addContainer:(id)arg1 toContainerWithIdentifier:(id)arg2 ;
-(void)addContainer:(id)arg1 toAccountWithIdentifier:(id)arg2 ;
-(void)setContainer:(id)arg1 asDefaultContainerOfAccountWithIdentifier:(id)arg2 ;
-(void)moveContainer:(id)arg1 toContainerWithIdentifier:(id)arg2 ;
-(void)deleteContainer:(id)arg1 ;
-(void)updateContainer:(id)arg1 ;
-(void)linkContact:(id)arg1 toContact:(id)arg2 ;
-(void)unlinkContact:(id)arg1 ;
-(void)preferLinkedContactForName:(id)arg1 inUnifiedContact:(id)arg2 ;
-(void)preferLinkedContactForImage:(id)arg1 inUnifiedContact:(id)arg2 ;
-(NSArray *)allAccountIdentifierStrings;
-(BOOL)ignoresParentalRestrictions;
-(void)setIgnoresParentalRestrictions:(BOOL)arg1 ;
-(BOOL)unsafeApplyChangesOnly;
-(void)setUnsafeApplyChangesOnly:(BOOL)arg1 ;
-(void)setChangeHistoryClientIdentifier:(NSString *)arg1 ;
-(void)setLinkIdentifier:(id)arg1 forContact:(id)arg2 ;
@end

