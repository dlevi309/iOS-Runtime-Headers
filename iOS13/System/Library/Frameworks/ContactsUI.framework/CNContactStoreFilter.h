/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactFilter.h>

@class NSSet;

@interface CNContactStoreFilter : CNContactFilter {

	BOOL _isServerFilter;
	NSSet* _groupIdentifiers;
	NSSet* _containerIdentifiers;

}

@property (nonatomic,retain) NSSet * groupIdentifiers;                  //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
@property (nonatomic,retain) NSSet * containerIdentifiers;              //@synthesize containerIdentifiers=_containerIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL showsEverything; 
@property (assign,nonatomic) BOOL isServerFilter;                       //@synthesize isServerFilter=_isServerFilter - In the implementation block
+(BOOL)getContainerIdentifiers:(id*)arg1 groupIdentifiers:(id*)arg2 serverFilter:(BOOL*)arg3 fromLegacyDictionary:(id)arg4 contactStore:(id)arg5 ;
+(BOOL)getContainerIdentifiers:(id*)arg1 groupIdentifiers:(id*)arg2 serverFilter:(BOOL*)arg3 fromSundanceToOkemoAndAddressBookUIDictionary:(id)arg4 contactStore:(id)arg5 ;
+(BOOL)getContainerIdentifiers:(id*)arg1 groupIdentifiers:(id*)arg2 serverFilter:(BOOL*)arg3 fromPreSundanceDictionary:(id)arg4 contactStore:(id)arg5 ;
+(id)contactStoreFilterFromPreferencesWithContactStore:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicate;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSSet *)containerIdentifiers;
-(NSSet *)groupIdentifiers;
-(id)initWithDictionaryRepresentation:(id)arg1 contactStore:(id)arg2 ;
-(id)dictionaryRepresentationWithContactStore:(id)arg1 ;
-(void)addAddressBookUIKeysToDictionaryRepresentation:(id)arg1 withAllContainers:(id)arg2 excludedContainers:(id)arg3 excludedGroups:(id)arg4 ;
-(BOOL)supportsSections;
-(BOOL)showsEverything;
-(void)saveToPreferencesWithContactStore:(id)arg1 ;
-(void)setGroupIdentifiers:(NSSet *)arg1 ;
-(void)setContainerIdentifiers:(NSSet *)arg1 ;
-(BOOL)isServerFilter;
-(void)setIsServerFilter:(BOOL)arg1 ;
@end

