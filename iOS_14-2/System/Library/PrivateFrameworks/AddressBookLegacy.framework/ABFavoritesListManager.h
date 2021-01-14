/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
@class NSMutableArray;

@interface ABFavoritesListManager : NSObject {

	void* _addressBook;
	NSMutableArray* _list;
	CFDictionaryRef _uidToEntry;
	struct {
		unsigned dirty : 1;
		unsigned postCount : 1;
		unsigned needsReload : 1;
		unsigned unused : 29;
	}  _flags;

}
+(id)sharedInstance;
+(id)sharedInstanceWithAddressBook:(void*)arg1 ;
-(void)removeAllEntries;
-(BOOL)isFull;
-(void)save;
-(void)_addEntryToMap:(id)arg1 ;
-(void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2 ;
-(BOOL)_isValueForEntry:(id)arg1 equalToValue:(id)arg2 ;
-(void)removeEntryAtIndex:(long long)arg1 ;
-(void)saveImmediately;
-(void)recacheIdentitiesSoon;
-(id)entries;
-(void)addEntry:(id)arg1 ;
-(BOOL)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2 ;
-(BOOL)shouldNotReportFavoritesError:(id)arg1 ;
-(void)reportFavoritesIssue:(id)arg1 ;
-(void)_entryIdentityChanged:(id)arg1 ;
-(void)_loadListWithAddressBook:(void*)arg1 ;
-(id)entriesForPeople:(id)arg1 ;
-(id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 identifier:(int)arg4 value:(id)arg5 label:(id)arg6 ;
-(id)entriesForPerson:(void*)arg1 ;
-(id)entryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)entryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(void)_scheduleSave;
-(void)_delayedLookup;
-(id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 value:(id)arg4 label:(id)arg5 ;
-(BOOL)containsEntryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(void)_listChangedExternally;
-(BOOL)containsEntryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(BOOL)addEntryForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3 ;
-(void)_postChangeNotification;
-(id)initWithAddressBook:(void*)arg1 ;
-(void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)_loadList;
-(void)dealloc;
@end

