/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


@class NSString;

@interface ABFavoritesEntry : NSObject {

	int _abUid;
	int _abIdentifier;
	NSString* _value;
	int _property;
	int _type;
	unsigned _dirty : 1;
	NSString* _label;
	NSString* _name;
	NSString* _abDatabaseUUID;
	void* _addressBook;

}
+(void)_runLookup;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(int)type;
-(int)identifier;
-(id)value;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)label;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(int)property;
-(void)dictionaryRepresentation:(id*)arg1 isDirty:(BOOL*)arg2 ;
-(int)_abUid;
-(id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 type:(int)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2 ;
-(void)_unqueueLookup;
-(void)_queueLookup;
-(id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(id)nonLocalizedLabel;
-(void*)ABPerson;
-(void)recheckAddressBook;
-(void)_lookupNotFound;
-(void)_lookupChanged:(id)arg1 ;
-(void)_postEntryChanged;
@end

