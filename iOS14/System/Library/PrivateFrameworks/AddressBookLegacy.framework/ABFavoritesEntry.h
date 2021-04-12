/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(int)property;
-(int)_abUid;
-(void)dictionaryRepresentation:(id*)arg1 isDirty:(BOOL*)arg2 ;
-(void*)ABPerson;
-(int)type;
-(void)_queueLookup;
-(id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 type:(int)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2 ;
-(void)_unqueueLookup;
-(id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(id)nonLocalizedLabel;
-(void)recheckAddressBook;
-(void)_lookupNotFound;
-(void)_lookupChanged:(id)arg1 ;
-(void)_postEntryChanged;
-(int)identifier;
-(id)displayName;
-(id)label;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

